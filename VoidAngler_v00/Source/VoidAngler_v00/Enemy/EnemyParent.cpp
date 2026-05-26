// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyParent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/WorldGeneration/ProceduralLevelGenerator.h"
// Sets default values
AEnemyParent::AEnemyParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComp;
	CollisionComp->SetSimulatePhysics(true);
	CollisionComp->SetEnableGravity(true);
	CollisionComp->SetCollisionProfileName(TEXT("PhysicsActor"));
	
	// Lock rotations so the physics engine doesn't tumble the fish like a barrel.
	// We will control Yaw manually.
	CollisionComp->BodyInstance.bLockXRotation = true; // Roll
	CollisionComp->BodyInstance.bLockYRotation = true; // Pitch
}

void AEnemyParent::SetTarget(AActor* NewTarget)
{
	TargetActor = NewTarget;
}

// Called when the game starts or when spawned
void AEnemyParent::BeginPlay()
{
	Super::BeginPlay();
	CollisionComp->SetMassOverrideInKg(NAME_None, FightProfile.Mass, true);

	// Get the player character
	PlayerRef = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	

	// Cache the Level Generator
	AActor* GeneratorActor = UGameplayStatics::GetActorOfClass(this, AProceduralLevelGenerator::StaticClass());
	if (GeneratorActor)
	{
		LevelGenRef = Cast<AProceduralLevelGenerator>(GeneratorActor);
	}
	if (PlayerRef)
	{
		SetTarget(PlayerRef);
	}
	CurrentStamina = FightProfile.MaxStamina;
	CurrentState = EEnemyState::Flowing;
}

// Called every frame
void AEnemyParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!TargetActor) return;
	if (true) return;
	float WaterSurfaceZ = 0.0f; // TODO: Hook this up to OceanManager->GetWaterHeightAt()
	float DesiredZ = WaterSurfaceZ - TargetSubmergedDepth;
	
	FVector CurrentLoc = GetActorLocation();
	FVector CurrentVel = CollisionComp->GetPhysicsLinearVelocity();

	// Proportional (Spring): Push up if too deep, push down if too high
	float ZError = DesiredZ - CurrentLoc.Z;
	float SpringForceZ = ZError * BuoyancyStiffness;

	// Derivative (Damper): Fight against vertical velocity to prevent bouncing
	float DamperForceZ = -CurrentVel.Z * BuoyancyDamping;

	// Apply the vertical suspension directly to the physics body
	CollisionComp->AddForce(FVector(0.0f, 0.0f, SpringForceZ + DamperForceZ));
    if (PlayerRef)
    {
    	
        FVector Start = PlayerRef->GetActorLocation() +FVector(0,0, 200);
        FVector End = Start + (LevelGenRef->CurrentTrackDirection * 100.0f);
        DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.0f, 0, 2.0f);
    }
	if (CurrentState == EEnemyState::Flowing)
	{
		if (PlayerRef && LevelGenRef)
		{
			FVector FlowDir = LevelGenRef->GetFlowDirectionAtLocation(GetActorLocation(), 3000.0f);
			FVector TrackRight = FVector::CrossProduct(FVector::UpVector, FlowDir).GetSafeNormal();
			float Mass = CollisionComp->GetMass();

			// 1. FORWARD PROPULSION
			float TargetSpeed = PlayerRef->GetVelocity().Size() + FightProfile.CruisingSpeed;
			float CurrentSpeed = CurrentVel.Size();
			float SpeedError = TargetSpeed - CurrentSpeed;
			FVector ForwardForce = FlowDir * (SpeedError * Mass * 2.0f); 

			// 2. THE FIX: HYDRODYNAMIC KEEL (Anti-Drift)
			// Calculate exactly how fast the fish is sliding sideways off the track
			float LateralSlideSpeed = FVector::DotProduct(CurrentVel, TrackRight);
			
			// Apply a massive counter-force to kill the slide. 
			// (Multiplier of 10.0f acts as the "fin grip". Tune this up if it still drifts).
			FVector AntiDriftForce = -TrackRight * (LateralSlideSpeed * Mass * 10.0f);

			// 3. LATERAL WEAVE (Re-enable this when you are ready)
			CurrentWeaveTime += DeltaTime * FightProfile.WeaveAgility;
			FVector WeaveForce = TrackRight * FMath::Cos(CurrentWeaveTime) * (FightProfile.LateralWeaveWidth * Mass);

			// Apply everything
			CollisionComp->AddForce(ForwardForce + AntiDriftForce + WeaveForce);

			// 4. ROTATION (Look where you are actually moving)
			FVector VelDir = CurrentVel.GetSafeNormal2D();
			if (!VelDir.IsNearlyZero())
			{
				FRotator TargetRot = VelDir.Rotation();
				SetActorRotation(FMath::RInterpTo(GetActorRotation(), TargetRot, DeltaTime, 5.0f));
			}
		}
	}
	else if (CurrentState == EEnemyState::Fighting)
	{
		if (PlayerRef && LevelGenRef)
		{
			// 1. THE RHYTHM TIMER
			FightProfile.TweakTimer -= DeltaTime;
			if (FightProfile.TweakTimer <= 0.0f)
			{
				bIsTweaking = !bIsTweaking;
				// Prototype timing: Thrash for 3 seconds, rest for 1.5 seconds.
				FightProfile.TweakTimer = bIsTweaking ? 3.0f : 1.5f; 
			}

			FVector FlowDir = LevelGenRef->GetFlowDirectionAtLocation(GetActorLocation(), 3000.0f);
			FVector TrackRight = FVector::CrossProduct(FVector::UpVector, FlowDir).GetSafeNormal();
			float Mass = CollisionComp->GetMass();

			// 2. ANTI-DRIFT (Keep it in the lane while fighting)
			float LateralSlideSpeed = FVector::DotProduct(CurrentVel, TrackRight);
			FVector AntiDriftForce = -TrackRight * (LateralSlideSpeed * Mass * 10.0f);
			CollisionComp->AddForce(AntiDriftForce);
			float TargetSpeed = PlayerRef->GetVelocity().Size() + (FightProfile.CruisingSpeed * 0.5f);
			float SpeedError = TargetSpeed - CurrentVel.Size();

			FVector BaselineForce = FVector::ZeroVector;
			// Only apply the pace-car force if it's falling behind the equilibrium speed
			if (SpeedError > 0.0f)
			{
				BaselineForce = FlowDir * (SpeedError * Mass * 2.0f);
			}

			// 4. THE TWEAK (Explosive Escape)
			FVector EscapeForce = FVector::ZeroVector;
			FVector WeaveForce = FVector::ZeroVector;

			if (bIsTweaking)
			{
				// Raw brute force applied ON TOP of the baseline
				EscapeForce = FlowDir * FightProfile.SustainedFightForce;
				
				// Thrash laterally to force the player to edge
				WeaveForce = TrackRight * FMath::Sin(GetWorld()->GetTimeSeconds() * 15.0f) * (FightProfile.SustainedFightForce * 0.5f);
			}

			// Apply the final vector sum. 
			// If resting, this is just (BaselineForce + 0 + 0).
			CollisionComp->AddForce(BaselineForce + EscapeForce + WeaveForce);
			// 3. THE TWEAK (The Burst Pull)

			// 4. DYNAMIC ROTATION
			// Point where it is being dragged or swimming
			FVector VelDir = CurrentVel.GetSafeNormal2D();
			if (!VelDir.IsNearlyZero())
			{
				SetActorRotation(FMath::RInterpTo(GetActorRotation(), VelDir.Rotation(), DeltaTime, 4.0f));
			}

			// 5. STAMINA DRAIN MATH
			// Base drain + punishment for high line tension
			float BaseDrain = 5.0f; 
			float TensionDrain = (CurrentPullTension) * FightProfile.TensionStaminaDrainMultiplier;
			
			CurrentStamina -= (BaseDrain + TensionDrain) * DeltaTime;
            //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("ENEMY: Stamina: %.2f%%"), GetStaminaRatio() * 100.0f), true);
			// Reset tension tracker for the next frame
			CurrentPullTension = 0.0f;

			// 6. THE BREAKING POINT
			if (CurrentStamina <= 0.0f)
			{
				CurrentStamina = 0.0f;
				CurrentState = EEnemyState::Exhausted;
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ENEMY: Exhausted! Execute!"), true);
			}
		}
	}
	/*if (CurrentState == EEnemyState::Flowing)
    {
        // Use our cached, zero-cost pointers!
        if (PlayerRef && LevelGenRef)
        {
            FVector PlayerLoc = PlayerRef->GetActorLocation();
            float PlayerSpeed = PlayerRef->GetVelocity().Size();
            
            // 1. Get the true direction of the "River" from the Generator
            FVector FlowDir = LevelGenRef->GetFlowDirectionAtLocation(GetActorLocation(), 3000.0f);
            
            // TrackRight is perpendicular to the flow (Z is Up)
            FVector TrackRight = FVector::CrossProduct(FVector::UpVector, FlowDir).GetSafeNormal();

            // 2. Advance the Weave Timer
            CurrentWeaveTime += DeltaTime * FightProfile.WeaveAgility;

            // 3. Calculate the invisible "Drafting Target"
            // Project forward down the river from the player's current location
            FVector DraftOffset = FlowDir * FightProfile.PreferredFlowDistance;
            
            // Sweep left and right across the river lane using the sine wave
            float WeaveOffset = FMath::Sin(CurrentWeaveTime) * FightProfile.LateralWeaveWidth;
            FVector LateralOffset = TrackRight * WeaveOffset;

            // The target point in the water
            FVector TargetLoc = PlayerLoc + DraftOffset + LateralOffset;
            TargetLoc.Z = GetActorLocation().Z; // MVP: Keep Z clamped to the water surface

            // 4. Calculate Swim Velocity
            FVector ToTarget = TargetLoc - CurrentLoc;
            
            // The AI Magic: Match the player's raw speed so it doesn't get left behind, 
            // but use its own CruisingSpeed to steer toward its specific lane in the river.
            FVector SwimVelocity = FlowDir * PlayerSpeed; 
            
            if (ToTarget.Size() > 100.0f) // Deadzone to prevent micro-jittering
            {
                 SwimVelocity += (ToTarget.GetSafeNormal() * FightProfile.CruisingSpeed);
            }

            FVector NewLoc = CurrentLoc + (SwimVelocity * DeltaTime);

            // 5. Rotate to face the movement direction smoothly
            FVector MoveDir = (NewLoc - CurrentLoc).GetSafeNormal();
            if (!MoveDir.IsNearlyZero())
            {
                FRotator TargetRot = MoveDir.Rotation();
                SetActorRotation(FMath::RInterpTo(GetActorRotation(), TargetRot, DeltaTime, 3.0f));
            }

            SetActorLocation(NewLoc);
        }
    }
	else if (CurrentState == EEnemyState::Fighting) 
    {
        // 1. THE ESCAPE ATTEMPT
        if (LevelGenRef)
        {
            // The boss tries to violently swim away down the river
            FVector EscapeDir = LevelGenRef->GetFlowDirectionAtLocation(GetActorLocation(), 1000.0f);
            FVector EscapeAcceleration = (EscapeDir * FightProfile.SustainedFightForce) / FightProfile.Mass;
            
            // Add the boss's escape effort to the velocity (fighting the player's TowForce)
            HookedVelocity += EscapeAcceleration * DeltaTime;
        }

        // 2. APPLY KINEMATIC MOVEMENT
        FVector NewLoc = CurrentLoc + (HookedVelocity * DeltaTime);
        NewLoc.Z = CurrentLoc.Z; // MVP: Keep Z clamped
        SetActorLocation(NewLoc);

        // Water friction (so it doesn't slide infinitely)
        HookedVelocity = FMath::VInterpTo(HookedVelocity, FVector::ZeroVector, DeltaTime, 3.0f);

        // 3. STAMINA DRAIN MATH
        // Base drain just for fighting, PLUS massive extra drain based on line tension
        float BaseDrain = 5.0f; 
        float TensionDrain = (CurrentPullTension / 1000.0f) * FightProfile.TensionStaminaDrainMultiplier;
        
        CurrentStamina -= (BaseDrain + TensionDrain) * DeltaTime;

        // Reset tension tracker for the next frame
        CurrentPullTension = 0.0f;

        // 4. THE BREAKING POINT
        if (CurrentStamina <= 0.0f)
        {
            CurrentStamina = 0.0f;
            CurrentState = EEnemyState::Exhausted;
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ENEMY: Stamina depleted! Entering Exhausted State."), true);
        }
    }
    // --- TASK 4: THE KILL WINDOW (EXHAUSTED) ---
    else if (CurrentState == EEnemyState::Exhausted)
    {
        // The boss is deadweight. It applies NO escape force.
        // It just gets dragged by the player's TowForce until executed.
    	
        FVector NewLoc = CurrentLoc + (HookedVelocity * DeltaTime);
        NewLoc.Z = CurrentLoc.Z;
        SetActorLocation(NewLoc);

        HookedVelocity = FMath::VInterpTo(HookedVelocity, FVector::ZeroVector, DeltaTime, 3.0f);
    }*/
    /*else if(CurrentState == EEnemyState::Fighting || CurrentState == EEnemyState::PullingDrag || CurrentState == EEnemyState::Exhausted)
	{
		FVector CurrentLoc = GetActorLocation();
        
		// 1. Move the fish based on the tow velocity
		FVector NewLoc = CurrentLoc + (HookedVelocity * DeltaTime);
        
		// 2. Snap to the Ocean Surface (The Anti-Void Clamp)
		// MVP: Just lock it to its current Z so it doesn't sink.
		// LATER: NewLoc.Z = OceanManager->GetWaveHeightAtLocation(NewLoc.X, NewLoc.Y);
		NewLoc.Z = CurrentLoc.Z; 
        
		SetActorLocation(NewLoc);

		// 3. Apply water friction so the fish doesn't slide endlessly like it's on ice
		HookedVelocity = FMath::VInterpTo(HookedVelocity, FVector::ZeroVector, DeltaTime, WaterDrag);
        
		return; // Skip the AI logic below
	}
	*/
	
	/*FVector PlayerLoc = TargetActor->GetActorLocation();
	FVector EnemyLoc = GetActorLocation();

	// --- THE SNOWBOARDER FIX ---
	// The "Nose" of the board (Travel Direction) is your Left Vector
	FVector ActualForward = TargetActor->GetActorRightVector() * -1.0f; 
    
	// The "Edge" of the board (Lateral Direction) is your Actor Forward Vector
	FVector ActualLateral = TargetActor->GetActorForwardVector(); 
	// ---------------------------

	// 1. THE DEPTH (Local Travel Axis)
	FVector DepthTargetLocation = PlayerLoc + (ActualForward * TargetDepthOffset);

	// 2. THE LATERAL HUNT (Local Edge Axis)
	FVector ToEnemy = EnemyLoc - PlayerLoc;
	float CurrentLateralOffset = FVector::DotProduct(ToEnemy, ActualLateral);
	float DesiredLateralOffset = FMath::FInterpTo(CurrentLateralOffset, 0.0f, DeltaTime, LateralTrackingSpeed);

	// 3. THE REASSEMBLY
	FVector FinalPosition = DepthTargetLocation + (ActualLateral * DesiredLateralOffset);
	FinalPosition.Z = EnemyLoc.Z;

	SetActorLocation(FinalPosition);*/
}

void AEnemyParent::OnTargeted(bool bIsTargeted)
{
	if (bIsTargeted) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("TARGET: BARRACUDA"));
}

void AEnemyParent::OnHooked()
{
	CurrentState = EEnemyState::Fighting;
	HookedVelocity = FVector::ZeroVector;
}

void AEnemyParent::OnReleased()
{
	CurrentState = EEnemyState::Flowing;
	SetActorRotation(FRotator::ZeroRotator);
}

ETargetWeightClass AEnemyParent::GetTargetWeightClass() const
{
	return ETargetWeightClass::Lightweight;
}

void AEnemyParent::AddTowForce(const FVector& TowForce)
{
	if (CollisionComp && CollisionComp->IsSimulatingPhysics())
	{
		CollisionComp->AddForce(TowForce);
	}
}

void AEnemyParent::OnLethalStrike()
{
	UE_LOG(LogTemp, Warning, TEXT("BARRACUDA: Shattered by Lethal Strike!"));
	Destroy();
}

float AEnemyParent::GetStaminaRatio() const
{
	if (FightProfile.MaxStamina <= 0.0f) return 0.0f;
	return CurrentStamina / FightProfile.MaxStamina;
}

void AEnemyParent::RegisterPlayerTension(float TensionForce)
{
	CurrentPullTension = TensionForce;
}

