// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsController.h"

#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/WorldGeneration/OceanManager.h"

UPhysicsController::UPhysicsController()
{
	PrimaryComponentTick.bCanEverTick = true;


}










void UPhysicsController::BeginPlay()
{

	Super::BeginPlay();
	OceanManager = Cast<AOceanManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AOceanManager::StaticClass()));
	CurrentSpeedSoftCap = 0;;
	
	ComputedForwardDrag = ReelAcceleration / (MaxTerminalVelocity * MaxTerminalVelocity);
	// Scale the lateral bite based on the ratio
	ComputedLateralDrag = ComputedForwardDrag * LateralGripRatio;
	CurrentForwardDrag = ComputedForwardDrag;
	CurrentLateralDrag = ComputedLateralDrag;
}
// Engine Main Loop
float UPhysicsController::HandleSuspensionNeed()
{
	if (!OceanManager || !PhysicsRoot) return 0.0f;
	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
	float WaveZ = OceanManager->GetWaterHeightAt(FVector2D(CurrentLoc.X, CurrentLoc.Y), GetWorld()->GetTimeSeconds());
	float TargetZ = WaveZ + RideHeightOffset;
	float ZError = TargetZ - CurrentLoc.Z;
	return ZError * ZSnapResponsiveness;
}
void UPhysicsController::UpdateKinematicIntent()
{
	/*if (!FMath::IsNearlyZero(CurrentSteeringInput))
	{
		LastActiveSteering = CurrentSteeringInput;
	}

	// 1. THE 45-DEGREE FORCE EQUILIBRIUM
	float AngleRatio = CurrentCarveAngle / 45.0f; 
	float RestoringForce = 0.0f;
    
	// Player Push: Tune MaxTurnRate to change how "punchy" the steering feels.
	float PlayerPushForce = CurrentSteeringInput * -1.0f * MaxTurnRate; 

	if (CurrentAnchor)
	{
		// The closer you get to 45 degrees, the harder the rope rips you back to 0.
		RestoringForce = -FMath::Sign(CurrentCarveAngle) * (AngleRatio * AngleRatio) * MaxExpectedLateralDrag;
	}
	else
	{
		// Free riding: Water naturally straightens the board. 
		RestoringForce = -CurrentCarveAngle * 5.0f; // Tune this to change free-ride floatiness
	}

	// 2. APPLY FORCES (No slow-motion 0.5f dampening)
	float NetForce = PlayerPushForce + RestoringForce;
    
	// Multiply by a larger scalar if it still feels sluggish, but let the forces do the work.
	CurrentCarveAngle += (NetForce * GetWorld()->GetDeltaSeconds() * 5.0f); 

	// 3. THE HARD BOUNDARY
	CurrentCarveAngle = FMath::Clamp(CurrentCarveAngle, -45.0f, 45.0f);*/

	float CurrentTargetLean = CurrentSteeringInput; 
	CurrentLean = FMath::FInterpTo(CurrentLean, CurrentTargetLean, GetWorld()->GetDeltaSeconds(), LeaningBaseSpeed);
	EdgeTiltRatio = FMath::Abs(CurrentLean);
}
FVector2D UPhysicsController::ProcessFreeCarving(float DeltaTime, FVector2d InVelocityXY)
{
	
	float Speed = InVelocityXY.Size();
    
    // Safety check to prevent micro-stutter division by zero
    if (Speed < 10.0f) return InVelocityXY;

    FVector2D TravelDir = InVelocityXY / Speed; 
    float VelocityYaw = FMath::RadiansToDegrees(FMath::Atan2(TravelDir.Y, TravelDir.Y));

    // --- 1. TORQUE (Edge engagement drives heading rotation) ---
    // LiveTurnRate comes from your transmission layer (Sprint/Skid/Normal)
    float TurnRate = EdgeTiltRatio * Speed * MaxTurnRate * DeltaTime;
    BoardHeadingYaw += TurnRate * FMath::Sign(CurrentLean);

    // --- 2. SLIP MATH ---
    // How far off the travel path is the nose actually pointing?
    float SlipAngle = FMath::FindDeltaAngleDegrees(VelocityYaw, BoardHeadingYaw);
    
    // Extract strictly the lateral speed (water hitting broadside)
    float SlipSpeed = Speed * FMath::Abs(FMath::Sin(FMath::DegreesToRadians(SlipAngle)));

    // --- 3. THE BRAKES (Hydrodynamic Drag & Coasting) ---
    // Drag requires BOTH slip speed AND edge tilt (surface area).
    float DragDeceleration = (SlipSpeed * SlipSpeed) * EdgeTiltRatio * FreeEdgeBrakingFriction;
    
    // Base friction prevents infinite gliding when flat
    float CoastingDeceleration = Speed * BaseWaterFriction; 
       
    // Frame-safe clamp: You cannot lose more speed than you possess.
    float TotalSpeedLoss = (DragDeceleration + CoastingDeceleration) * DeltaTime;
    float SafeSpeedLoss = FMath::Min(TotalSpeedLoss, Speed);
    float FinalSpeed = Speed - SafeSpeedLoss;

    // --- 4. THE GRIP (Redirection of Momentum) ---
    // Grip pushes the velocity vector toward the board's heading.
    float GripMagnitude = SlipSpeed * EdgeTiltRatio * FreeLateralGripStiffness * DeltaTime;
    
    // Calculate the right-vector of the physical board heading
    float HeadingRad = FMath::DegreesToRadians(BoardHeadingYaw);
    FVector2D BoardRight(FMath::Sin(HeadingRad), -FMath::Cos(HeadingRad)); 
    
    FVector2D GripVelocityChange = BoardRight * GripMagnitude * FMath::Sign(SlipAngle);
    FVector2D NewVelocity = InVelocityXY + GripVelocityChange;

	
	return InVelocityXY;
    //return NewVelocity.GetSafeNormal() * FinalSpeed;
}


FVector2D UPhysicsController::ProcessTetherCarving(float DeltaTime, FVector2d InVelocityXY)
{
	
	if (!CurrentAnchor) { return ProcessFreeCarving(DeltaTime, InVelocityXY); }

	float Speed = InVelocityXY.Size();
	FVector2D AnchorLocXY = FVector2D(CurrentAnchor->GetActorLocation().X, CurrentAnchor->GetActorLocation().Y);
	FVector2D PlayerLocXY = FVector2D(PhysicsRoot->GetComponentLocation().X, PhysicsRoot->GetComponentLocation().Y);
	FVector2D DirToAnchor = (AnchorLocXY - PlayerLocXY).GetSafeNormal();

	// 1. INWARD VS TANGENTIAL
	FVector2D Tangent = FVector2D(-DirToAnchor.Y, DirToAnchor.X);
	float InwardSpeed = FVector2D::DotProduct(InVelocityXY, DirToAnchor);
	float TangentSpeed = FVector2D::DotProduct(InVelocityXY, Tangent);

	// 2. THE REEL
	InwardSpeed = FMath::Max(InwardSpeed, ReelAcceleration);

	// 3. APPLY EDGE TO TANGENT
	// The player's edge engagement creates lateral force.
	float LateralAccel = EdgeTiltRatio * -CarveAcceleration;
	TangentSpeed += (LateralAccel * FMath::Sign(CurrentLean)) * DeltaTime;

	float SlipRatio = FMath::Abs(FMath::Sin(FMath::DegreesToRadians(CurrentCarveAngle)));
    
	// 2. ISOLATE SLIP SPEED
	// This is the literal speed at which water is hitting the broad side of the board.
	float SlipSpeed = TangentSpeed * SlipRatio;

	// 3. CALCULATE HYDRODYNAMIC DRAG
	// Drag is driven by the square of the SLIP speed (not total speed), scaled by how deep the edge is buried.
	float LateralDragDeceleration = EdgeTiltRatio * (SlipSpeed * SlipSpeed) * HydroDragCoefficient;

	// 4. PREVENT THE EXPLOSION (The Clamp)
	// Calculate the total speed drop for this frame.
	float SpeedDrop = LateralDragDeceleration * DeltaTime;
    
	// You cannot lose more speed than you currently have. This prevents the NaN oscillation crash.
	float MaxPossibleSpeedDrop = FMath::Abs(TangentSpeed);
	float SafeSpeedDrop = FMath::Min(SpeedDrop, MaxPossibleSpeedDrop);

	// 5. APPLY THE SAFE DRAG
	TangentSpeed -= SafeSpeedDrop * FMath::Sign(TangentSpeed);

	// 5. THE TENSION LIMIT TEST
	// High edge engagement + high lateral speed = massive physical tension on the rope.
	float CurrentStress = EdgeTiltRatio * FMath::Abs(TangentSpeed);
    
    FString CurrentStressText = FString::Printf(TEXT("Current Stress: %.2f"), CurrentStress);
    GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, CurrentStressText);
	
	/*if (CurrentStress > RopeSnapThreshold)
	{
		TensionMeter = 0.0f;
		DetachAndSlingshot();
		return InVelocityXY; 
	}*/

	// Build tension for the slingshot reward based on maintained stress
	TensionMeter = FMath::FInterpTo(TensionMeter, CurrentStress, DeltaTime, MaxTensionGainRate);

	// 6. RESOLVE
	FVector2D NewVelocity = (DirToAnchor * InwardSpeed) + (Tangent * TangentSpeed);
	CurrentTravelYaw = FVector(NewVelocity.X, NewVelocity.Y, 0.0f).Rotation().Yaw;
	//return FVector2D::ZeroVector;

	return NewVelocity;
}
void UPhysicsController::UpdateVisualBoard()
{
	if (!BoardMesh || !PhysicsRoot) return;

	// 1. READ TRUE STATE
	float TargetYaw = PhysicsRoot->GetComponentVelocity().Rotation().Yaw - (CurrentLean * StdMaxYaw);
    
	// 2. APPLY ASSET HACKS (Fix your 3D model tonight so you can delete this garbage)
	TargetYaw += 90.0f; 

	// Pitch visually represents the physical lean calculated in UpdateKinematicIntent
	float TargetPitch = CurrentLean * MaxVisualRoll;
	float TargetRoll = 0.0f; 

	FRotator TargetRot = FRotator(TargetPitch, TargetYaw, TargetRoll);
	FRotator CurrentRot = BoardMesh->GetComponentRotation();
	FRotator SmoothedRot = FMath::RInterpTo(CurrentRot, TargetRot, GetWorld()->GetDeltaSeconds(), RollInterpSpeed);
    
	BoardMesh->SetWorldRotation(SmoothedRot);
}

void UPhysicsController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!PhysicsRoot) return;
	if (bResetingDrag)
	{
		CurrentForwardDrag = FMath::FInterpTo(PreResetForwardDrag, ComputedForwardDrag, DeltaTime, DragResetSpeed);
		CurrentDragRatio = CurrentForwardDrag / ComputedForwardDrag;
		if (CurrentForwardDrag == ComputedForwardDrag) bResetingDrag = false;
	}
	FVector CurrentVelocity = PhysicsRoot->GetComponentVelocity();
	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();

	
	FVector2D VelocityXY = FVector2D(CurrentVelocity.X, CurrentVelocity.Y);
	float DesiredZVelocity = HandleSuspensionNeed();

	
	UpdateKinematicIntent();

	switch(CurrentState)
	{
		case EPhysicsState::FreeRide:
			// TODO: Apply steering and base drag
			{
				VelocityXY = ProcessFreeCarving(DeltaTime, VelocityXY);
				break;
			}
	            
		case EPhysicsState::Tether_Carving:
			// TODO: Enforce the circular constraint
			{
				VelocityXY = ProcessTetherCarving(DeltaTime, VelocityXY);
				if (CurrentAnchor)
				DrawDebugLine(GetWorld(), CurrentLoc, CurrentAnchor->GetActorLocation(), FColor::Green,
					false, -1.0f, 0, 5.0f);
				break;
			}

		case EPhysicsState::Overload:
			// TODO: Stop player, play animation
			{
				break;
			}
	}
	
	FVector FinalVelocity = FVector(VelocityXY.X, VelocityXY.Y, DesiredZVelocity);
	PhysicsRoot->SetPhysicsLinearVelocity(FinalVelocity);
	UpdateVisualBoard();
}
void UPhysicsController::InitializeComponent(UPrimitiveComponent* InPhysicsRoot, UPrimitiveComponent* InBoardMesh)
{
	PhysicsRoot = InPhysicsRoot;
	BoardMesh = InBoardMesh;
}
void UPhysicsController::SetSteeringInput(float RawInput)
{
	CurrentSteeringInput = RawInput;
}
void UPhysicsController::AttachToAnchor(AActor* AnchorActor)
{
	if (!bCanAttach) return;
	CurrentAnchor = AnchorActor;
	//CurrentState = EPhysicsState::Tether_Reeling;
	bIsTetherActive = true;
	FVector2D AnchorLocXY = FVector2D(CurrentAnchor->GetActorLocation().X, CurrentAnchor->GetActorLocation().Y);
	FVector2D PlayerLocXY = FVector2D(PhysicsRoot->GetComponentLocation().X, PhysicsRoot->GetComponentLocation().Y);
	CurrentRopeLength = FVector2D::Distance(AnchorLocXY, PlayerLocXY);
	// Default to reeling so the system organically sorts itself out on the next frame based on input
	CurrentState = EPhysicsState::Tether_Carving;
	AttachedSpeed = PhysicsRoot->GetPhysicsLinearVelocity().Size();
	TensionMeter = 0.0f;
	EntrySpeed = PhysicsRoot->GetComponentVelocity().Size2D();
	FVector2D EntryVel = FVector2D(PhysicsRoot->GetComponentVelocity().X, PhysicsRoot->GetComponentVelocity().Y);
	FVector2D DirToAnchor = (AnchorLocXY - PlayerLocXY).GetSafeNormal();
	// Prevent division by zero and establish a minimum stiffness floor 
	// so players can't exploit standing still.
	float SafeEntrySpeed = FMath::Max(EntrySpeed, 500.0f); 

	// The Stiffness Multiplier scales based on how fast they entered compared to a theoretical "normal" speed.
	// If normal speed is 3000, and they enter at 1500, stiffness is 0.5.
	CurrentStiffnessMultiplier = SafeEntrySpeed / MaxTerminalVelocity;
	float RawEntryAngle = FMath::RadiansToDegrees(FMath::Acos(FVector2D::DotProduct(EntryVel.GetSafeNormal(), DirToAnchor)));

	// Which side of the anchor are they on? Get the sign.
	FVector2D Tangent = FVector2D(-DirToAnchor.Y, DirToAnchor.X);
	float EntrySign = FMath::Sign(FVector2D::DotProduct(EntryVel, Tangent));

	// Hard-set the starting carve angle. No interp.
	CurrentCarveAngle = FMath::Clamp(RawEntryAngle, 0.0f, 90.0f) * EntrySign;
}
void UPhysicsController::DetachAndSlingshot()
{

	if (!PhysicsRoot) return;
    
	CurrentAnchor = nullptr;
	bIsTetherActive = false;
	CurrentState = EPhysicsState::FreeRide;

	/*// Convert Tension into a strict 0.0 to 1.0 multiplier
	float CurrentTensionRatio = FMath::Clamp(TensionMeter / MaxTensionBoost, 0.0f, 1.0f);

	// INHERIT TANGENTIAL MOMENTUM
	// We launch them exactly in the direction they were already carving.
	FVector CurrentVel = PhysicsRoot->GetPhysicsLinearVelocity();
	FVector LaunchDirection = FVector(CurrentVel.X, CurrentVel.Y, 0.0f).GetSafeNormal(); 
    
	float CurrentSpeed = CurrentVel.Size2D();

	// Reset your hacky drag system
	CurrentDragRatio = 0;
	CurrentForwardDrag = ComputedForwardDrag * 0;
	CurrentLateralDrag = ComputedLateralDrag * 0;
	PreResetForwardDrag = CurrentForwardDrag;
	bResetingDrag = false;
	bCanAttach = true;

	// Apply the boost straight into the momentum vector. 
	PhysicsRoot->SetPhysicsLinearVelocity(LaunchDirection * (CurrentSpeed + (CurrentTensionRatio * MaxSpeedBoost)));
    
	// Restart your drag timer
	GetWorld()->GetTimerManager().SetTimer(DragTimer, this, &UPhysicsController::ResetDrag, FMath::Clamp(TimeAtMaxBoost * CurrentTensionRatio, 1.0f, TimeAtMaxBoost), false);
    
	// Wipe tension so they can't exploit it
	TensionMeter = 0.0f;*/
}
void UPhysicsController::ResetDrag()
{
	bCanAttach = true;
	bResetingDrag = true;
}

/*
*void UPhysicsController::HandleSuspension()
{
	FVector CurrentVel = PhysicsRoot->GetComponentVelocity();
	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
	float WaveZ = 0.0f;
	if (OceanManager) 
	{
		WaveZ = OceanManager->GetWaterHeightAt(FVector2D(CurrentLoc.X, CurrentLoc.Y), GetWorld()->GetTimeSeconds());
	}
	float Depth = WaveZ - CurrentLoc.Z;
	//DrawDebugSphere(GetWorld(), FVector(CurrentLoc.X, CurrentLoc.Y, WaveZ), 30.0f, 12, FColor::Red, false, -1.0f, 0, 3.0f);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Depth: %.2f"), Depth));
	if (Depth > 0.0f) 
	{
		float UpwardSpringForce = Depth * BuoyancyStiffness;
		float ZDampingForce = -CurrentVel.Z * WaterDamping;
		PhysicsRoot->AddForce(FVector::UpVector * (UpwardSpringForce + ZDampingForce), NAME_None, true);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("Upward Spring Force: %.2f"), UpwardSpringForce));
	}
}
void UPhysicsController::DetachAndSlingshot()
{
	if (!PhysicsRoot || !CurrentAnchor) return;

	// ... (Your Slingshot Math) ...
	CurrentSpeedSoftCap = SoftSpeedCap;
	// Clear state
	CurrentAnchor = nullptr;
	bIsTetherActive = false; // Reset the flag!
	CurrentTension = 0.0f;
}

void UPhysicsController::AttachToAnchor(AActor* AnchorActor)
{
	if (!CanAttach) return;
	CurrentAnchor = AnchorActor;
	bIsTetherActive = true; 
	FVector BoardLoc = PhysicsRoot->GetComponentLocation();
	FVector TargetLoc = CurrentAnchor->GetActorLocation();
	float InitialDistance = FVector::Distance(BoardLoc, TargetLoc);
	InitialGrappleDistance = InitialDistance;
	CurrentRestLength = InitialDistance ;
	LastAttachSpeed = PhysicsRoot->GetComponentVelocity().Size2D();
	CurrentSpeedRatio = LastAttachSpeed / SoftSpeedCap;
	CurrentSpeedSoftCap = FMath::Clamp(SoftSpeedCap * SpeedGainCurve->GetFloatValue(CurrentSpeedRatio) ,2000, SoftSpeedCap);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("CurrentSpeedSoftCap: %.2f"), CurrentSpeedSoftCap));
}

void UPhysicsController::ApplyTetherForces()
{

	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();

	if (CurrentAnchor && PhysicsRoot)
	{
		CurrentTension = 0.0f; // Reset every frame
		FVector TargetLoc = CurrentAnchor->GetActorLocation();
		TargetLoc.Z = 0.0f;
		float Distance = FVector::Distance(CurrentLoc, TargetLoc);
		FVector DirToAnchor = (TargetLoc - CurrentLoc).GetSafeNormal();
		float DistanceProgress = 0.0f;
		if (InitialGrappleDistance > 10.0f)
		{
			DistanceProgress = 1.0f - FMath::Clamp(Distance / InitialGrappleDistance, 0.0f, 1.0f);
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Distance Progress: %.2f"), DistanceProgress));
		}
		float RevMultiplier = 1.0f;
		if (EngineDistancePowerCurve)
		{
			RevMultiplier = EngineDistancePowerCurve->GetFloatValue(DistanceProgress);
		}
		FVector Velocity = PhysicsRoot->GetComponentVelocity();
		float TotalSpeed = Velocity.Size2D();
		float ApproachSpeed = FVector::DotProduct(Velocity, DirToAnchor);

		float SpeedRatio = 0.0f;
		if (CurrentSpeedSoftCap > 10.0f) // Safety check against divide-by-zero
		{
			SpeedRatio = TotalSpeed / CurrentSpeedSoftCap;
		}
		
		float SpeedMultiplier = 1.0f; // Default to full power if curve is missing
		if (EngineSpeedMultiplierCurve)
		{
			SpeedMultiplier = EngineSpeedMultiplierCurve->GetFloatValue(CurrentSpeedRatio);
		}
		
		// --- 3. THE MAGIC ENGINE MATH ---
		// Power = Base Speed * Distance Curve * Speed Curve
		float CalculatedMotorSpeed = EngineReelSpeed * RevMultiplier * SpeedMultiplier;
		// BaseSpeed guarantees the line stays taut
		
		float BaseSpeed = FMath::Max(MinimumTautSpeed, ApproachSpeed);
		float DynamicReelSpeed = MinimumTautSpeed + CalculatedMotorSpeed;
		FString DynamicReelSpeedText = FString::Printf(TEXT("DynamicReelSpeed: %.2f (ApproachSpeed: %.2f) | CalcMotorSpeed: %.2f"),
			DynamicReelSpeed, ApproachSpeed, CalculatedMotorSpeed);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, DynamicReelSpeedText);
		CurrentRestLength -= (DynamicReelSpeed * GetWorld()->GetDeltaSeconds());
		CurrentRestLength = FMath::Max(CurrentRestLength, MinRopeLength);
		
		if (Distance > CurrentRestLength)
		{
			float k = FMath::Clamp(Distance - CurrentRestLength, 0.0f,
			TensionCurve ? MaxTension * TensionCurve->GetFloatValue(CurrentSpeedRatio) : MaxTension);
			FString KText = FString::Printf(TEXT("k: %.2f"), k);
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, KText);
			CurrentTension = BungeeStiffness * k;
			FString TensionText = FString::Printf(TEXT("Current Tension: %.2f"), CurrentTension);
			float PullForce = CurrentTension;
			FVector PullDir = (TargetLoc - CurrentLoc).GetSafeNormal();
			FString PullForceText = FString::Printf(TEXT("PullForce: %.2f"), PullForce);
			PhysicsRoot->AddForce(PullDir * PullForce, NAME_None, false);
		}
		
		FString CurrentTensionText = FString::Printf(TEXT("Current Tension: %.2f"), CurrentTension);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, CurrentTensionText);
		FColor RopeColor = CurrentTension > 500.0f ? FColor::Red : FColor::Green;
		DrawDebugLine(GetWorld(), CurrentLoc, TargetLoc, RopeColor, false, -1.0f, 0, 5.0f);
	}
}

void UPhysicsController::SetSteeringInput(float RawInput)
{
	TargetLean = RawInput;
}

void UPhysicsController::SetSkidInput(bool bIsPressed)
{
	bIsSkidding = bIsPressed;
}

void UPhysicsController::SetSprintInput(bool bIsPressed)
{
	bIsSprinting = bIsPressed;
}

void UPhysicsController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	FVector Velocity = PhysicsRoot->GetComponentVelocity();
    float Speed = Velocity.Size2D();

    // --- NEW: THE TETHER COUNTER-LEAN ---
    float EffectiveLean = TargetLean; // Start with raw A/D input

    // Replace 'CurrentAnchor' with whatever your actual anchor variable is named
    if (CurrentAnchor && Speed > 50.0f) 
    {
        FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
        FVector AnchorLoc = CurrentAnchor->GetActorLocation();
        FVector DirToAnchor = (AnchorLoc - CurrentLoc).GetSafeNormal();
        
        // Get our rightward direction of travel
        FVector VelocityRight = FRotator(0.0f, Velocity.Rotation().Yaw + 90.0f, 0.0f).Vector();

        // How far right/left is the anchor? (1.0 = 90 deg right, -1.0 = 90 deg left)
        float AnchorRightDot = FVector::DotProduct(VelocityRight, DirToAnchor);

        // Counter-lean against the rope (Make sure MaxTetherCounterLean is in your .h file!)
        float CounterLean = -AnchorRightDot * MaxTetherCounterLean;

        // Combine input and counter-lean safely
        EffectiveLean = FMath::Clamp(TargetLean + CounterLean, -1.0f, 1.0f);
    }

    // --- 1. SET TARGETS BASED ON INPUT ---
    float TargetStiff = StiffnessCurve ? StdStiffness * StiffnessCurve->GetFloatValue(CurrentSpeedRatio): StdStiffness;
    float TargetFric = StdFriction;
    float TargetMYaw = StdMaxYaw;

    if (bIsSprinting) 
    {
        TargetStiff = SprintStiffness;
        TargetFric = SprintFriction;
        TargetMYaw = SprintMaxYaw;
    }
    else if (bIsSkidding)
    {
        TargetStiff = SkidStiffness;
        TargetFric = SkidFriction;
        TargetMYaw = SkidMaxYaw;
    }

    // --- 2. SMOOTH TRANSITION BETWEEN MODES ---
    LiveStiffness = FMath::FInterpTo(LiveStiffness, TargetStiff, DeltaTime, ModeTransitionSpeed);
    LiveFriction = FMath::FInterpTo(LiveFriction, TargetFric, DeltaTime, ModeTransitionSpeed);
    LiveMaxYaw = FMath::FInterpTo(LiveMaxYaw, TargetMYaw, DeltaTime, ModeTransitionSpeed);

    // --- 3. INPUT SMOOTHING ---
    // IMPORTANT: We use EffectiveLean here now, not TargetLean!
    float TargetRollAngle = EffectiveLean * MaxVisualRoll;
    float TargetYawAngle = EffectiveLean * LiveMaxYaw; 

    CurrentRoll = FMath::FInterpTo(CurrentRoll, TargetRollAngle, DeltaTime, RollInterpSpeed);
    CurrentYawOffset = FMath::FInterpTo(CurrentYawOffset, TargetYawAngle, DeltaTime, YawInterpSpeed);

    // --- 4. VISUALS & PHYSICS ---
    if (BoardMesh)
    {
        if (Speed > 50.0f) { LastTravelYaw = Velocity.Rotation().Yaw; }

        float FinalYaw = LastTravelYaw - CurrentYawOffset;
        float VisualYaw = FinalYaw + 90.0f;
        BoardMesh->SetWorldRotation(FRotator(CurrentRoll, VisualYaw, 0.0f));

        if (Speed > 50.0f)
        {
            // 1. Core Board Vectors
            FVector BoardNoseDir = FRotator(0.0f, FinalYaw, 0.0f).Vector();
            FVector BoardRightEdge = FRotator(0.0f, FinalYaw + 90.0f, 0.0f).Vector();
            
            // 2. TASK 4: CALCULATE THE SWEET SPOT
            float SweetSpotRatio = 0.0f; // 0.0 = no boost, 1.0 = maximum slingshot

            if (CurrentAnchor)
            {
                FVector MoveDir = Velocity.GetSafeNormal();
                FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
                FVector AnchorLoc = CurrentAnchor->GetActorLocation();
                FVector DirToAnchor = (AnchorLoc - CurrentLoc).GetSafeNormal();

                // Calculate the angle between our movement and the tether (0 to 180 degrees)
                float AngleToAnchor = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(MoveDir, DirToAnchor)));
				FString AngleToAnchorText = FString::Printf(TEXT("AngleToAnchor: %.2f"), AngleToAnchor);
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, AngleToAnchorText);
                // How close are we to the Optimal Angle?
                float AngleDiff = FMath::Abs(AngleToAnchor - OptimalTetherAngle);
                
                // Convert to a 0.0 to 1.0 percentage based on our tolerance
                SweetSpotRatio = 1.0f - FMath::Clamp(AngleDiff / SweetSpotTolerance, 0.0f, 1.0f);
            }

            // 3. APPLY SLINGSHOT MODIFIERS
            // If SweetSpotRatio is 1.0, friction drops to 0 (water turns to ice so you don't lose the boost)
            float EffectiveFriction = LiveFriction;
            
            // 4. CALCULATE ALL FORCES
            float SidewaysSlipSpeed = FVector::DotProduct(Velocity, BoardRightEdge);
            float EdgeEngagement = FMath::Abs(CurrentRoll) / MaxVisualRoll; // should be 90 i think
            FString EdgeEngagementText = FString::Printf(TEXT("EdgeEngagement: %.2f"), EdgeEngagement);
            GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, EdgeEngagementText);
            // A. The Grip (Carve)
            FVector EdgeForce = -BoardRightEdge * (SidewaysSlipSpeed * EdgeEngagement * LiveStiffness);
            
            // B. The Brakes (Using our new Slingshot-modified friction)
            FVector DragForce = -Velocity.GetSafeNormal() * (EffectiveFriction * EdgeEngagement);

            // C. The Slingshot Boost (Shoots straight out the visual nose of the board)

            // 5. SHOVE THE BOARD
        	float SpeedRatio = Speed / CurrentSpeedSoftCap;
        	//CurrentSpeedRatio = SpeedRatio;
            FVector BoostForce = BoostCurve ? BoardNoseDir * (SlingshotBoostPower * BoostCurve->GetFloatValue(CurrentSpeedRatio) * SweetSpotRatio) : FVector::ZeroVector;
        	// 2. The Curve! 
        	// If Exponent is 2.0: 0.5 ratio becomes 0.25 penalty (tiny drag).
        	// But if Speed hits 6000 (Ratio 2.0), penalty becomes 4.0 (MASSIVE drag).
        	//float CurvePenalty = FMath::Pow(SpeedRatio, DragCurveExponent);
        	float CurvePenalty = BrakeCurve ? BrakeCurve->GetFloatValue(CurrentSpeedRatio) : FMath::Pow(SpeedRatio, DragCurveExponent);
        	float ActiveDragMultiplier = AeroDragMultiplier;

        	// 2. If we are NOT tethered, drop the drag drastically so we coast!
        	if (!CurrentAnchor)
        	{
        		ActiveDragMultiplier *= CoastingDragMultiplier;
        	}
        	// 3. Create a force pushing exactly backward against our velocity
        	FVector AeroDragForce = -Velocity.GetSafeNormal() * (CurvePenalty * ActiveDragMultiplier );
            FString SpeedText = FString::Printf(TEXT("Speed: %.2f"), Speed);
            GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, SpeedText);

        	FString EffectiveFrictionText = FString::Printf(TEXT("Effective Friction: %.2f"), EffectiveFriction);
        	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, EffectiveFrictionText);
        	FString DragForceText = FString::Printf(TEXT("Drag Force: %.2f"), DragForce.Size());
        	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, DragForceText);
        	FString EdgeForceText = FString::Printf(TEXT("Edge Force: %.2f"), EdgeForce.Size());
        	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, EdgeForceText);
        	// --- 5. SHOVE THE BOARD ---
        	// We just add our new AeroDragForce to the final push!
        	PhysicsRoot->AddForce(EdgeForce + DragForce + AeroDragForce, NAME_None, true);
            
            GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, FString::Printf(TEXT("SweetSpotRatio: %.2f"), SweetSpotRatio));
            // --- DEBUG: SEE THE MAGIC ---
            // Prints the percentage to your screen so you can tune the OptimalTetherAngle live
            if (SweetSpotRatio > 0.1f)
            {
                GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Yellow, FString::Printf(TEXT("SLINGSHOT: %d%%"), FMath::RoundToInt(SweetSpotRatio * 100.0f)));
            }
        }
    }

	


	
	HandleSuspension();
	ApplyTetherForces();
	
}

void UPhysicsController::InitializeComponent(UPrimitiveComponent* InPhysicsRoot, UPrimitiveComponent* InBoardMesh)
{
	PhysicsRoot = InPhysicsRoot;
	BoardMesh = InBoardMesh;
}

/*void UPhysicsController::DisableTether()
{
	CurrentAnchor = nullptr;
	bIsTetherActive = false;
	CurrentTension = 0.0f;
}#1#*/

void UPhysicsController::DisableTether()
{
	/*CurrentAnchor = nullptr;
	bIsTetherActive = false;
	CurrentTension = 0.0f;*/
}

void UPhysicsController::SetSkidInput(bool bIsPressed)
{
	bIsSkidding = bIsPressed;
}

void UPhysicsController::SetSprintInput(bool bIsPressed)
{
	bIsSprinting = bIsPressed;
}
