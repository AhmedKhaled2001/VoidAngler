// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BoardComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VOIDANGLER_V00_API UBoardComponent : public UStaticMeshComponent
{

	GENERATED_BODY()
	
public:
	UBoardComponent();
	virtual void BeginPlay() override;
	
protected:
	virtual void OnCreatePhysicsState() override;
};
