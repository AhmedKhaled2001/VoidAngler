// Fill out your copyright notice in the Description page of Project Settings.


#include "OceanManager.h"

// Sets default values
AOceanManager::AOceanManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

float AOceanManager::GetWaterHeightAt(FVector2D QueryLocation, float Time) const
{
	return BaseWaterHeight;
}

// Called when the game starts or when spawned
void AOceanManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOceanManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

