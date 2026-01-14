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
	
	SetLinearDamping(0.05f);
	SetAngularDamping(1.0f);
	SetSimulatePhysics(true);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BoardComponent::OnCreatePhysicsState"));
}
