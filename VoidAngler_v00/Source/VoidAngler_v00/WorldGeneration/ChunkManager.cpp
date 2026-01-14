// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkManager.h"

#include "WorldChunk.h"

// Sets default values
AChunkManager::AChunkManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NextSpawnTransform = FTransform::Identity;
}

void AChunkManager::SpawnNextChunk()
{
	//TO DO
	if (ChunkTypes.Num() == 0) return;
	int32 RandomIndex = FMath::RandRange(0, ChunkTypes.Num() - 1);
	TSubclassOf<AWorldChunk> SelectedChunk = ChunkTypes[RandomIndex];
	if (!SelectedChunk) return;
	AWorldChunk* DefaultChunk = Cast<AWorldChunk>(SelectedChunk->GetDefaultObject());
	if (!DefaultChunk) return;

	FTransform EntryRelative = DefaultChunk->GetEntryRelativeTransform();
	
	// Math: NewTransform = Inverse(EntryRelative) * PrevExitTransform
	// This aligns the Entry Arrow with the Target Transform
	FTransform SpawnTransform = EntryRelative.Inverse() * NextSpawnTransform;
	// 2. Spawn it at the current "NextSpawnTransform" location
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AWorldChunk* NewChunk = GetWorld()->SpawnActor<AWorldChunk>(
		SelectedChunk, 
		NextSpawnTransform, 
		SpawnParams
	);
	if (NewChunk)
	{
		// 3. Update the Next Spawn Point
		// We ask the new chunk: "Where is your Exit Arrow?"
		// That becomes the start point for the piece after this one.
		NewChunk->SnapToTransform(NextSpawnTransform);
		NewChunk->InitializeChunk(this);
		NextSpawnTransform = NewChunk->GetExitTransform();

		// 4. Add to Active List
		ActiveChunks.Add(NewChunk);

		// 5. Cleanup Old Chunks
		// If we have too many, destroy the oldest one (index 0)
		if (ActiveChunks.Num() > InitialChunkCount + 1)
		{
			AWorldChunk* OldChunk = ActiveChunks[0];
			if (OldChunk)
			{
				OldChunk->Destroy();
			}
			ActiveChunks.RemoveAt(0); // Remove from list
		}
	}
}

// Called when the game starts or when spawned
void AChunkManager::BeginPlay()
{
	Super::BeginPlay();
	for (int32 i = 0; i < InitialChunkCount; i++)
	{
		SpawnNextChunk();
	}
}


// Called every frame
void AChunkManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

