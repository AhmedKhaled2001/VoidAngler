// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TetherComponent.generated.h"

class AOceanManager;

UENUM(BlueprintType)
enum class ETetherState : uint8
{
    Inactive,
    Spooling,  
    Locked,
    DragBurn 
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOIDANGLER_V00_API UTetherComponent : public UActorComponent
{
    GENERATED_BODY()

public: 
    UTetherComponent();
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
    void Initalize(UPrimitiveComponent* InPhysicsRoot);
    void SetTetherTargetLocation(AActor* TargetActor, const FVector& TargetLocation);
    void DetachTether();
    
    bool IsTetherActive() const { return bIsTetherActive; }
    FVector GetCurrentTarget() const { return TetherTargetLocation; }
    AActor* GetAttachedActor() const { return AttachedActor; }

    void SetSteeringInput(float StrafeInput, FVector CamForward);
    void SetReelInput(float InputValue);
    void SetEdgeInput(float Value);
    void SetBraking(bool bBrakingState);
    
    // Rhythm & Whip-Crack
    void EvaluateRhythmInput(); 

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tether|State")
    ETetherState CurrentTetherState = ETetherState::Inactive;

protected:
    virtual void BeginPlay() override;
    UPROPERTY()
    AOceanManager* OceanManager;
    UPROPERTY()
    AActor* AttachedActor = nullptr;
    UPROPERTY(VisibleAnywhere, Category="Tether|State")
    bool bIsTetherActive = false;
    UPROPERTY(VisibleAnywhere, Category="Tether|State")
    FVector TetherTargetLocation = FVector::ZeroVector;
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float ForwardDragCoefficient = 0.0005f;
    float CurrentTetherLength = 0.0f;
    
    UPROPERTY()
    UPrimitiveComponent* PhysicsRoot;

    // --- HOVER SYSTEM ---
    UPROPERTY(EditAnywhere, Category = "Suspension")
    float HoverHeight = 150.0f; 
    UPROPERTY(EditAnywhere, Category = "Suspension")
    float HoverForce = 200000.0f; 
    UPROPERTY(EditAnywhere, Category = "Suspension")
    float HoverDamping = 50.0f; 
    UPROPERTY(EditAnywhere, Category = "Suspension")
    FVector SuspensionSpread = FVector(35.0f, 100.0f, 0.0f);

    // --- AERODYNAMICS ---
    bool bIsBraking = false;
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float KeelDrag = 2.0f;
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float MinSpeedForKeelDrag = 50.0f;
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float AirbrakeDrag = 20.0f; 
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float AirbrakeTurnSpeed = 8.0f; 
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float AirbrakeAngleForce = 200.0f;
    UPROPERTY(EditAnywhere, Category = "Aerodynamics")
    float BrakingPitchAngle = 25.0f;

    // --- CONTROL SYSTEM ---
    UPROPERTY(EditAnywhere, Category = "Control")
    float CameraSteerStrength = 300000.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float RollStrength = 50000.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float MaxStabilityAngle = 45.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float StabilityExponent = 3.0f; 
    UPROPERTY(EditAnywhere, Category = "Control")
    float UprightStrength = 500000.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float BrakingUprightStrength = 10.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float PitchDamping = 10000.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float YawDamping = 10000.0f;
    UPROPERTY(EditAnywhere, Category = "Control")
    float RollDamping = 10000.0f;
    
    FVector DesiredHeading = FVector::ZeroVector;
    float EdgeInput = 0.0f;

    // --- TETHER CORE (V1 Hybrid) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float BaseSlack = 800.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float AutoSpoolSpeed = 3000.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float MinTetherLength = 200.0f; 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float ReelInSpeed = 100.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float TetherStrength = 600000.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float MaxStretchRatioClamp = 8.0f;
    
    // --- TETHER SURFING ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Surfing")
    float FoilLiftStrength = 800000.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Surfing")
    float MinAlignmentForLift = -0.2f;

    // --- TETHER RHYTHM & REDLINE ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float TensionStretchThreshold = 1.3f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float TensionBuildRate = 100.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float TensionDecayRate = 50.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float MaxSimulatedTension = 100.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float WhipCrackWindow = 0.15f; 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float WhipCrackVelocitySpike = 3000.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float DragBurnLinearDamping = 5.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float BaseLinearDamping = 0.1f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float DragBurnDuration = 1.5f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Rhythm")
    float WhipCrackSpeedMultiplier = 0.5f;

private:
    float WinchInputValue = 0.0f; // Unified input variable
    float SimulatedTension = 0.0f;
    float TimeOfRedline = -1.0f;
    FTimerHandle DragBurnTimerHandle;

    void ApplySuspension();
    void ApplyAerodynamics();
    void ApplyControl();
    void ApplyTetherForces();
    void EndDragBurn();
};