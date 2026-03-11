// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

UCLASS()
class VOIDANGLER_V00_API AEnemyBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Setup
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	// --- LOCOMOTION (RUBBER-BANDING) ---
	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float BaseSpeed = 3000.0f;

	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float MaxFleeSpeed = 6000.0f; 
    
	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float MinTauntSpeed = 500.0f; 

	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float DistanceToTriggerFlee = 3000.0f; 
    
	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float DistanceToTriggerTaunt = 10000.0f; 

	// --- ORGANIC WEAVE ---
	UPROPERTY(EditAnywhere, Category = "Leviathan|Locomotion")
	float WeaveSpeed = 2.0f; 

	// These will be overwritten by the WorldChunk's limits
	float MinWeaveAmplitude = 500.0f; 
	float MaxWeaveAmplitude = 2000.0f; 

	// Internal Math Tracking
	float RunningTime = 0.0f;
	float CurrentWeaveAmplitude = 0.0f; 
	float TargetWeaveAmplitude = 0.0f;

	// Spline Information 
	float DistanceAlongSpline = 0.0f;
	UPROPERTY()
	class USplineComponent* CurrentTrack;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void SetCurrentSpline (USplineComponent* Spline ,float ChunkMinWeave, float ChunkMaxWeave);
	
};
