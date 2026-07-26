// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsController.h"

#include "Kismet/GameplayStatics.h"
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
}

void UPhysicsController::HandleSuspension()
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
	if (!CurrentAnchor || !PhysicsRoot) return;

	FVector CurrentLoc = PhysicsRoot->GetComponentLocation();
	FVector TargetLoc = CurrentAnchor->GetActorLocation();
	TargetLoc.Z = 0.0f; 
    
	FVector Velocity = PhysicsRoot->GetComponentVelocity();
	FVector DirToAnchor = (TargetLoc - CurrentLoc).GetSafeNormal();
    
	float Distance = FVector::Distance(CurrentLoc, TargetLoc);
    if (Distance <= MinRopeLength) return;
	// How fast are we currently moving directly toward the anchor?
	float ApproachSpeed = FVector::DotProduct(Velocity, DirToAnchor);

	// --- 1. THE WINCH PULL (The Boat) ---
	// Calculate how far below our allowed pull speed we are
	float PullSpeedDeficit = CurrentSpeedSoftCap - ApproachSpeed;
    
	if (PullSpeedDeficit > 0.0f)
	{
		// TetherPullFactor determines how aggressively it yanks you up to the target speed
		float PullForce = PullSpeedDeficit * FMath::Clamp(MaxTension * CurrentSpeedRatio, 5.0f, MaxTension);
		PhysicsRoot->AddForce(DirToAnchor * PullForce, NAME_None, true);
	}

	// --- 2. THE TAUT LINE (The Rope Limit) ---
	// If the player carves hard and exceeds the initial rope length, 
	// the rope acts as a rigid boundary and yanks them into a circular arc.
	if (Distance > InitialGrappleDistance)
	{
		float StretchError = Distance - InitialGrappleDistance;
        
		// High stiffness (RigidRopeStiffness) and damping (RigidRopeDamping) 
		// to prevent bungee bouncing when they hit the end of the rope.
		float CorrectiveTension = (StretchError * BungeeStiffness) + (-ApproachSpeed * 100.0f);
        
		CorrectiveTension = FMath::Max(CorrectiveTension, 0.0f); 
		PhysicsRoot->AddForce(DirToAnchor * CorrectiveTension, NAME_None, true);
	}

	DrawDebugLine(GetWorld(), CurrentLoc, TargetLoc, FColor::Green, false, -1.0f, 0, 5.0f);
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

void UPhysicsController::DisableTether()
{
	CurrentAnchor = nullptr;
	bIsTetherActive = false;
	CurrentTension = 0.0f;
}

