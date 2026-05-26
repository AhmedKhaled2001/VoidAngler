// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Targetable.generated.h"

UENUM(BlueprintType)
enum class ETargetWeightClass : uint8
{
	StaticAnchor UMETA(DisplayName = "Static Anchor (Pulls Player)"),
	Lightweight UMETA(DisplayName = "Lightweight (Pulls Enemy)")
};

UINTERFACE(MinimalAPI)
class UTargetable : public UInterface
{
	GENERATED_BODY()
};

class VOIDANGLER_V00_API ITargetable
{
	GENERATED_BODY()
public:
	// Visual feedback: Turns the crosshair/lights on or off
	virtual void OnTargeted(bool bIsTargeted) = 0;

	// Physics Handshake: The tether has connected
	virtual void OnHooked() = 0;

	// Physics Handshake: The tether has severed
	virtual void OnReleased() = 0;
	virtual void OnLethalStrike() = 0;
	virtual void AddTowForce(const FVector& TowForce) = 0;
	// Architectural Query: How should the Tether math treat this?
	virtual ETargetWeightClass GetTargetWeightClass() const = 0;
	virtual float GetStaminaRatio() const = 0;
	virtual void RegisterPlayerTension(float TensionForce) = 0;
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
};
