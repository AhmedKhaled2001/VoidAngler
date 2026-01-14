// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TetherComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOIDANGLER_V00_API UTetherComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTetherComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Initalize(UPrimitiveComponent* InPhysicsRoot);
	void SetTetherTargetLocation( AActor* TargetActor, const FVector& TargetLocation);
	void DetachTether();
	bool IsTetherActive() const {return bIsTetherActive;};
	FVector GetCurrentTarget() const {return TetherTargetLocation;}
	void SetEdgeInput(float InputValue);

	void SetSteeringInput(float StrafeInput, FVector CamForward);
	void SetReelInput(float InputValue);
	void SetBraking(bool bBrakingState);
	AActor* GetAttachedActor() const { return AttachedActor; }
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY()
	AActor* AttachedActor = nullptr;
	UPROPERTY(VisibleAnywhere, Category="Tether State")
	bool bIsTetherActive = false;
	UPROPERTY(VisibleAnywhere, Category="Tether State")
	FVector TetherTargetLocation = FVector::ZeroVector;
	float CurrentTetherLength = 0.0f;
	UPROPERTY()
	UPrimitiveComponent* PhysicsRoot;
	// Hover System
	UPROPERTY(EditAnywhere, Category = "Suspension")
	float HoverHeight = 150.0f; 
	UPROPERTY(EditAnywhere, Category = "Suspension")
	float HoverForce = 200000.0f; 
	UPROPERTY(EditAnywhere, Category = "Suspension")
	float HoverDamping = 50.0f; 
	UPROPERTY(EditAnywhere, Category = "Suspension")
	FVector SuspensionSpread = FVector(35.0f, 100.0f, 0.0f);

	// Aerodynamics System
	bool bIsBraking = false;
	UPROPERTY(EditAnywhere, Category = "Aerodynamics")
	float KeelDrag = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Aerodynamics")
	float AirbrakeDrag = 20.0f; // High drag
	UPROPERTY(EditAnywhere, Category = "Aerodynamics")
	float AirbrakeTurnSpeed = 8.0f; // Snap rotation speed
	UPROPERTY(EditAnywhere, Category = "Aerodynamics")
	float AirbrakeAngleForce = 200.0f;

	// Control System
	UPROPERTY(EditAnywhere, Category = "Control")
	float YawStrength = 20000.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float RollStrength = 50000.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float MaxStabilityAngle = 45.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float StabilityExponent = 3.0f; // 
	UPROPERTY(EditAnywhere, Category = "Control")
	float UprightStrength = 500000.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float PitchDamping = 10000.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float YawDamping = 10000.0f;
	UPROPERTY(EditAnywhere, Category = "Control")
	float RollDamping = 10000.0f;
	FVector DesiredHeading = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category = "Control")
	float CameraSteerStrength = 300000.0f;

	UPROPERTY(EditAnywhere, Category = "Tether")
	float FoilLiftStrength = 800000.0f;
	UPROPERTY(EditAnywhere, Category = "Tether")
	float TetherStrength = 600000.0f;
	
	// Tether Reeling System
	UPROPERTY(EditAnywhere, Category = "Reel")
	float ReelInSpeed = 1000.0f; // Retraction speed
	UPROPERTY(EditAnywhere, Category = "Reel")
	float ReelOutSpeed = 1500.0f; // Extension speed
	UPROPERTY(EditAnywhere, Category = "Reel")
	float MinTetherLength = 200.0f; 
	UPROPERTY(EditAnywhere, Category = "Reel")
	float MaxTetherLength = 5000.0f;
	

	
	float ReelInput = 0.0f;
	float EdgeInput = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Tether Physics")
	float SwingStrength = 40000.0f; // Start with half the pull strength
	UPROPERTY(EditAnywhere, Category = "Tether Aerodynamics")
	float RotationalDamping = 4.0f;


	

	
private:
	void ApplySuspension();
	void ApplyAerodynamics();
	void ApplyControl();
	void ApplyTetherForces();
};
