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
    // The maximum angle (in degrees) the board will lean when carving at full speed.
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Visuals")
    float MaxCarveLeanAngle = 60.0f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Aerodynamics")
    float UntetheredGripMultiplier = 0.05f;
    // The lateral speed required to reach the maximum lean angle. 
    // Lower = leans easier. Higher = takes massive speed to lean fully.
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Visuals")
    float SpeedForMaxLean = 1500.0f;
    
    UPROPERTY()
    UPrimitiveComponent* PhysicsRoot;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Aerodynamics")
    float MaxKeelGripForce = 150000.0f;
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
    // --- 1. STATE & SPOOLING ---
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tether|State")
    float CurrentRestLength;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Settings", meta = (ClampMin = "10.0"))
    float MinTetherLength = 50.0f; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Spooling")
    float AutoSpoolSpeed = 3000.0f; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Spooling")
    float ManualSpoolSpeed = 800.0f; 

    bool bIsAutoSpooling = false;
    float TargetAutoSpoolLength = 0.0f;

    // --- 2. THE PD CONTROLLER (PHYSICS) ---
    // NOTE: Because we are no longer ignoring mass, these numbers need to be BIG (e.g., 50000.0f)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Physics")
    float TetherStiffness = 50000.0f; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Physics")
    float TetherDamping = 5000.0f; 

    // --- 3. THE DRAG PENALTY (MECHANICS) ---
    // The force threshold where the reel fails and gives line back to the fish
    

    // How fast the line violently rips out when the drag fails
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Mechanics")
    float ForcedDespoolRate = 1500.0f;
    // --- TETHER CORE (V1 Hybrid) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Core")
    float BaseSlack = 800.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Mechanics")
    float ReelLockoutDuration = 1.5f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Mechanics")
    float MaxStretchRatio = 1.25f;
    float ReelLockoutTimer = 0.0f;
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
    UPROPERTY(EditAnywhere, Category = "Hoverboard|Steering")
    float SteerInterpSpeed = 5.0f;
    // --- ARCADE POWER-WAKE SYSTEM (Analog Carving) ---

    // The current stored kinetic energy from carving against the tether
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PowerWake")
    float CurrentCharge = 0.0f;

    // The maximum amount of charge the player can hold
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float MaxCharge = 100.0f;

    // The baseline rate charge builds when circling the anchor perfectly (Dot Product = 0)
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float BaseChargeRate = 4.0f;

    // Multiplier applied when the player steers aggressively AWAY from the anchor
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float MaxCarveMultiplier = 3.0f;

    // The massive forward impulse applied upon release (Multiplied by CurrentCharge)
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float SlingshotForcePerCharge = 2000.0f;

    // The rigid maximum length of the tether. The player physically cannot exceed this distance.
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float MaxLeashRadius = 3000.0f;
    // THE SKI-BOAT: The minimum speed the tether will drag you toward the anchor
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float MinTowSpeed = 3000.0f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float MaxCarveSpeed = 4500.0f;
    // How aggressively the tether accelerates you to match the Tow Speed
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake")
    float TowAcceleration = 5.0f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Carving")
    float OptimalCarveDot = -0.5f;

    // How far from the optimal angle the player can be before the charge drops to zero.
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Carving")
    float CarveTolerance = 0.5f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Movement")
    float BungeeStiffness = 15.0f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Movement")
    float MaxBungeeAccel = 15000.0f;
    // The shock absorber. Prevents the bungee from bouncing you infinitely like a yo-yo.
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Movement")
    float BungeeDamping = 8.0f;
    UPROPERTY(EditDefaultsOnly, Category = "PowerWake|Movement")
    float WaterFrictionStrength = 5000.0f;

public:
    // Calculates the final charge and applies the forward impulse upon detach
    void ExecuteSlingshotRelease();
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
    
    // The smoothed value currently driving the physics
    float CurrentSteerCommand = 0.0f;
    
    // How fast the board leans into the carve (tune this in Blueprints, try 5.0 to start)
    
};