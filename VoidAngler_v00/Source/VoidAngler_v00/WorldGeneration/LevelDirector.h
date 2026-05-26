// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OceanManager.h"
#include "GameFramework/Actor.h"
#include "LevelDirector.generated.h"

USTRUCT()
struct FPendingSpawn
{
	GENERATED_BODY()

	TSubclassOf<AActor> AssetClass;
	float TargetDistance;    // The absolute world distance where this drops
	float RightwardOffset;   // The calculated physical offset for that specific moment
};

class ULevelDeck;
enum class ESpawnType : uint8;

USTRUCT(BlueprintType)
struct FActiveAsset
{
	GENERATED_BODY()

	TSubclassOf<AActor> AssetClass;
	ESpawnType AssetType;
	float CurrentWeight;
	
	bool operator==(const FActiveAsset& Other) const
	{
		return AssetClass == Other.AssetClass && AssetType == Other.AssetType && FMath::IsNearlyEqual(CurrentWeight, Other.CurrentWeight);
	}
};



UCLASS()
class VOIDANGLER_V00_API ALevelDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void RefreshActivePool();
	UPROPERTY(EditAnywhere, Category= "LevelGeneration")
	FTimerHandle PoolRefreshTimer;
	UPROPERTY()
	class AOceanManager* OceanManagerRef;
	UPROPERTY(EditAnywhere, Category="TestWave")
	FGerstnerWave TestTsunami;
	UPROPERTY(EditAnywhere, Category="TestWave")
	float TestTsunamiDuration = 8.0f;
	UPROPERTY(EditAnywhere, Category="TestWave")
	float TestTsunamiFrequency = 8.0f;
	FTimerHandle TestWaveTimer;
	void SpawnTestTsunami();

	
	// --- VARIABLES ---
	UPROPERTY(EditAnywhere, Category = "Level Generation")
	ULevelDeck* CurrentBiomeDeck;
	UPROPERTY(VisibleAnywhere, Category = "Level Generation|Debug")
	float TotalDistanceTraversed = 0.0f;
	UPROPERTY(VisibleAnywhere, Category = "Level Generation|Debug")
	TArray<FActiveAsset> ActiveSpawnPool;
	UPROPERTY()
	AActor* PlayerRef;
	FVector LastPlayerLocation;

	UPROPERTY(EditAnywhere, Category = "Level Generation|Borders")
	float BorderSegmentLength = 500.0f; 

	UPROPERTY(EditAnywhere, Category = "Level Generation|Spawning")
	float SpawnDistanceAhead = 10000.0f; 

	float LeftWallDistanceBuilt = 0.0f;
	float RightWallDistanceBuilt = 0.0f;

	FVector LastLeftWallLoc;
	FVector LastRightWallLoc;
	float NoiseStep = 0.0f;
	void BuildBordersAhead();
	float DistanceUntilNextPattern = 0.0f; 
	TArray<FPendingSpawn> ActivePatternQueue; 

	// Replace TrySpawnPattern with this:
	void TrySpawnPattern(float CurrentBuildDistance);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FVector LastCenterLoc;
	FVector CurrentTrackDirection;
};
