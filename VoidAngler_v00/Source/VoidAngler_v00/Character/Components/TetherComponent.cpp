// Fill out your copyright notice in the Description page of Project Settings.

#include "TetherComponent.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
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
       float ActualDist = FVector::Dist(TargetLocation, PhysicsRoot->GetComponentLocation());
       CurrentTetherLength = ActualDist + BaseSlack;
        
       CurrentTetherState = ETetherState::Spooling;
       TimeOfRedline = -1.0f; 
       SimulatedTension = 0.0f;

       if (TargetActor)
       {
          AAnchorPoint* Anchor = Cast<AAnchorPoint>(TargetActor);
          if (Anchor && Anchor->IsCheckpoint())
          {
             APlayerCharacter* Player = Cast<APlayerCharacter>(GetOwner());
             if (Player)
             {
                Player->SetCheckpoint(Anchor->GetActorLocation());
             }
          }
       }
    }
    UE_LOG(LogTemp, Log, TEXT("Tether Active. Target: %s"), *TargetLocation.ToString());
}

void UTetherComponent::DetachTether()
{
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
    if (CurrentTetherState == ETetherState::Spooling || (CurrentTetherState == ETetherState::Locked && TimeOfRedline < 0.0f))
    {
        DetachTether();
        UE_LOG(LogTemp, Warning, TEXT("Tactical Release. Momentum Preserved."));
        return;
    }

    if (CurrentTetherState == ETetherState::Locked && TimeOfRedline > 0.0f)
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
        float DragMagnitude = (Speed * Speed) * ForwardDragCoefficient;
        // Drag only applies strictly backwards on the X/Y plane
        FVector ForwardDragForce = -VelDir2D * DragMagnitude;
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
        // 1. THE PERFECT ANTI-DRIFT (Grip Percentage Logic)
        // Calculate exactly how fast we are sliding sideways along the 2D plane
        float LateralSpeed = FVector::DotProduct(Velocity, BoardSide2D);
       
        // This is the EXACT force required to stop the drift in one frame.
        // Because it includes Mass and DeltaTime, it is frame-rate independent.
        FVector PerfectStoppingForce = (-BoardSide2D * LateralSpeed * Mass) / DeltaTime;
       
        // KeelDrag is now your "Grip %" (e.g., 0.1 = 10% Grip)
        float GripPercentage = FMath::Clamp(KeelDrag, 0.0f, 1.0f); 
        FVector AntiDriftForce = PerfectStoppingForce * GripPercentage;
       
        // 2. THE ACTIVE CARVE (Centripetal Force)
        // We use the 3D lean (Z) to determine how much the edge "bites" the water.
        float EdgeBite = BoardSide3D.Z; 
       
        // We scale this force with Speed and Mass so it feels heavy and powerful at Mach 2.
        // Increasing CarveMultiplier makes the turn sharper.
        float CarveMultiplier = 2.0f; 
        FVector ActiveCarveForce = BoardSide2D * -EdgeBite * Speed * (GripPercentage * CarveMultiplier * Mass);
       
        // Apply the combined flat 2D forces. 
        // This is the "Holy Grail": Stable momentum-based grip that can't jitter, 
        // isolated to the 2D plane so it can't fight the suspension.
        PhysicsRoot->AddForce(AntiDriftForce + ActiveCarveForce);
    }
}

void UTetherComponent::ApplyControl()
{
    if (!bIsBraking)
    {
       PhysicsRoot->SetAngularDamping(4.0f);
       FVector CurrentNose = PhysicsRoot->GetRightVector() * -1.0f;
       FVector FlatNose = FVector::VectorPlaneProject(CurrentNose, FVector::UpVector).GetSafeNormal();
       FVector FlatTarget = FVector::VectorPlaneProject(DesiredHeading, FVector::UpVector).GetSafeNormal();
       float HeadingError = FVector::CrossProduct(FlatNose, FlatTarget).Z;
       
       FVector AlignTorque = FVector::UpVector * HeadingError * CameraSteerStrength;
       PhysicsRoot->AddTorqueInRadians(AlignTorque, NAME_None, true);
       
       FVector BankTorque = CurrentNose * HeadingError * -RollStrength; 
       PhysicsRoot->AddTorqueInRadians(BankTorque, NAME_None, true);
    }
    else
    {
       PhysicsRoot->SetAngularDamping(6.0f);
    }

    float TargetPitch = bIsBraking ? BrakingPitchAngle : 0.0f;
    if (bIsBraking) PhysicsRoot->SetAngularDamping(8.0f);
    
    FRotator CurrentRot = PhysicsRoot->GetComponentRotation();
    float BankAngle = CurrentRot.Pitch;
    float TargetAngle = BankAngle - TargetPitch;
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
    if (!PhysicsRoot || CurrentTetherState == ETetherState::Inactive) return;

    FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
    FVector BodyCOM = PhysicsRoot->GetBodyInstance()->GetMassSpaceToWorldSpace().GetLocation();
    FVector TetherLine = (TetherTargetLocation - BodyCOM);
    float Distance = TetherLine.Size();
    FVector TetherDir = TetherLine.GetSafeNormal();
    float DeltaTime = GetWorld()->GetDeltaSeconds();
    FVector PlayerVel = PhysicsRoot->GetComponentVelocity();
    // ---------------------------------------------------------
    // PHASE 1: V2 AUTO-SPOOLING (The Wind-Up)
    // ---------------------------------------------------------
    if (CurrentTetherState == ETetherState::Spooling)
    {
        DrawDebugLine(GetWorld(), CurrentLoc, TetherTargetLocation, FColor::Green, false, -1.f, 0, 3.f);
        
        float ClosingSpeed = FVector::DotProduct(PlayerVel, TetherDir);
        float DynamicSpoolSpeed = AutoSpoolSpeed + FMath::Max(0.0f, ClosingSpeed * 1.5f);
        
        CurrentTetherLength -= (DynamicSpoolSpeed * DeltaTime); 
        CurrentTetherLength = FMath::Max(CurrentTetherLength, MinTetherLength);

        if (Distance >= CurrentTetherLength)
        {
            CurrentTetherState = ETetherState::Locked;
        }
    }

    // ---------------------------------------------------------
    // PHASE 2: REFINED V1 SPRING & REDLINE
    // ---------------------------------------------------------
    if (CurrentTetherState == ETetherState::Locked)
    {
        if (WinchInputValue > 0.1f) 
        {
            CurrentTetherLength -= (ReelInSpeed * DeltaTime * WinchInputValue);
            CurrentTetherLength = FMath::Max(CurrentTetherLength, MinTetherLength);
        }

        float StretchRatio = FMath::Clamp((Distance / CurrentTetherLength), 0.0f, MaxStretchRatioClamp);
        FVector PullForce = TetherDir * TetherStrength * StretchRatio;
        PhysicsRoot->AddForceAtLocation(PullForce, BodyCOM);

        FVector BoardForward = PhysicsRoot->GetRightVector() * -1.0f; 
        float Alignment = FVector::DotProduct(BoardForward, TetherDir);
        float CutEfficiency = FVector::CrossProduct(BoardForward, TetherDir).Size();

        if (Alignment > MinAlignmentForLift) 
        {
            FVector LiftForce = BoardForward * CutEfficiency * FoilLiftStrength;
            PhysicsRoot->AddForce(LiftForce);
        }
        else 
        {
            // Safety: Disconnect if anchor passes behind
            DetachTether();
            return;
        }

        FColor LineColor = (WinchInputValue > 0.1f) ? FColor::Magenta : FColor::Red;
        DrawDebugLine(GetWorld(), CurrentLoc, TetherTargetLocation, LineColor, false, -1.f, 0, 3.f * StretchRatio);

        // --- THE REDLINE TRACKER ---
        if (StretchRatio > TensionStretchThreshold || WinchInputValue > 0.1f)
        {
            SimulatedTension += (TensionBuildRate * DeltaTime); 
        }
        else
        {
            SimulatedTension = FMath::Max(0.0f, SimulatedTension - (TensionDecayRate * DeltaTime));
        }
        
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Simulated Tension: %.2f"), SimulatedTension));
        if (SimulatedTension >= MaxSimulatedTension && TimeOfRedline < 0.0f)
        {
            TimeOfRedline = GetWorld()->GetTimeSeconds();
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("REDLINE REACHED! Whip-Crack Armed."));
        }
    }
}

// Called every frame
void UTetherComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    ApplySuspension();
    ApplyAerodynamics();
    ApplyControl();
    
    if (IsTetherActive())
    {
       if (AttachedActor)
       {
          if (!IsValid(AttachedActor))
          {
             DetachTether();
             return;
          }

          TetherTargetLocation = AttachedActor->GetActorLocation();
          ApplyTetherForces();
       }
    }
}