// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include <VoidAngler_v00/Enemy/EnemyBase.h>

#include "Components/BoardComponent.h"
#include "Components/TetherComponent.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CameraManager.h"
#include "Components/PhysicsController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "VoidAngler_v00/Enemy/EnemyParent.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoardComponentt = CreateDefaultSubobject<UBoardComponent>(TEXT("BoardComponentt"));
	RootComponent = BoardComponentt;
    BoardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoardMesh"));
	BoardMesh->SetupAttachment(RootComponent);

	CharacterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->SetupAttachment(BoardMesh);
	CharacterMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TetherComponent = CreateDefaultSubobject<UTetherComponent>(TEXT("TetherEngineComponent"));
	PhysicsControllerr = CreateDefaultSubobject<UPhysicsController>(TEXT("PhysicsEngineControllerrss"));
	CameraManager = CreateDefaultSubobject<UCameraManager>(TEXT("CameraManager"));
	RamHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("RamHitbox"));
	// Attach to your physics root or board mesh
	RamHitbox->SetupAttachment(BoardComponentt); 
    
	// Push it forward to the nose of the board. 
	// (Adjust the X value in Blueprints later to fit your specific mesh)
	RamHitbox->SetRelativeLocation(FVector(150.0f, 0.0f, 0.0f)); 
    
	// Make it wide enough to be forgiving, but thin so it acts like a blade
	RamHitbox->SetBoxExtent(FVector(20.0f, 80.0f, 20.0f));

	// --- STRICT COLLISION PROFILING ---
	// Turn off physics simulation for this box; it is strictly a trigger.
	RamHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    
	// Ignore EVERYTHING by default to save CPU
	RamHitbox->SetCollisionResponseToAllChannels(ECR_Ignore);
    
	// Only overlap with Pawns (Your enemies). 
	// If you made a custom trace channel for enemies later, use that instead.
	RamHitbox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
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
	if (RamHitbox)
	{
		RamHitbox->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnRamHitboxOverlap);
	}
}
void APlayerCharacter::OnRamHitboxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Ignore self and null pointers
	if (!OtherActor || OtherActor == this) return;

	// We only care if we hit an enemy. 
	// (Cast to your base class. If it fails, it's not an enemy, so ignore it.)
	AEnemyParent* HitEnemy = Cast<AEnemyParent>(OtherActor);
	if (!HitEnemy) return;

	// Safety check on your physics root
	if (!BoardComponentt) return;

	// Calculate current momentum
	float CurrentSpeed = BoardComponentt->GetComponentVelocity().Size();

	// THE VELOCITY GATE
	if (CurrentSpeed >= LethalSpeedThreshold)
	{
		if (OtherActor->Implements<UTargetable>())
		{
			ITargetable* Target = Cast<ITargetable>(OtherActor);
			if (Target)
			{
				// Tell the object it just got hit at Mach 2. Let it decide what to do.
				Target->OnLethalStrike();
			}
			// If we were tethered to it, let go
			if (TetherComponent && TetherComponent->GetAttachedActor() == OtherActor) 
			{
				TetherComponent->DetachTether();
			}
		}
	}
	else
	{
		if (TetherComponent && TetherComponent->GetAttachedActor() == OtherActor) 
		{
			TetherComponent->DetachTether();
		}
		// Player bumped the enemy, but wasn't going fast enough. 
		// In the future, this might damage the player or cause a stumble.
		FString Msg = FString::Printf(TEXT("GLANCING BLOW. Too slow: %.2f"), CurrentSpeed);
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, Msg);
	}
}
void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (BoardComponentt && TetherComponent && PhysicsControllerr && CameraManager)
	{
		PhysicsControllerr->InitializeComponent(BoardComponentt, BoardMesh);
		TetherComponent->Initalize(BoardComponentt);
		CameraManager->Initialize(SpringArm, Camera, PhysicsControllerr);
	}
}

void APlayerCharacter::Edge(float Value)
{
	if (TetherComponent && PhysicsControllerr)
	{
		TetherComponent->SetEdgeInput(Value);
		PhysicsControllerr ->SetSteeringInput(Value);
	}
}

void APlayerCharacter::Winch(float Value)
{
	if (TetherComponent && PhysicsControllerr)
	{
		TetherComponent->SetReelInput(Value);
		//PhysicsControllerr ->SetSprintInput(Value);
	}
}

void APlayerCharacter::BrakeReleased()
{
	if (TetherComponent && PhysicsControllerr)
	{
		TetherComponent->SetBraking(false);
		PhysicsControllerr ->SetSkidInput(false);
		
	}
}

void APlayerCharacter::Brake()
{
	if (TetherComponent && PhysicsControllerr)
	{
		TetherComponent->SetBraking(true);
		PhysicsControllerr ->SetSkidInput(true);
	}
}

void APlayerCharacter::FireTether()
{
	if (!TetherComponent) return;
	if (!PhysicsControllerr) return;

	// 1. Are we already attached?
	if (PhysicsControllerr->IsTetherActive()) 
	{
		// We are hooked. Pressing fire again means RELEASE THE SLINGSHOT.
		PhysicsControllerr->DetachAndSlingshot();
		return;
	}

	// 2. We are NOT attached. The player is trying to cast the line.
	if (IsValid(CurrentTargetActor))
	{
		// We hit a valid anchor! Tell the physics controller to grab it.
		PhysicsControllerr->AttachToAnchor(CurrentTargetActor);
	}
	else
	{
		// We fired at nothing. 
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Tether Missed!"));
	}
	
}

void APlayerCharacter::SprintPressed()
{
	if (PhysicsControllerr)
	{
		PhysicsControllerr->SetSprintInput(true);
	}
}

void APlayerCharacter::SprintReleased()
{
	if (PhysicsControllerr)
	{
		PhysicsControllerr->SetSprintInput(false);
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
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn)); 
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
        if (!Cast<ITargetable>(HitActor)) continue;

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
	if (BoardComponentt)
	{
		BoardComponentt->SetPhysicsLinearVelocity(FVector::ZeroVector);
		BoardComponentt->SetPhysicsAngularVelocityInRadians(FVector::ZeroVector);
        
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
			ITargetable* OldTargetable = Cast<ITargetable>(CurrentTargetActor);
			if (OldTargetable) 
			{
				OldTargetable->OnTargeted(false); // Turn light off (Cyan/Yellow)
			}
		}

		// B. Turn ON the new target (if found)
		if (NewTarget)
		{
			ITargetable* NewTargetable = Cast<ITargetable>(NewTarget);
			if (NewTargetable) NewTargetable->OnTargeted(true);
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
		PlayerInputComponent->BindAxis("Edge", this, &APlayerCharacter::Edge);
		PlayerInputComponent->BindAxis("Reel", this, &APlayerCharacter::Winch);
		PlayerInputComponent->BindAction("Brake", IE_Pressed,this, &APlayerCharacter::Brake);
		PlayerInputComponent->BindAction("Brake",IE_Released, this, &APlayerCharacter::BrakeReleased);
		PlayerInputComponent->BindAction("Sprint",IE_Pressed, this, &APlayerCharacter::SprintPressed);
		PlayerInputComponent->BindAction("Sprint",IE_Released, this, &APlayerCharacter::SprintReleased);
						
	}

}

