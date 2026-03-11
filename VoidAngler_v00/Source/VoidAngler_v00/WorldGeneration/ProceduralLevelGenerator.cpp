// Fill out your copyright notice in the Description page of Project Settings.


#include "./ProceduralLevelGenerator.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AProceduralLevelGenerator::AProceduralLevelGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AProceduralLevelGenerator::BeginPlay()
{
	Super::BeginPlay();
    
	// Find the player so we know where to start generating
	PlayerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerRef)
	{
		LastRowLocation = PlayerRef->GetActorLocation();
        
		// At the very start of the game, align the track to the way the board is pointing
		CurrentTrackDirection = -PlayerRef->GetActorRightVector(); 
		CurrentTrackDirection.Z = 0.0f; // Keep it flat on the ocean
		CurrentTrackDirection.Normalize();

		NoiseStep = FMath::RandRange(0.0f, 1000.0f); // Pick a random starting point in the noise
	}
}

void AProceduralLevelGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerRef || !CurrentTheme) return;

	FVector PlayerLoc = PlayerRef->GetActorLocation();
	float PlayerSpeed = PlayerRef->GetVelocity().Size();
    
	// 2. Scale the horizon. If you are stopped, it's just BaseSpawnDistance.
	// If you are flying, it stretches WAY out into the distance.
	float DynamicSpawnDistance = SpawnDistanceAhead + (PlayerSpeed * SpeedLookaheadMultiplier);
	// How far is the end of our pre-built river from the player right now?
	float DistanceToEndOfTrack = FVector::Dist(PlayerLoc, LastRowLocation);

	// If the end of the track is closer than our desired Horizon, we need to build!
	if (DistanceToEndOfTrack < DynamicSpawnDistance)
	{
		// How much track are we missing?
		float GapDistance = SpawnDistanceAhead - DistanceToEndOfTrack;
        
		// How many rows does it take to fill that gap? (Always round up so we don't fall short)
		int32 RowsNeeded = FMath::CeilToInt(GapDistance / RowInterval);
        
		// THE IRONCLAD SAFETY CAP: Never spawn more than 10 rows per frame.
		RowsNeeded = FMath::Min(RowsNeeded, 10);

		for (int32 i = 0; i < RowsNeeded; ++i)
		{
			SpawnNextRow();
		}
	}

	CleanupGarbage();
}

TSubclassOf<AActor> AProceduralLevelGenerator::GetRandomClassFromArray(const TArray<TSubclassOf<AActor>>& ClassArray)
{
	if (ClassArray.Num() == 0) return nullptr;
	int32 RandomIndex = FMath::RandRange(0, ClassArray.Num() - 1);
	return ClassArray[RandomIndex];
}

void AProceduralLevelGenerator::SpawnNextRow()
{
	if (!PlayerRef || !CurrentTheme) return;

    // --- 1. THE BRAIN (PERLIN WANDER) ---
    // Get a smooth, organic random number between -1.0 and 1.0
    float PerlinValue = FMath::PerlinNoise1D(NoiseStep);
    
    // Convert that to an angle (e.g., 0.5 * 10 degrees = +5 degrees to the right)
    float YawChange = PerlinValue * MaxWanderAngle;
    
    // Rotate the track's independent direction smoothly
    CurrentTrackDirection = CurrentTrackDirection.RotateAngleAxis(YawChange, FVector::UpVector);
    CurrentTrackDirection.Normalize();

    // Advance the noise math for the next row
    NoiseStep += WanderFrequency;

    // --- 2. CALCULATE POSITIONS ---
    // The "Right" side of the track is exactly 90 degrees from our new Track Direction
    FVector TrackRight = FVector::CrossProduct(FVector::UpVector, CurrentTrackDirection).GetSafeNormal();

    // Push the cursor forward along the NEW curved direction
    FVector RowCenter = LastRowLocation + (CurrentTrackDirection * RowInterval);

    // --- 3. SPAWN THE ANCHORS ---
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    TSubclassOf<AActor> AnchorToSpawn = GetRandomClassFromArray(CurrentTheme->AnchorClasses);
    if (AnchorToSpawn)
    {
    	float RandomPlayableOffset = FMath::RandRange(-PlayableLaneWidth / 2.0f, PlayableLaneWidth / 2.0f);
    	FVector AnchorLoc = RowCenter + (TrackRight * RandomPlayableOffset);
    	AnchorLoc.Z = 0.0f; 

    	AActor* NewAnchor = GetWorld()->SpawnActor<AActor>(AnchorToSpawn, AnchorLoc, FRotator::ZeroRotator, SpawnParams);
    	if (NewAnchor) ActiveEnvironmentAssets.Add(NewAnchor);
    }

    // --- 4. UPDATE CURSOR ---
    LastRowLocation = RowCenter;
}

void AProceduralLevelGenerator::CleanupGarbage()
{
	if (!PlayerRef) return;

	FVector PlayerLoc = PlayerRef->GetActorLocation();
	FVector BoardNose = -PlayerRef->GetActorRightVector();

	for (int32 i = ActiveEnvironmentAssets.Num() - 1; i >= 0; --i)
	{
		AActor* Asset = ActiveEnvironmentAssets[i];
        
		if (!IsValid(Asset))
		{
			ActiveEnvironmentAssets.RemoveAt(i);
			continue;
		}

		FVector AssetLoc = Asset->GetActorLocation();
        
		// 1. Get the direction from the player to the pillar
		FVector DirToAsset = (AssetLoc - PlayerLoc).GetSafeNormal();

		// 2. The Dot Product Trick (Using the board's nose)
		float ForwardDot = FVector::DotProduct(BoardNose, DirToAsset);

		// 3. The Execution
		// If it's behind the board's nose and further away than the despawn distance...
		if (ForwardDot < -0.1f && FVector::Dist(PlayerLoc, AssetLoc) > DespawnDistanceBehind)
		{
			Asset->Destroy();               
			ActiveEnvironmentAssets.RemoveAt(i); 
		}
	}
}

