// Fill out your copyright notice in the Description page of Project Settings.


#include "AnchorPoint.h"

#include "Components/PointLightComponent.h"

// Sets default values
AAnchorPoint::AAnchorPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	// CRITICAL: Ensure it blocks the "Visibility" channel (Trace)
	MeshComponent->SetCollisionProfileName(TEXT("BlockAll"));

	LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent"));
	LightComponent->SetupAttachment(MeshComponent);
	LightComponent->SetIntensity(9000.0f);
	LightComponent->SetAttenuationRadius(2000.0f);
	LightComponent->SetLightColor(NormalColor);
}

// Called when the game starts or when spawned
void AAnchorPoint::BeginPlay()
{
	Super::BeginPlay();
	if (bIsCheckpoint)
	{
		LightComponent->SetLightColor(CheckpointColor);
		LightComponent->SetIntensity(15000.0f); // Checkpoints glow brighter
	}
}

// Called every frame
void AAnchorPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAnchorPoint::OnTargeted(bool bIsTargeted)
{
	if (bIsTargeted)
	{
		LightComponent->SetLightColor(LockedColor);
		LightComponent->SetIntensity(15000.0f); // Checkpoints glow brighter
	}
	else
	{
		if (bIsCheckpoint)
		{
			LightComponent->SetLightColor(NormalColor);
			LightComponent->SetIntensity(9000.0f);
		}
		else
		{
			LightComponent->SetLightColor(CheckpointColor);
			LightComponent->SetIntensity(15000.0f);
		}
	}
}

void AAnchorPoint::OnHooked()
{
	
}

void AAnchorPoint::OnReleased()
{
	
}

ETargetWeightClass AAnchorPoint::GetTargetWeightClass() const
{
	return ETargetWeightClass::StaticAnchor;
}

