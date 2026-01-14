// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChunkManager.generated.h"

class AWorldChunk;

UCLASS()
class VOIDANGLER_V00_API AChunkManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChunkManager();
	UFUNCTION(BlueprintCallable)
	void SpawnNextChunk();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Level Generation")
	TArray<TSubclassOf<AWorldChunk>> ChunkTypes;
	UPROPERTY(EditAnywhere, Category = "Level Generation")
	int32 InitialChunkCount = 5;
	UPROPERTY()
	TArray<AWorldChunk*> ActiveChunks;
	UPROPERTY()
	FTransform NextSpawnTransform;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
