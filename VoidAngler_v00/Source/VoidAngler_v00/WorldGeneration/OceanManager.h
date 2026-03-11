// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OceanManager.generated.h"

UCLASS()
class VOIDANGLER_V00_API AOceanManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOceanManager();
	UFUNCTION(BlueprintCallable, Category = "Ocean Physics")
	float GetWaterHeightAt(FVector2D QueryLocation, float Time) const;
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ocean Settings")
	float BaseWaterHeight = 0.0f;
};
