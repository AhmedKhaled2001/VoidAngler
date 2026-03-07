// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include <VoidAngler_v00/Enemy/EnemyBase.h>

#include "Components/BoardComponent.h"
#include "Components/TetherComponent.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoardComponent = CreateDefaultSubobject<UBoardComponent>(TEXT("BoardComponent"));
	RootComponent = BoardComponent;

	CharacterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->SetupAttachment(RootComponent);
	CharacterMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TetherComponent = CreateDefaultSubobject<UTetherComponent>(TEXT("TetherEngineComponent"));


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent); // Follows the Board
	SpringArm->bUsePawnControlRotation = true; 
	SpringArm->bInheritPitch = false; // Optional: Depends on how nauseating you want it
	SpringArm->bInheritRoll = false;  // Keep horizon level
	SpringArm->bInheritYaw = true;   
	SpringArm->TargetArmLength = 600.0f;
	SpringArm->SocketOffset = FVector(0.0f, 0.0f, 150.0f);
	
	// Smooth out the jitter from physics
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 15.0f;
	// 5. Camera (The "Eye")
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName); // Attach to end of arm
	Camera->bUsePawnControlRotation = false;
	
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
}
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (BoardComponent && TetherComponent)
	{
		TetherComponent->Initalize(BoardComponent);
	}
}

void APlayerCharacter::Edge(float Value)
{
	if (TetherComponent)
	{
		TetherComponent->SetEdgeInput(Value);
	}
}

void APlayerCharacter::Winch(float Value)
{
	if (TetherComponent)
	{
		TetherComponent->SetReelInput(Value);
	}
}

void APlayerCharacter::BrakeReleased()
{
	if (TetherComponent)
	{
		TetherComponent->SetBraking(false);
	}
}

void APlayerCharacter::Brake()
{
	if (TetherComponent)
	{
		TetherComponent->SetBraking(true);
	}
}

void APlayerCharacter::FireTether()
{
	// To be continued
	if (!TetherComponent) return;
	if (TetherComponent->CurrentTetherState != ETetherState::Inactive)
	{
		TetherComponent->EvaluateRhythmInput();
		TetherComponent->DetachTether();
		return;
	}
	if (CurrentTargetActor)
	{
		// We hit something valid!
		// For now, we grab the location. Later we will pass the Actor pointer for moving targets.
		TetherComponent->EvaluateRhythmInput();
		TetherComponent->SetTetherTargetLocation(CurrentTargetActor ,CurrentTargetActor->GetActorLocation());
	}
	else
	{
		// Missed everything
		TetherComponent->DetachTether();
	}
}

AActor* APlayerCharacter::FindBestTetherTarget()
{
	FVector Start = Camera->GetComponentLocation();
    FVector Forward = Camera->GetForwardVector();
    FVector End = Start + (Forward * AimScanDistance);

    // 2. Configure Trace
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    // We scan for WorldStatic (Anchors) and PhysicsBody (Beasts/Debris)
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic)); 
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_PhysicsBody)); 

    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(this); // Don't hit yourself

    TArray<FHitResult> OutHits;

    // 3. EXECUTE SPHERE TRACE
    // This shoots a "Fat Laser" forward to find everything in a tunnel
    bool bHit = UKismetSystemLibrary::SphereTraceMultiForObjects(
        GetWorld(),
        Start,
        End,
        AimScanRadius,
        ObjectTypes,
        false, // TraceComplex (False is faster)
        ActorsToIgnore,
        /*EDrawDebugTrace::ForDuration*/ EDrawDebugTrace::None, // DEBUG: Shows the tunnel. Change to 'None' later.
        OutHits,
        true // IgnoreSelf
    );

    // 4. SCORING LOOP (Pick the Winner)
    AActor* BestTarget = nullptr;
    float BestScore = -1.0f;

    for (const FHitResult& Hit : OutHits)
    {
        AActor* HitActor = Hit.GetActor();
        if (!HitActor) continue;

        // Optional: Add specific class checks here if you have non-target debris
        if (!HitActor->IsA<AAnchorPoint>() && !HitActor->IsA<AEnemyBase>()) continue;

        // A. Calculate Direction Score (Dot Product)
        // How close is this object to the center of my screen?
        FVector DirToTarget = (HitActor->GetActorLocation() - Start).GetSafeNormal();
        float DotScore = FVector::DotProduct(Forward, DirToTarget); // 1.0 = Center, 0.0 = Edge

        // Filter: Discard targets behind us or too far to the side (e.g. < 0.7)
        if (DotScore < 0.6f) continue;

        // B. Calculate Distance Score 
        // Closer targets are usually better, but Angle matters more.
        float Dist = FVector::Dist(Start, HitActor->GetActorLocation());
        float DistScore = 1.0f - (Dist / AimScanDistance); 

        // C. Final Score Formula (Tunable)
        // Weight Angle (0.7) higher than Distance (0.3). Accuracy > Proximity.
        float FinalScore = (DotScore * 0.7f) + (DistScore * 0.3f);

        if (FinalScore > BestScore)
        {
            BestScore = FinalScore;
            BestTarget = HitActor;
        }
    }

    return BestTarget;
}

void APlayerCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void APlayerCharacter::LookUp(float Value)
{
	// Pass the value to the Controller
	AddControllerPitchInput(Value);
}

void APlayerCharacter::SetCheckpoint(FVector NewLocation)
{
	LastCheckpointLocation = NewLocation;
}

void APlayerCharacter::Respawn()
{
	if (TetherComponent) TetherComponent->DetachTether();

	// 2. Teleport to Safe Spot
	// Add a little Z offset so we don't spawn inside the floor
	FVector RespawnLoc = LastCheckpointLocation + FVector(-1600,0,200);
	SetActorLocation(RespawnLoc, false, nullptr, ETeleportType::TeleportPhysics);
    
	// 3. Reset Physics
	// Stop all momentum.
	if (BoardComponent)
	{
		BoardComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
		BoardComponent->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
        
		// Reset Rotation to face forward? 
		// Ideally, face the direction of the track, but Identity is safe for now.
		SetActorRotation(FRotator::ZeroRotator);
	}
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (TetherComponent)
	{
		// Get Camera direction
		FVector CamFwd = Camera->GetForwardVector();
        
		// Get A/D input (we aren't using it for torque anymore, but pass it for C2 later)
		float StrafeVal = GetInputAxisValue("Edge"); 
        
		TetherComponent->SetSteeringInput(StrafeVal, CamFwd);
	}
	
	if (GetActorLocation().Z < KillZThreshold)
	{
		Respawn();
	}
	AActor* NewTarget = FindBestTetherTarget();
	if (NewTarget != CurrentTargetActor)
	{
		// A. Turn OFF the old target (if it existed)
		if (CurrentTargetActor)
		{
			AAnchorPoint* OldAnchor = Cast<AAnchorPoint>(CurrentTargetActor);
			if (OldAnchor) 
			{
				OldAnchor->OnTargeted(false); // Turn light off (Cyan/Yellow)
			}
		}

		// B. Turn ON the new target (if found)
		if (NewTarget)
		{
			AAnchorPoint* NewAnchor = Cast<AAnchorPoint>(NewTarget);
			if (NewAnchor) 
			{
				NewAnchor->OnTargeted(true); // Turn light RED (Locked)
			}
		}

		// C. Update Tracking Variable
		CurrentTargetActor = NewTarget;
	
	}	
	

}
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (PlayerInputComponent)
	{
		PlayerInputComponent->BindAction("FireTether", IE_Pressed,this, &APlayerCharacter::FireTether);
		PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::Turn);
		PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);
		//PlayerInputComponent->BindAxis("Edge", this, &APlayerCharacter::Edge);
		PlayerInputComponent->BindAxis("Reel", this, &APlayerCharacter::Winch);
		PlayerInputComponent->BindAction("Brake", IE_Pressed,this, &APlayerCharacter::Brake);
		PlayerInputComponent->BindAction("Brake",IE_Released, this, &APlayerCharacter::BrakeReleased);
		
	}

}

