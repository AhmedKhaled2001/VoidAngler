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
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(EditAnywhere, Category = "Stats")
	float MaxStamina = 1000.0f;
	float CurrentStamina;
	// The Resistance Check:
	// How hard must the tether pull before the beast starts losing energy?
	// If PullForce < DragThreshold, no damage is dealt (the line spools out freely).
	UPROPERTY(EditAnywhere, Category = "Stats")
	float DragThreshold = 500.0f;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float BaseSpeed = 3000.0f; // Fast enough to be a challenge
	// [T3.2] Movement State
	float DistanceAlongSpline = 0.0f;
	// The Rail we are currently riding
	UPROPERTY()
	class USplineComponent* CurrentTrack;
	// Helper to find the next track piece

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ApplyTetherDrag(float TensionAmount, float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetStaminaRatio() const { return CurrentStamina / MaxStamina; }
	void SetCurrentSpline (USplineComponent* Spline);
	
};
