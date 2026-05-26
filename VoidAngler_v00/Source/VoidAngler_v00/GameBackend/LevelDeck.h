// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h" 
#include "LevelDeck.generated.h"

// --- TASK 1.1: THE SPAWN TYPE ---
UENUM(BlueprintType)
enum class ESpawnType : uint8
{
	Anchor       UMETA(DisplayName = "Anchor"),
	LevelBorder  UMETA(DisplayName = "Level Border"),
	Hazard       UMETA(DisplayName = "Hazard")
};

// --- TASK 1.2: THE ASSET STRUCT ---
USTRUCT(BlueprintType)
struct FSpawnableAsset
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<AActor> AssetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	UCurveFloat* SpawnWeightCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	ESpawnType AssetType;
};

USTRUCT(BlueprintType)
struct FPatternItem
{
	GENERATED_BODY()

	// The specific hazard or anchor to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	TSubclassOf<AActor> AssetClass;

	
	// Absolute distance forward from the START of this specific pattern
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	float ForwardOffset; 

	// -1.0 is the far Left Wall, 1.0 is the far Right Wall, 0.0 is dead center.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = "-1.0", UIMax = "1.0"), Category = "Pattern")
	float LanePosition;
};

USTRUCT(BlueprintType)
struct FSpawnPattern
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	FString PatternName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	TArray<FPatternItem> ItemsInPattern;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	float PatternLength = 2000.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pattern")
	UCurveFloat* PatternWeightCurve;
};

// --- TASK 1.3: THE MASTER DATA ASSET ---
UCLASS(BlueprintType)
class VOIDANGLER_V00_API ULevelDeck : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	// The master list of everything that can spawn in this biome
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Generation|Assets")
	TArray<FSpawnableAsset> SpawningDeck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Generation|Layout")
	UCurveFloat* LaneWidthCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Generation|Patterns")
	TArray<FSpawnPattern> PatternDeck;
};
