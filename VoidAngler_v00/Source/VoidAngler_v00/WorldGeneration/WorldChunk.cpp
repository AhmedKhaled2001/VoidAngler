// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldChunk.h"

#include "ChunkManager.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Enemy/EnemyBase.h"

class AChunkManager;
// Sets default values
AWorldChunk::AWorldChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;
	EntryPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("EntryPoint"));
	EntryPoint->SetupAttachment(RootComponent);
	EntryPoint->ArrowSize = 5.0f;
	EntryPoint->ArrowColor = FColor::Green;
	EntryPoint->SetRelativeLocation(FVector::ZeroVector);
	// 2. The Exit Arrow
	ExitPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitPoint"));
	ExitPoint->SetupAttachment(RootComponent);
	ExitPoint->ArrowSize = 5.0f;
	ExitPoint->ArrowColor = FColor::Red;
	// Move it forward so you can see it, but level designers will move this manually.
	ExitPoint->SetRelativeLocation(FVector(5000.0f, 0.0f, 0.0f));

	// 3. The Trigger
	SpawnTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnTrigger"));
	SpawnTrigger->SetupAttachment(RootComponent);
	SpawnTrigger->SetBoxExtent(FVector(100.0f, 2000.0f, 2000.0f)); 
	SpawnTrigger->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	
	// 4. Obstacle Volume
	ObstacleVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ObstacleVolume"));
	ObstacleVolume->SetupAttachment(RootComponent);
	ObstacleVolume->SetCollisionProfileName(TEXT("NoCollision"));

	PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
	PathSpline->SetupAttachment(RootComponent);
	PathSpline->SetClosedLoop(false);
	PathSpline->SetDrawDebug(true); 
}

void AWorldChunk::InitializeChunk(AChunkManager* InManager)
{
	MyManager = InManager;
	if (SpawnTrigger)
	{
		SpawnTrigger->OnComponentBeginOverlap.AddDynamic(this, &AWorldChunk::OnTriggerOverlap);
	}
}

// Called when the game starts or when spawned
void AWorldChunk::BeginPlay()
{
	Super::BeginPlay();
}

void AWorldChunk::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor) return;
	if (OtherActor->IsA<APlayerCharacter>() && !bSpawnedNextChunk) 
	{
		// 2. Use the Cached Reference
		if (MyManager)
		{
			MyManager->SpawnNextChunk();
		}
		// 3. Disable Trigger (One-shot)
		bSpawnedNextChunk = true;
		//SpawnTrigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if (OtherActor->IsA<AEnemyBase>() && !bEnemyRecievedSpline) 
	{
		// 2. Use the Cached Reference
		AEnemyBase* Beast = Cast<AEnemyBase>(OtherActor);
		if (Beast && PathSpline)
		{
			// Handoff: "Here is your new rail."
			Beast->SetCurrentSpline(PathSpline);
		}
		// 3. Disable Trigger (One-shot)
		bEnemyRecievedSpline = true;
		//SpawnTrigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

// Called every frame
void AWorldChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FTransform AWorldChunk::GetExitTransform() const
{
	return ExitPoint->GetComponentTransform();
}

FTransform AWorldChunk::GetEntryRelativeTransform() const
{
	return EntryPoint->GetComponentTransform();
}

void AWorldChunk::SnapToTransform(const FTransform& TargetTransform)
{
	FTransform EntryRelative = EntryPoint->GetRelativeTransform();

	// 2. Calculate the required Root Transform
	// Logic: We want (Root * EntryRelative) == TargetTransform.
	// Therefore: Root = TargetTransform * Inverse(EntryRelative).
	FTransform NewRootTransform = EntryRelative.Inverse() * TargetTransform;

	// 3. Teleport the Actor
	SetActorTransform(NewRootTransform, false, nullptr, ETeleportType::TeleportPhysics);
}

