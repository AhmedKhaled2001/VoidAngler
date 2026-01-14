// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnchorPoint.generated.h"

UCLASS()
class VOIDANGLER_V00_API AAnchorPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAnchorPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UPointLightComponent* LightComponent;
	
	UPROPERTY(EditAnywhere, Category = "GameLogic")
	bool bIsCheckpoint = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Visuals")
	FLinearColor NormalColor = FLinearColor::Blue;
	UPROPERTY(EditDefaultsOnly, Category = "Visuals")
	FLinearColor CheckpointColor = FLinearColor::Yellow;
	UPROPERTY(EditDefaultsOnly, Category = "Visuals")
	FLinearColor LockedColor = FLinearColor::Red;


	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnTargeted(bool bIsTargeted);

	bool IsCheckpoint() const { return bIsCheckpoint; }

};
