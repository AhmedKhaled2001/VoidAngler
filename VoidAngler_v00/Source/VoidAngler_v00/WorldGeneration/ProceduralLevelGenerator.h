// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoidAngler_v00/GameBackend/ThemeData.h"
#include "ProceduralLevelGenerator.generated.h"


UCLASS()
class VOIDANGLER_V00_API AProceduralLevelGenerator : public AActor
{
	GENERATED_BODY()
	
public: 
	AProceduralLevelGenerator();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	// --- CONFIGURATION ---

	// The active Theme Data Asset (Alexandria, Abyss, etc.) Drag your DataAsset here in the editor!
	UPROPERTY(EditAnywhere, Category = "Theme")
	UThemeData* CurrentTheme;

	UPROPERTY(EditAnywhere, Category = "Generation Metrics|Wander")
	float MaxWanderAngle = 10.0f;

	// How quickly does it change from a left turn to a right turn? (0.05 is a smooth, long curve)
	UPROPERTY(EditAnywhere, Category = "Generation Metrics|Wander")
	float WanderFrequency = 0.05f;
	
	// How far out on the horizon do we generate the city?
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float SpawnDistanceAhead = 20000.0f;

	// The distance between each "Row" or "Slice" of generation (The density of the track)
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float RowInterval = 3000.0f; 

	// The width of the area where Anchors and Obstacles spawn (The active gameplay area)
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float PlayableLaneWidth = 4000.0f;

	// The width of the area where massive background scenery spawns (The visual corridor)
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float CosmeticLaneWidth = 12000.0f;

	// How far behind the player until we delete the row to save memory?
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float DespawnDistanceBehind = 35000.0f;
	UPROPERTY(EditAnywhere, Category = "Generation Metrics")
	float CenterDeadzone = 2000.0f;
	TSubclassOf<AActor> GetRandomClassFromArray(const TArray<TSubclassOf<AActor>>& ClassArray);
	UPROPERTY(EditAnywhere, Category = "Generation Metrics|Distance")
	float SpeedLookaheadMultiplier = 3.0f;
private:
	UPROPERTY()
	AActor* PlayerRef;

	// The exact center point of the last "Row" we generated
	FVector LastRowLocation;

	// A master list of EVERYTHING we have spawned, so we can cleanly delete it later
	UPROPERTY()
	TArray<AActor*> ActiveEnvironmentAssets;

	// The worker functions we will build in Tasks 1.2 and 1.3
	void SpawnNextRow();
	void CleanupGarbage();
	FVector CurrentTrackDirection;

	// We step this forward every row to read a new value from the Perlin Noise math
	float NoiseStep;
	bool bNextSpawnIsLeft = false;
};
