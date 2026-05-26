// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardComponent.h"

UBoardComponent::UBoardComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UBoardComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UBoardComponent::OnCreatePhysicsState()
{
	Super::OnCreatePhysicsState();
	SetCollisionProfileName(TEXT("PhysicsActor"));
	SetEnableGravity(true);
	
	GetBodyInstance()->bLockXRotation = true; 
	GetBodyInstance()->bLockYRotation = true; 
	GetBodyInstance()->bLockZRotation = true; // Add this!

	GetBodyInstance()->bOverrideMass = true;
	GetBodyInstance()->SetMassOverride(100.0f);
	SetLinearDamping(0.0f);
	SetAngularDamping(1.0f);
	SetSimulatePhysics(true);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BoardComponent::OnCreatePhysicsState"));
}
