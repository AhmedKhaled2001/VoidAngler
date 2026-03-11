// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ThemeData.generated.h"

/**
 * 
 */
UCLASS()
class VOIDANGLER_V00_API UThemeData : public UDataAsset
{
	GENERATED_BODY()
public:
	// 1. ANCHORS: The primary grapple points (e.g., pillars, obelisks).
	// These spawn in the inner "Playable Lane" so the player can reach them.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Theme Assets|Gameplay")
	TArray<TSubclassOf<AActor>> AnchorClasses;

	// 2. OBSTACLES: Hazards the player must dodge (e.g., jagged coral, explosive mines).
	// These also spawn in the inner "Playable Lane" to disrupt the flow.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Theme Assets|Gameplay")
	TArray<TSubclassOf<AActor>> ObstacleClasses;

	// 3. COSMETICS: Massive background scenery (e.g., sunken city walls, giant statues).
	// These spawn far out in the "Cosmetic Lane" to provide parallax and scale.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Theme Assets|Atmosphere")
	TArray<TSubclassOf<AActor>> CosmeticClasses;
};
