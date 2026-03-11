// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"

#include "EngineUtils.h"
#include "Components/SplineComponent.h"
#include "VoidAngler_v00/WorldGeneration/WorldChunk.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
	MeshComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	MeshComponent->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	float ClosestDist = 99999.0f;
	USplineComponent* BestSpline = nullptr;

	for (TActorIterator<AWorldChunk> It(GetWorld()); It; ++It)
	{
		AWorldChunk* Chunk = *It;
		// Note: You must have implemented GetPathSpline() in WorldChunk for this to work!
		if (Chunk && Chunk->GetPathSpline())
		{
			float Dist = FVector::Dist(GetActorLocation(), Chunk->GetActorLocation());
			if (Dist < ClosestDist)
			{
				ClosestDist = Dist;
				BestSpline = Chunk->GetPathSpline();
			}
		}
	}

	if (BestSpline)
	{
		SetCurrentSpline(BestSpline ,0 ,0 );
	}
}


// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!CurrentTrack) return; // Wait until we hit the first trigger

	// 1. Advance
	// MoveSpeed is your config variable (e.g. 3000.0f)
	DistanceAlongSpline += BaseSpeed * DeltaTime;

	// 2. Clamp?
	// We don't clamp anymore. If we go past the end, we just wait/float 
	// until we hit the next trigger volume which resets us to 0 on the new track.
	// Ideally, the trigger is placed slightly BEFORE the end of the previous track 
	// to ensure seamless handover.

	// 3. Move
	FVector NewLoc = CurrentTrack->GetLocationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);
	FRotator NewRot = CurrentTrack->GetRotationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);
    
	SetActorLocationAndRotation(NewLoc, NewRot);
}


void AEnemyBase::SetCurrentSpline(USplineComponent* Spline, float ChunkMinWeave, float ChunkMaxWeave)
{
	 DistanceAlongSpline = 0.0f;
	 CurrentTrack = Spline;
}


