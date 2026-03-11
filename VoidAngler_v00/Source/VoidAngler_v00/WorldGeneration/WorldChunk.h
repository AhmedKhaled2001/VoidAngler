// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChunkManager.h"
#include "GameFramework/Actor.h"
#include "WorldChunk.generated.h"


UCLASS()
class VOIDANGLER_V00_API AWorldChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldChunk();
	void InitializeChunk(AChunkManager* InManager);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level Design")
	class UArrowComponent* ExitPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level Design")
	class UBoxComponent* SpawnTrigger;
	UPROPERTY(VisibleAnywhere, Category = "Level Design")
	class UBoxComponent* ObstacleVolume;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level Design")
	class UArrowComponent* EntryPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level Design")
	class USplineComponent* PathSpline;
	// Beast Movement Fields
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Design|Beast Constraints")
	float AllowedMinWeave = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Design|Beast Constraints")
	float AllowedMaxWeave = 2000.0f;
	
	UPROPERTY()
	AChunkManager* MyManager;
	// Handling Overlap Event Triggers
	bool bSpawnedNextChunk = false;
	bool bEnemyRecievedSpline = false;
	UFUNCTION()
	void OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTransform GetExitTransform() const;
	FTransform GetEntryRelativeTransform() const;
	void SnapToTransform(const FTransform& TargetTransform);
	USplineComponent* GetPathSpline() const { return PathSpline; }

};
