// Fill out your copyright notice in the Description page of Project Settings.

#include "TetherComponent.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "VoidAngler_v00/Enemy/EnemyParent.h"
#include "VoidAngler_v00/WorldGeneration/OceanManager.h"

// Sets default values for this component's properties
UTetherComponent::UTetherComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
}

// Called when the game starts
void UTetherComponent::BeginPlay()
{
    Super::BeginPlay();
    SetComponentTickEnabled(true);
    RegisterComponent();
    AActor* FoundOcean = UGameplayStatics::GetActorOfClass(GetWorld(), AOceanManager::StaticClass());
    if (FoundOcean)
    {
        OceanManager = Cast<AOceanManager>(FoundOcean);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OCEAN MANAGER NOT FOUND!"));
    }
}

void UTetherComponent::Initalize(UPrimitiveComponent* InPhysicsRoot)
{
    PhysicsRoot = InPhysicsRoot;

    if (PhysicsRoot)
    {
       UE_LOG(LogTemp, Log, TEXT("Tether Initialized. Linked to Physics Root: %s"), *PhysicsRoot->GetName());
    }
    else
    {
       UE_LOG(LogTemp, Error, TEXT("Tether Initialization Failed: PhysicsRoot is NULL"));
    }
}

// --- INPUT SETTERS ---

void UTetherComponent::SetEdgeInput(float Value)
{
    EdgeInput = Value;
}

void UTetherComponent::SetSteeringInput(float StrafeInput, FVector CamForward)
{
    EdgeInput = StrafeInput;
    DesiredHeading = CamForward;
}

void UTetherComponent::SetReelInput(float InputValue)
{
    WinchInputValue = InputValue; // Unified internal variable
}

void UTetherComponent::SetBraking(bool bBrakingState)
{
    bIsBraking = bBrakingState;
}

// --- STATE MANAGEMENT ---

void UTetherComponent::SetTetherTargetLocation(AActor* TargetActor, const FVector& TargetLocation)
{
    bIsTetherActive = true;
    TetherTargetLocation = TargetLocation;
    AttachedActor = TargetActor;
    
    if (PhysicsRoot)
    {
        
       if (TargetActor)
       {
           if (ITargetable* Target = Cast<ITargetable>(TargetActor))
           {
               Target->OnHooked();
           }
       }
        
        FVector BodyCOM = PhysicsRoot->GetBodyInstance()->GetMassSpaceToWorldSpace().GetLocation();
        float InitialDistance = FVector::Distance(AttachedActor->GetActorLocation(), BodyCOM);

        // Set the starting mathematical reality
        CurrentRestLength = InitialDistance + BaseSlack;

        // Setup the snappy Auto-Spool yank (e.g., auto-reel in 40% of the line instantly)
        TargetAutoSpoolLength = FMath::Max(MinTetherLength, InitialDistance * 0.9f); 
       // bIsAutoSpooling = true;
        TimeOfRedline = -1.0f; 
        SimulatedTension = 0.0f;

    }
    UE_LOG(LogTemp, Log, TEXT("Tether Active. Target: %s"), *TargetLocation.ToString());
}

void UTetherComponent::DetachTether()
{
    ExecuteSlingshotRelease();
    if (AttachedActor)
    {
        ITargetable* HookedTarget = Cast<ITargetable>(AttachedActor);
        if (HookedTarget)
        {
            HookedTarget->OnReleased();
        }
    }
    bIsTetherActive = false;
    AttachedActor = nullptr;
    TetherTargetLocation = FVector::ZeroVector;
    
    if (CurrentTetherState != ETetherState::DragBurn)
    {
        CurrentTetherState = ETetherState::Inactive;
    }
    
    TimeOfRedline = -1.0f;
    SimulatedTension = 0.0f;
    
    UE_LOG(LogTemp, Log, TEXT("Tether Detached."));
}

// --- RHYTHM & WHIP CRACK ---

void UTetherComponent::EvaluateRhythmInput()
{
    /*if (CurrentTetherState == ETetherState::Spooling || (CurrentTetherState == ETetherState::Locked && TimeOfRedline < 0.0f))
    {
        DetachTether();
        UE_LOG(LogTemp, Warning, TEXT("Tactical Release. Momentum Preserved."));
        return;
    }*/
    
    FString LogMesssage = "Rhythm Input Received.";
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, LogMesssage);
    if (TimeOfRedline > 0.0f)
    {
        float TimeSinceRedline = GetWorld()->GetTimeSeconds() - TimeOfRedline;

        if (TimeSinceRedline <= WhipCrackWindow) 
        {
            // PERFECT WHIP-CRACK (Using specific Board Forward)
            FVector BoardForward = PhysicsRoot->GetRightVector() * -1.0f;
            float CurrentSpeed = PhysicsRoot->GetComponentVelocity().Size();
            float DynamicSpike = WhipCrackVelocitySpike + (CurrentSpeed * WhipCrackSpeedMultiplier);
            PhysicsRoot->AddImpulse(BoardForward * DynamicSpike, NAME_None, true);
            
            DetachTether();
            FString LogMessage = "WHIP-CRACK EXECUTED!";
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, LogMessage);
        }
        else 
        {
            // PUNISHMENT
            CurrentTetherState = ETetherState::DragBurn;
            PhysicsRoot->SetLinearDamping(DragBurnLinearDamping); 
            GetWorld()->GetTimerManager().SetTimer(DragBurnTimerHandle, this, &UTetherComponent::EndDragBurn, DragBurnDuration, false);
            
            DetachTether();
            UE_LOG(LogTemp, Error, TEXT("Redline Missed! Spring Snapped."));
        }
    }
}

void UTetherComponent::EndDragBurn()
{
    if (PhysicsRoot)
    {
        PhysicsRoot->SetLinearDamping(BaseLinearDamping); 
    }
    CurrentTetherState = ETetherState::Inactive;
    UE_LOG(LogTemp, Warning, TEXT("Drag Burn Ended. Speed restored."));
}

// --- PHYSICS SYSTEMS ---

void UTetherComponent::ExecuteSlingshotRelease()
{
    if (CurrentCharge > 5.0f && IsValid(PhysicsRoot))
    {
        // 1. Grab your current physical state
        FVector Velocity = PhysicsRoot->GetPhysicsLinearVelocity();
        float TotalSpeed = Velocity.Size(); // Your absolute total kinetic energy
        FVector ReleaseDir = PhysicsRoot->GetRightVector() * -1.0f; // The Nose
    
        // 2. THE SNAP (Vector Redirection)
        // We instantly convert 100% of your sideways/orbiting speed into pure forward speed.
        // This physically stops the drift dead in its tracks and points you like a laser.
        PhysicsRoot->SetPhysicsLinearVelocity(ReleaseDir * TotalSpeed);
    
        // 3. THE BURST (The Payout)
        float TotalBurst = CurrentCharge * SlingshotForcePerCharge;
    
        // Because your AddImpulse uses 'true' at the end (bVelChange), 
        // it ignores mass and directly adds this number to your speed.
        PhysicsRoot->AddImpulse(ReleaseDir * TotalBurst, NAME_None, true); 

        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, FString::Printf(TEXT("SLINGSHOT! Speed Transferred: %.0f | Burst Added: %.0f"), TotalSpeed, TotalBurst));
    
        // TODO for Sprint 2: If AttachedActor is a Barracuda, call OnLethalStrike() here!
    }

    // Reset charge
    CurrentCharge = 0.0f;
}

void UTetherComponent::ApplySuspension()
{
    float ForcePerLeg = HoverForce * 0.25f;
    float DampingPerLeg = HoverDamping * 0.25f;
    float TraceDist = HoverHeight * 2.0f;
    FVector Offsets[] = {
       FVector( SuspensionSpread.X,  SuspensionSpread.Y, 0),
       FVector( SuspensionSpread.X, -SuspensionSpread.Y, 0),
       FVector(-SuspensionSpread.X,  SuspensionSpread.Y, 0),
       FVector(-SuspensionSpread.X, -SuspensionSpread.Y, 0)
    };

    FVector BoardLoc = PhysicsRoot->GetComponentLocation();
    FRotator BoardRot = PhysicsRoot->GetComponentRotation();
    float CurrentTime = GetWorld()->GetTimeSeconds();
    for (const FVector& LocalOffset : Offsets)
    {
        FVector LegStart = BoardLoc + BoardRot.RotateVector(LocalOffset);
        float WaterZ = 0.0f; 
        if (OceanManager)
        {
            WaterZ = OceanManager->GetWaterHeightAt(FVector2D(LegStart.X, LegStart.Y), CurrentTime);
        }
        float DistanceToWater = LegStart.Z - WaterZ;
        //FVector LegEnd = LegStart + (DownDir * TraceDist);
        
        
        // Draw debug lines
        FColor DebugColor = FColor::Green;
        FVector LegEnd = LegStart + (FVector::DownVector * TraceDist);
        DrawDebugLine(GetWorld(), LegStart, LegEnd, DebugColor, false, -1.0f, 0, 1.0f);


        if (DistanceToWater < TraceDist) 
        {
            // If submerged (negative distance), Compression becomes > 1.0. 
            // This naturally acts as massive buoyancy, pushing the board back to the surface!
            float Compression = FMath::Max(1.0f - (DistanceToWater / HoverHeight), 0.0f);
            FVector SpringForce = FVector::UpVector * Compression * ForcePerLeg;
    
            // Your existing perfect damping math
            FVector PointVel = PhysicsRoot->GetPhysicsLinearVelocityAtPoint(LegStart);
            float VerticalSpeed = PointVel.Z;
            FVector DampingForce = FVector::UpVector * -VerticalSpeed * DampingPerLeg;

            // Push the board up!
            PhysicsRoot->AddForceAtLocation(SpringForce + DampingForce, LegStart);
        }
    }
}

void UTetherComponent::ApplyAerodynamics()
{
    FVector Velocity = PhysicsRoot->GetComponentVelocity();
    float Speed = Velocity.Size2D();
    float DeltaTime = FMath::Max(GetWorld()->GetDeltaSeconds(), 0.001f);
    float Mass = PhysicsRoot->GetMass();
    // --- THE JITTER FIX ---
    // We create perfectly flat 2D vectors. By forcing Z to 0.0f, your aerodynamic forces 
    // are physically incapable of lifting the board or fighting the suspension!
    FVector VelDir2D = FVector(Velocity.X, Velocity.Y, 0.0f).GetSafeNormal();
    
    FVector BoardSide3D = PhysicsRoot->GetForwardVector();
    FVector BoardSide2D = FVector(BoardSide3D.X, BoardSide3D.Y, 0.0f).GetSafeNormal();

    if (Speed > 100.0f) 
    {
        float BaseDrag = (Speed * Speed) * ForwardDragCoefficient * Mass;
    
        // 2. The Continuous Terminal Curve
        // No more 80% hack. This applies a curve that starts at 1.0 (no extra drag) 
        // and exponentially explodes ONLY as you push deep into max speed.
        float SpeedRatio = FMath::Clamp(Speed / MaxCarveSpeed, 0.0f, 1.0f);
    
        // As SpeedRatio approaches 1.0, this multiplier spikes, acting as a natural wall.
        float TerminalMultiplier = 1.0f + (FMath::Pow(SpeedRatio, 4.0f) * WaterFrictionStrength); 

        // 3. Final Application
        float TotalDragMagnitude = BaseDrag * TerminalMultiplier;
        FVector ForwardDragForce = -VelDir2D * TotalDragMagnitude;
        PhysicsRoot->AddForce(ForwardDragForce);
    }
    
    if (bIsBraking)
    {
        FVector BrakeForce = -VelDir2D * Speed * AirbrakeDrag;
        PhysicsRoot->AddForce(BrakeForce);
       
        // We keep the 3D vectors ONLY for the braking torque, because torque doesn't lift the board!
        FVector VelDir3D = Velocity.GetSafeNormal();
        FVector TorqueAxis = FVector::CrossProduct(BoardSide3D, VelDir3D);
        PhysicsRoot->AddTorqueInRadians(TorqueAxis * AirbrakeTurnSpeed * AirbrakeAngleForce, NAME_None, true);
    }
    else if (Speed > MinSpeedForKeelDrag)
    {
        // 1. THE RAW ANTI-DRIFT
        float LateralSpeed = FVector::DotProduct(Velocity, BoardSide2D);
        FVector PerfectStoppingForce = (-BoardSide2D * LateralSpeed * Mass) / DeltaTime;
       
        float GripPercentage = FMath::Clamp(KeelDrag, 0.0f, 1.0f);
        if (!IsValid(AttachedActor))
        {
            // If free-roaming, drastically reduce grip for a loose, flowy carve
            GripPercentage *= UntetheredGripMultiplier;
        }
        FVector AntiDriftForce = PerfectStoppingForce * GripPercentage;
       
        // 1.5 THE SAFETY CLAMP (The "Blowout" Mechanic)
        // We physically forbid the anti-drift from exceeding your MaxKeelGripForce.
        // GetClampedToMaxSize perfectly preserves the direction but scales the power down
        if (IsValid(AttachedActor))
        {
            AntiDriftForce = AntiDriftForce.GetClampedToMaxSize(MaxKeelGripForce);
        }
        // 2. THE ACTIVE CARVE
        float EdgeBite = BoardSide3D.Z; 
        float CarveMultiplier = 2.0f; 
        FVector ActiveCarveForce = BoardSide2D * -EdgeBite * Speed * (GripPercentage * CarveMultiplier * Mass);
        
        // Optional: You can also clamp the carve force if you find high-speed turning too violent
        // ActiveCarveForce = ActiveCarveForce.GetClampedToMaxSize(MaxKeelGripForce * 1.5f);
       
        // Apply the combined flat 2D forces
        PhysicsRoot->AddForce(AntiDriftForce + ActiveCarveForce);
    }
}

void UTetherComponent::ApplyControl()
{
    CurrentSteerCommand = -1 * FMath::FInterpTo(CurrentSteerCommand, EdgeInput, GetWorld()->GetDeltaSeconds(), SteerInterpSpeed);
    
    FVector CurrentNose = PhysicsRoot->GetRightVector() * -1.0f;
    FVector BoardSide = PhysicsRoot->GetForwardVector(); // The axis sticking out the side of your board

    if (!bIsBraking)
    {
        PhysicsRoot->SetAngularDamping(4.0f);
        
        // 1. STEERING (YAW)
        FVector AlignTorque = FVector::UpVector * CurrentSteerCommand * CameraSteerStrength;
        PhysicsRoot->AddTorqueInRadians(AlignTorque, NAME_None, true);
       
        // 2. INITIAL TURN KICK (ROLL/PITCH)
        // We keep this to make the joystick feel responsive, but the spring will do the heavy holding.
        FVector BankTorque = CurrentNose * CurrentSteerCommand * -RollStrength; 
        PhysicsRoot->AddTorqueInRadians(BankTorque, NAME_None, true);
    }
    else
    {
        PhysicsRoot->SetAngularDamping(6.0f);
    }

    // --- PHASE 1 & 2: THE PHYSICS-DRIVEN LEAN ---
    float DynamicTargetPitch = 0.0f;

    // Check if we are currently holding the rope
    if (IsValid(AttachedActor))
    {
        // Calculate lateral velocity (how fast are we sliding sideways?)
        FVector Velocity = PhysicsRoot->GetPhysicsLinearVelocity();
        float LateralSpeed = FVector::DotProduct(Velocity, BoardSide);
        
        // Map that speed to a ratio (-1.0 to 1.0)
        float LeanRatio = FMath::Clamp(LateralSpeed / SpeedForMaxLean, -1.0f, 1.0f);
        
        // Multiply by your max angle. 
        // Note: You may need to multiply this by -1.0f depending on which way your cube flips!
        DynamicTargetPitch = LeanRatio * MaxCarveLeanAngle; 
    }

    // If we are braking, pitch up. Otherwise, seek our new dynamic lean angle!
    float TargetPitch = bIsBraking ? BrakingPitchAngle : DynamicTargetPitch;
    
    if (bIsBraking) PhysicsRoot->SetAngularDamping(8.0f);
    
    // --- THE HIJACKED UPRIGHT SPRING ---
    FRotator CurrentRot = PhysicsRoot->GetComponentRotation();
    float BankAngle = CurrentRot.Pitch;
    float TargetAngle = BankAngle - TargetPitch; // The spring now naturally pulls towards your carve angle
    float AngleError = FMath::Abs(TargetAngle);
    
    float NormalizedError = bIsBraking ? 1.0f : FMath::Clamp(AngleError / MaxStabilityAngle, 0.0f, 1.0f);
    float CurveFactor = FMath::Pow(NormalizedError, StabilityExponent);
    
    if (AngleError > 1.0f)
    {
       float DynamicStrength = bIsBraking ? BrakingUprightStrength : (UprightStrength * CurveFactor);
       FVector RightingTorque = PhysicsRoot->GetRightVector() * TargetAngle * DynamicStrength;
       PhysicsRoot->AddTorqueInRadians(RightingTorque, NAME_None, true);
    }
    
    FVector AngularVel = PhysicsRoot->GetPhysicsAngularVelocityInRadians();
    float PitchSpeed = FVector::DotProduct(AngularVel, -PhysicsRoot->GetRightVector());
    FVector PitchDrag = PhysicsRoot->GetRightVector() * PitchSpeed * PitchDamping;

    float YawSpeed = FVector::DotProduct(AngularVel, FVector::UpVector);
    FVector YawDrag = FVector::UpVector * -YawSpeed * YawDamping;

    float RollSpeed = FVector::DotProduct(AngularVel, PhysicsRoot->GetForwardVector());
    FVector RollDrag = PhysicsRoot->GetForwardVector() * RollSpeed * RollDamping;
    
    PhysicsRoot->AddTorqueInRadians(YawDrag + PitchDrag + RollDrag, NAME_None, true);
}

void UTetherComponent::ApplyTetherForces()
{
   if (!IsValid(PhysicsRoot) || !PhysicsRoot->IsSimulatingPhysics() || !IsValid(AttachedActor)) return;

    float DeltaTime = GetWorld()->GetDeltaSeconds();
    if (DeltaTime <= 0.0f) return; 

    FVector BoardLoc = PhysicsRoot->GetComponentLocation();
    FVector TargetLoc = AttachedActor->GetActorLocation(); 
    FVector TetherVec = TargetLoc - BoardLoc;
    float CurrentDistance = TetherVec.Size();
    
    if (CurrentDistance < 50.0f) return;
    
    FVector TetherDir = TetherVec / CurrentDistance; 
    FVector Velocity = PhysicsRoot->GetPhysicsLinearVelocity();
    float CurrentSpeed = Velocity.Size();
    float Mass = PhysicsRoot->GetMass();

    // --- 1. DECONSTRUCT VELOCITY ---
    float InwardSpeed = FVector::DotProduct(Velocity, TetherDir);
    FVector TangentialVelocity = Velocity - (TetherDir * InwardSpeed);
    float TangentialSpeedSq = TangentialVelocity.SizeSquared();

    // --- 2. THE SMOOTH PULL ---
    float SpeedDeficit = MinTowSpeed - InwardSpeed;
    FVector TowForce = FVector::ZeroVector;
    
    if (SpeedDeficit > 0.0f)
    {
        // Ease-in the tow force so it doesn't instantly jerk you at low speeds
        float TowFactor = FMath::Clamp(SpeedDeficit / MinTowSpeed, 0.0f, 1.0f);
        TowForce = TetherDir * (TowFactor * Mass * TowAcceleration * 50.0f);
    }

    // --- 3. THE CORNER CARVE (Centripetal Force) ---
    float CentripetalMagnitude = (Mass * TangentialSpeedSq) / CurrentDistance;
    FVector CentripetalForce = TetherDir * CentripetalMagnitude;

    // --- 4. THE PROGRESSIVE RUBBER BAND ---
    FVector BoundaryForce = FVector::ZeroVector;
    if (CurrentDistance > MaxLeashRadius) 
    {
        float Stretch = CurrentDistance - MaxLeashRadius;
        
        // 1. Pure Linear Spring (No more exponential multiplying)
        float SpringForce = Stretch * BungeeStiffness;
        
        // 2. Linear Damping (Slows you down smoothly without snapping)
        float DampingForce = 0.0f;
        if (InwardSpeed < 0.0f) // If you are moving away from the anchor
        {
            DampingForce = FMath::Abs(InwardSpeed) * BungeeDamping;
        }

        // Combine the forces
        float TotalBungeeAccel = SpringForce + DampingForce;

        // 3. THE SAFETY CLAMP (Kills the Yank)
        // This is the absolute maximum acceleration the rubber band is allowed to apply.
        // If it still yanks too hard, lower this number to 10000.0f or 5000.0f.
        TotalBungeeAccel = FMath::Min(TotalBungeeAccel, MaxBungeeAccel);

        // Apply force based on mass
        BoundaryForce = TetherDir * (TotalBungeeAccel * Mass);
    }

    // Apply the structural physics
    PhysicsRoot->AddForce(TowForce + BoundaryForce);
    
    // --- 5. THE CARVE LIFT & SMOOTH ACCELERATION ---
    FVector BoardForward = PhysicsRoot->GetRightVector() * -1.0f;
    float AlignmentDot = FVector::DotProduct(BoardForward, TetherDir);
    float AngleError = FMath::Abs(AlignmentDot - OptimalCarveDot);
    
    if (AngleError <= CarveTolerance) 
    {
        float CarveQuality = 1.0f - (AngleError / CarveTolerance); 
        
        CurrentCharge += (BaseChargeRate * CarveQuality * DeltaTime);
        CurrentCharge = FMath::Clamp(CurrentCharge, 0.0f, MaxCharge);
        
        // THE ASYMPTOTE: Smoothly curves your acceleration down as you approach Max Speed.
        // At 0 speed, SpeedLimiter is 1.0 (100% engine power). 
        // At 95% max speed, SpeedLimiter is 0.0025 (Barely pushing).
        float SpeedRatio = FMath::Clamp(CurrentSpeed / MaxCarveSpeed, 0.0f, 1.0f);
        float SpeedLimiter = FMath::Pow(1.0f - SpeedRatio, 2.0f);
        
        float DynamicLift = FoilLiftStrength * CarveQuality * (1.0f + (CurrentCharge / 20.0f)) * SpeedLimiter; 
        PhysicsRoot->AddForce(BoardForward * DynamicLift);

        GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Orange, FString::Printf(TEXT("CARVING [Quality: %.2f] CHARGE: %.0f"), CarveQuality, CurrentCharge));
    }
    else
    {
        CurrentCharge = FMath::Max(0.0f, CurrentCharge - (BaseChargeRate * 2.0f * DeltaTime));
    }
    
    // We only deploy the parachute if you are pushing past 80% of your max speed
    

    // --- 6. VISUALS ---
    float ChargeRatio = CurrentCharge / MaxCharge;
    FColor LineColor = FMath::Lerp(FLinearColor::White, FLinearColor(FColor::Orange), ChargeRatio).ToFColor(true);
    float LineThickness = FMath::Lerp(2.0f, 15.0f, ChargeRatio);
    DrawDebugLine(GetWorld(), BoardLoc, TargetLoc, LineColor, false, -1.f, 0, LineThickness);
}

// Called every frame
void UTetherComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    /*ApplySuspension();
    ApplyAerodynamics();
    ApplyControl();
    
    FVector Velocity = PhysicsRoot->GetComponentVelocity();
    FString VelocityMessage = FString::Printf(TEXT("Player Velocity: %.0f"), Velocity.Size());
    GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Green, VelocityMessage);
    
    if (ReelLockoutTimer > 0.0f)
    {
        ReelLockoutTimer -= DeltaTime;
    }
    if (IsTetherActive() && IsValid(AttachedActor))
    {
        if (bIsAutoSpooling)
        {
            CurrentRestLength -= (AutoSpoolSpeed * DeltaTime);
            if (CurrentRestLength <= TargetAutoSpoolLength)
            {
                CurrentRestLength = TargetAutoSpoolLength;
                bIsAutoSpooling = false; // Hand control to player
            }
        }
        else if (WinchInputValue > 0.1f) // "Holding Shift"
        {
            // ONLY reel in if the lockout timer has expired
            if (ReelLockoutTimer <= 0.0f)
            {
                CurrentRestLength -= (ManualSpoolSpeed * DeltaTime * WinchInputValue);
            }
            else 
            {
                // Optional: Feedback that the reel is jammed (sound/UI shake)
            }
            
        }

        // Clamp to prevent universe-ending physics inversions
        CurrentRestLength = FMath::Max(CurrentRestLength, MinTetherLength);

        // 2. EXECUTE PHYSICS BASED ON THE NEW STATE
        ApplyTetherForces();
        //TetherTargetLocation = AttachedActor->GetActorLocation();
    } */
    
}