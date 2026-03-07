// Fill out your copyright notice in the Description page of Project Settings.

#include "TetherComponent.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"

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
    FVector DownDir = -FVector::UpVector;
    
    for (const FVector& LocalOffset : Offsets)
    {
       FVector LegStart = BoardLoc + BoardRot.RotateVector(LocalOffset);
       FVector LegEnd = LegStart + (DownDir * TraceDist);

       FHitResult Hit;
       FCollisionQueryParams Params;
       Params.AddIgnoredActor(PhysicsRoot->GetOwner());

       if (GetWorld()->LineTraceSingleByChannel(Hit, LegStart, LegEnd, ECC_Visibility, Params))
       {
          float Distance = Hit.Distance;
          float Compression = FMath::Max(1.0f - (Distance / HoverHeight), 0.0f);
          FVector SpringForce = FVector::UpVector * Compression * ForcePerLeg;

          FVector PointVel = PhysicsRoot->GetPhysicsLinearVelocityAtPoint(LegStart);
          float VerticalSpeed = PointVel.Z;
          FVector DampingForce = FVector::UpVector * -VerticalSpeed * DampingPerLeg;

          PhysicsRoot->AddForceAtLocation(SpringForce + DampingForce, LegStart);
       }
    }
}

void UTetherComponent::ApplyAerodynamics()
{
    FVector Velocity = PhysicsRoot->GetComponentVelocity();
    float Speed = Velocity.Size2D();
    FVector VelDir = Velocity.GetSafeNormal();
    FVector BoardForward = PhysicsRoot->GetForwardVector();
    
    if (bIsBraking)
    {
       FVector BrakeForce = -VelDir * Speed * AirbrakeDrag;
       PhysicsRoot->AddForce(BrakeForce);
       FVector TorqueAxis = FVector::CrossProduct(BoardForward, VelDir);
       PhysicsRoot->AddTorqueInRadians(TorqueAxis * AirbrakeTurnSpeed * AirbrakeAngleForce, NAME_None, true);
       PhysicsRoot->SetAngularDamping(5.0f);
    }
    else if (Speed > MinSpeedForKeelDrag)
    {
       float DriftFactor = FVector::DotProduct(VelDir, BoardForward);
       FVector KeelForce = -BoardForward * DriftFactor * Speed * KeelDrag;
       PhysicsRoot->AddForce(KeelForce);
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