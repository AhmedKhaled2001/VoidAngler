// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OceanManager.generated.h"
USTRUCT(BlueprintType)
struct FGerstnerWave
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Direction = FVector2D(1.0f, 0.0f); // Which way it rolls

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amplitude = 100.0f; // Height of the peak

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Wavelength = 2000.0f; // Distance between peaks

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Steepness = 0.5f; // 0.0 = smooth sine wave, 1.0 = sharp choppy peak

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 500.0f; // How fast it travels
};

// --- THE LEVEL DIRECTOR'S WEAPON (WAVE EVENTS) ---
USTRUCT(BlueprintType)
struct FWaveEvent
{
	GENERATED_BODY()

	FGerstnerWave WaveData;
	FVector2D Epicenter;
	float Radius;
	float FalloffDistance; // How smoothly it blends back into the normal ocean
	float Duration;
	float ElapsedTime = 0.0f;
};
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
	UPROPERTY(EditAnywhere, Category = "Ocean")
	class UMaterialParameterCollection* OceanMPC;
	virtual void OnConstruction(const FTransform& Transform) override;
	UFUNCTION(BlueprintCallable, Category = "Ocean|Events")
	void TriggerWaveEvent(FGerstnerWave WaveParams, FVector2D EventEpicenter, float EventRadius, float Falloff, float Duration);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Ocean|Ambient")
	TArray<FGerstnerWave> AmbientWaves;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ocean Settings")
	float BaseWaterHeight = 75.0f;
private:
	TArray<FWaveEvent> ActiveWaveEvents;
	void DelayedBeginPlay();
	FTimerHandle MPCDelayTimerHandle;
};
