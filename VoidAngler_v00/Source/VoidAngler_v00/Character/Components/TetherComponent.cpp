// Fill out your copyright notice in the Description page of Project Settings.


#include "TetherComponent.h"

#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"

class APlayerCharacter;
// Sets default values for this component's properties
UTetherComponent::UTetherComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	
	// ...
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

	// 2. Safety Log
	if (PhysicsRoot)
	{
		UE_LOG(LogTemp, Log, TEXT("Tether Initialized. Linked to Physics Root: %s"), *PhysicsRoot->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Tether Initialization Failed: PhysicsRoot is NULL"));
	}
}

void UTetherComponent::SetTetherTargetLocation( AActor* TargetActor,const FVector& TargetLocation)
{
	bIsTetherActive = true;
	TetherTargetLocation = TargetLocation;
	AttachedActor = TargetActor;
	if (PhysicsRoot)
	{
		CurrentTetherLength = FVector::Dist(TargetLocation, PhysicsRoot->GetComponentLocation());
		if (CurrentTetherLength < 100.0f) CurrentTetherLength = 100.0f;
		if (TargetActor)
		{
			AAnchorPoint* Anchor = Cast<AAnchorPoint>(TargetActor);
			if (Anchor && Anchor->IsCheckpoint())
			{
				// Tell the Player (Owner) to save this spot
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
	UE_LOG(LogTemp, Log, TEXT("Tether Detached."));
}

void UTetherComponent::SetEdgeInput(float InputValue)
{
	EdgeInput = InputValue;
}

void UTetherComponent::SetSteeringInput(float StrafeInput, FVector CamForward)
{
	EdgeInput = StrafeInput;
	DesiredHeading = CamForward;
}

void UTetherComponent::SetReelInput(float InputValue)
{
	ReelInput = InputValue;
}

void UTetherComponent::SetBraking(bool bBrakingState)
{
	bIsBraking = bBrakingState;
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
	FVector DownDir = -FVector::UpVector;
	
	for (const FVector& LocalOffset : Offsets)
	{
		// Calculate Leg Position in World Space
		FVector LegStart = BoardLoc + BoardRot.RotateVector(LocalOffset);
		FVector LegEnd = LegStart + (DownDir * TraceDist);

		FHitResult Hit;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(PhysicsRoot->GetOwner());

		if (GetWorld()->LineTraceSingleByChannel(Hit, LegStart, LegEnd, ECC_Visibility, Params))
		{
			// Compression (Spring)
			float Distance = Hit.Distance;
			float Compression = 1.0f - (Distance / HoverHeight);
			Compression = FMath::Max(Compression, 0.0f);
			FVector SpringForce = FVector::UpVector * Compression * ForcePerLeg;

			// Damping (Shock Absorber) - CRITICAL: Get Velocity at the LEG location
			FVector PointVel = PhysicsRoot->GetPhysicsLinearVelocityAtPoint(LegStart);
			float VerticalSpeed = PointVel.Z;
			FVector DampingForce = FVector::UpVector * -VerticalSpeed * DampingPerLeg;

			// Apply
			PhysicsRoot->AddForceAtLocation(SpringForce + DampingForce, LegStart);
			
			// Debug: Blue Legs
			//DrawDebugLine(GetWorld(), LegStart, Hit.Location, FColor::Blue, false, -1.f, 0, 5.f);
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
	else if (Speed > 50.0f)
	{

		// Calculate Lateral Drift (How much are we sliding sideways?)
		float DriftFactor = FVector::DotProduct(VelDir, BoardForward);
	
		// Apply Force against the drift
		FVector KeelForce = -BoardForward * DriftFactor * Speed * KeelDrag;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Keel Force: " + KeelForce.ToString()));
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
		FVector BankTorque = CurrentNose * HeadingError * -RollStrength; // Reuse RollStrength
        
		PhysicsRoot->AddTorqueInRadians(BankTorque, NAME_None, true);

		// Low damping to allow the board to swing into alignment
	}
	else
	{
		PhysicsRoot->SetAngularDamping(6.0f);
		
	}

	
	/*if (FMath::Abs(EdgeInput) > 0.1f && !bIsBraking)
	{
		FVector YawTorque = FVector::UpVector * -EdgeInput * YawStrength;
		FVector RollTorque = PhysicsRoot->GetRightVector() * -EdgeInput * RollStrength;
		PhysicsRoot->AddTorqueInRadians( YawTorque + RollTorque, NAME_None, true);
		PhysicsRoot->SetAngularDamping(3.0f);
	}
	else if (!bIsBraking)
	{
		PhysicsRoot->SetAngularDamping(6.0f);
	}*/



	
	float TargetPitch = 0.0f;
	if (bIsBraking)
	{
		PhysicsRoot->SetAngularDamping(8.0f);
		TargetPitch = 25.0f;
	}
	FRotator CurrentRot = PhysicsRoot->GetComponentRotation();
	float BankAngle = CurrentRot.Pitch;
	float TargetAngle =  BankAngle - TargetPitch;
	float AngleError = FMath::Abs(TargetAngle);
	float NormalizedError;
	if (bIsBraking)
	{
		NormalizedError = 1.0f;
	}
	else
	{
		NormalizedError = FMath::Clamp(AngleError / MaxStabilityAngle, 0.0f, 1.0f);
	}
	float CurveFactor = FMath::Pow(NormalizedError, StabilityExponent);
	if (AngleError > 1.0f)
	{
		float DynamicStrength;
		if (bIsBraking)
		{
			DynamicStrength = 10.0f;
		}
		else
		{
			DynamicStrength = UprightStrength * CurveFactor;
		}
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
	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
	FVector BodyCOM = PhysicsRoot->GetBodyInstance()->GetMassSpaceToWorldSpace().GetLocation();
	
	FVector TetherLine = (TetherTargetLocation - BodyCOM);
	float Distance = TetherLine.Size();
	FVector TetherDir = TetherLine.GetSafeNormal();



	float DeltaTime = GetWorld()->GetDeltaSeconds();
	if (ReelInput > 0.1f) // Reeling In (W)
	{
		CurrentTetherLength -= ReelInSpeed * DeltaTime * ReelInput;
	}
	else if (ReelInput < -0.1f) // Reeling Out (S)
	{
		CurrentTetherLength -= ReelOutSpeed * DeltaTime * ReelInput; // (Minus negative = Plus)
	}
	
	CurrentTetherLength = FMath::Clamp(CurrentTetherLength, MinTetherLength, MaxTetherLength);
	// T2.4: Slack Logic
	//if (CurrentTetherLength < 100.f) CurrentTetherLength = Distance;
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Tether Distance: %.2f CurrentTetherLength: %.2f"), Distance, CurrentTetherLength));
	
	// Only pull if taut
	if (Distance >= CurrentTetherLength)
	{
		float StretchRatio = FMath::Clamp((Distance / CurrentTetherLength), 0.0f, 8.0f) ;
		FVector PullForce = TetherDir * TetherStrength * StretchRatio;
		PhysicsRoot->AddForceAtLocation(PullForce, BodyCOM);
		
		FVector BoardForward = PhysicsRoot->GetRightVector() * -1;
		float Alignment = FVector::DotProduct(BoardForward, TetherDir);
		float CutEfficiency = FVector::CrossProduct(BoardForward, TetherDir).Size();

		if (Alignment > -0.2f) // Don't lift if facing backwards
		{
			FVector LiftForce = BoardForward * CutEfficiency * FoilLiftStrength;
			PhysicsRoot->AddForce(LiftForce);
		}

		// Debug: Red Line (Taut)
		DrawDebugLine(GetWorld(), CurrentLoc, TetherTargetLocation, FColor::Red, false, -1.f, 0, 3.f);
	}
	else
	{
		// Debug: Green Line (Slack)
		DrawDebugLine(GetWorld(), CurrentLoc, TetherTargetLocation, FColor::Green, false, -1.f, 0, 1.f);
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
			// Safety: Did the enemy die/despawn?
			if (!IsValid(AttachedActor))
			{
				DetachTether();
				return;
			}

			// Update Target to the Actor's current real-time location
			TetherTargetLocation = AttachedActor->GetActorLocation();
			ApplyTetherForces();
		}
	}


	
	/*UE_LOG(LogTemp, Log, TEXT("bIsTetherActive: %d, PhysicsRoot->IsSimulatingPhysics(): %d"), bIsTetherActive, PhysicsRoot ? PhysicsRoot->IsSimulatingPhysics() : false);

	FVector BoardLoc = PhysicsRoot->GetComponentLocation();
	FVector DownDir = -FVector::UpVector;
    
	// Trace length: Look a bit further than the desired height to anticipate the ground
	float TraceDist = HoverHeight * 1.5f;
	FVector TraceEnd = BoardLoc + (DownDir * TraceDist);

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(PhysicsRoot->GetOwner());

	bool bHitGround = GetWorld()->LineTraceSingleByChannel(Hit, BoardLoc, TraceEnd, ECC_Visibility, Params);
	if (FMath::Abs(EdgeInput) > 0.1f)
        {
            // A. YAW (Turn Left/Right)
            // Critical Change: Use WORLD UP (Z) for turning in place.
            // Why? If you use Local Up and the board tilts slightly, you start digging into the ground.
            // World Up ensures a clean "Tank Turn" regardless of tilt.
            FVector YawTorque = FVector::UpVector * EdgeInput * YawStrength;

            // B. ROLL (Banking)
            // Bank into the turn. Local Forward is correct here.
            FVector RollTorque = PhysicsRoot->GetRightVector() * EdgeInput * RollStrength;

            PhysicsRoot->AddTorqueInRadians(YawTorque + RollTorque, NAME_None, true);
        }
        else
        {
            // 2. PASSIVE STABILITY (The Autopilot)
            // ONLY run this when the player is NOT pressing input.
            // This prevents the "Fighting" bug.

            FRotator CurrentRot = PhysicsRoot->GetComponentRotation();

            // A. Righting the Ship (Un-Roll)
            // If we are banked, slowly rotate back to flat.
            /*if (FMath::Abs(CurrentRot.Roll) > 1.0f)
            {
                 // Push against the roll angle
                 FVector RightingTorque = PhysicsRoot->GetForwardVector() * -CurrentRot.Roll * 1;
                 PhysicsRoot->AddTorqueInRadians(RightingTorque, NAME_None, true);
            }#1#

            // B. Pitch Correction (Anti-Flip)
            // Always good to keep the nose level when idle.
            if (FMath::Abs(CurrentRot.Pitch) > 1.0f)
            {
                 FVector PitchCorrection = PhysicsRoot->GetRightVector() * -CurrentRot.Pitch * 1;
                 PhysicsRoot->AddTorqueInRadians(PitchCorrection, NAME_None, true);
            }
            
            // C. Kill Spin (Angular Damping)
            // If let go of controls, stop spinning quickly.
            PhysicsRoot->SetAngularDamping(4.0f);
        }

        // 3. ACTIVE TURNING DAMPING
        // If we ARE pressing input, lower the damping so we can actually turn.
        if (FMath::Abs(EdgeInput) > 0.1f)
        {
             PhysicsRoot->SetAngularDamping(1.0f); // Low damping for snappy turns
        }
	if (bHitGround)
	{
		// 1. Calculate Compression (0.0 to 1.0)
		// If we are at the ground (Dist 0), Ratio is 1.0 (Full Force).
		// If we are at HoverHeight, Ratio is 0.0 (No Force).
		float Distance = Hit.Distance;
		float Compression = 1.0f - (Distance / HoverHeight);
        
		// Only push up, never pull down
		Compression = FMath::Max(Compression, 0.0f);

		// 2. Spring Force (Hooke's Law)
		FVector SpringForce = FVector::UpVector * Compression * HoverForce;

		// 3. Damping Force (Friction against vertical movement)
		FVector CurrentVel = PhysicsRoot->GetComponentVelocity();
		// We only care about Up/Down velocity
		float VerticalSpeed = CurrentVel.Z; 
		FVector DampingForce = FVector::UpVector * -VerticalSpeed * HoverDamping;

		// Apply Combined Suspension
		PhysicsRoot->AddForce(SpringForce + DampingForce);

		// Visual Debug: Blue line to ground showing the spring
		DrawDebugLine(GetWorld(), BoardLoc, Hit.Location, FColor::Blue, false, -1.f, 0, 2.f);
	}






	
	if (bIsTetherActive && PhysicsRoot && PhysicsRoot->IsSimulatingPhysics())
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Tether Active. Target: %s"), *TetherTargetLocation.ToString()));
		FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
		FVector TargetLoc = TetherTargetLocation;
		// 1. Get the direction from YOU to the ANCHOR
		FVector ForceDir = (TargetLoc - CurrentLoc).GetSafeNormal();
		FVector PullForce = ForceDir * TetherStrength;
		FVector BoardRight = PhysicsRoot->GetRightVector() * -1;
		FVector SwingDir = FVector::VectorPlaneProject(BoardRight, ForceDir).GetSafeNormal();
		FVector SteeringForce = SwingDir * EdgeInput * SwingStrength;
		float CurrentDistance = FVector::Dist(CurrentLoc, TargetLoc) + 250.0f;
		//bool bIsTetherTight =  CurrentDistance >= CurrentTetherLength;
		if (true)
		{
			float StretchRatio = CurrentDistance / CurrentTetherLength;
			PhysicsRoot->AddForce((SteeringForce + PullForce) * StretchRatio);
			DrawDebugLine(GetWorld(), CurrentLoc, TargetLoc, FColor::Red, false, -1.f, 0, 3.f);
		}
		else
		{
			DrawDebugLine(GetWorld(), CurrentLoc, TargetLoc, FColor::Green, false, -1.f, 0, 1.f);
		}
	}*/
	// ...
}

