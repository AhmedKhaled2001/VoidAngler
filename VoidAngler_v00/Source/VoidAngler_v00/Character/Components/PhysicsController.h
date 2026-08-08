// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsController.generated.h"

UENUM(BlueprintType)
enum class EPhysicsState : uint8
{
	FreeRide,       // Unattached, player controls steering freely
	Tether_Carving, // Attached, line is taut, radius is clamped
	Tether_Reeling, // Attached, pointing at anchor, line is shrinking
	Overload        // Tension broke, player penalized
};
class AOceanManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOIDANGLER_V00_API UPhysicsController : public UActorComponent
{
	GENERATED_BODY()
private:
	EPhysicsState CurrentState = EPhysicsState::FreeRide;
	UPROPERTY()
	AActor* CurrentAnchor = nullptr;
	float CurrentRopeLength = 0.0f;
	float CurrentSteeringInput = 0.0f;
	float TensionMeter;
	float CurrentBoardYaw;
	float ComputedForwardDrag;
	float ComputedLateralDrag;
	float CurrentForwardDrag;
	float CurrentLateralDrag;
	float AttachedSpeed = 0.0f;
	FRotator CurrentBoardRot;
	float EntrySpeed = 0.0f;
	float CurrentStiffnessMultiplier = 1.0f;
	FTimerHandle DragTimer;
	float CurrentDragRatio = 1.0f;
	bool bResetingDrag = false;
	float PreResetForwardDrag = 0.0f;
	bool bCanAttach = true;
	float EdgeTiltRatio;
	float LastActiveSteering;
	float CurrentCarveAngle;
	float CurrentTravelYaw;
	float BoardHeadingYaw;

protected:
	
	// Tether Pull Settings
	UPROPERTY(EditAnywhere, Category = "Tether | Pull")
	double MaxExpectedLateralDrag;
	UPROPERTY(EditAnywhere, Category = "Tether | Pull")
	float ReelAcceleration = 6000.0f;
	// Turning Settings
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float MaxTurnRate = 90.0f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float MaxPitch = 30.0f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float AnchorYawRestoreSpeed = 45.0f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float CarveEfficiencyScalar;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float FreeEdgeBrakingFriction;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float FreeLateralGripStiffness;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float CarveEdgeBrakingFriction;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float CarveLateralGripStiffness;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float CarveAcceleration;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float MaxLateralMultiplier;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float LeaningBaseSpeed = 30.0f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float HydroDragCoefficient = 3.0f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float BaseWaterFriction = 0.3f;
	UPROPERTY(EditAnywhere, Category = "Movement |Turning")
	float RopeSnapThreshold;
	
	// Buoyancy Settings
	UPROPERTY(EditAnywhere, Category = "Movement | Buoyancy")
	float ZSnapResponsiveness = 15.0f; 
	UPROPERTY(EditAnywhere, Category = "Movement | Buoyancy")
	float RideHeightOffset = 50.0f;

	// Tension Meter Settings
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float TensionLossRate;
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float MaxTensionGainRate;
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float MaxSpeedBoost = 1000.0f;
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float MaxTensionBoost = 125.0f;
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float TimeAtMaxBoost = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Tether | Tension")
	float DragResetSpeed = 5.0f;
	
	UPROPERTY(EditAnywhere, Category = "Movement | Speed Control")
	float MaxTerminalVelocity = 4000.0f;
	UPROPERTY(EditAnywhere, Category = "Movement | Speed Control")
	float LateralGripRatio = 150.0f;
	UPROPERTY(EditAnywhere, Category = "Movement | Speed Control")
	float AbsoluteMaxCarveVelocity = 4000.0f;

	// Buoyancy Functions
	float HandleSuspensionNeed();
	
	// Steering Functions
	void UpdateKinematicIntent();
	FVector2D ProcessFreeCarving(float DeltaTime, FVector2d InVelocityXY);
	void ResetDrag();
	// Tethering Functions
	FVector2D ProcessTetherCarving(float DeltaTime, FVector2d InVelocityXY);

	// Visual Board Functions
	void UpdateVisualBoard();

public:
		void SetSteeringInput(float RawInput);
	
	















	
public:	
	UPhysicsController();
	float CurrentSpeedSoftCap;
	bool IsTetherActive() const { return bIsTetherActive; }
	void DetachAndSlingshot();
	void AttachToAnchor(AActor* AnchorActor);
	void ApplyTetherForces();
	/*UFUNCTION(BlueprintCallable, Category = "Arcade Physics")
	void SetSteeringInput(float RawInput);*/
	UFUNCTION(BlueprintCallable, Category = "Arcade Physics")
	void SetSkidInput(bool bIsPressed);
	UFUNCTION(BlueprintCallable, Category = "Arcade Physics")
	void SetSprintInput(bool bIsPressed);
	float GetCurrentSpeed() const { return PhysicsRoot ? PhysicsRoot->GetComponentVelocity().Size2D() : 0.0f; }
	float GetCurrentRoll() const { return CurrentRoll; }
	float GetSoftSpeedCap() const { return SoftSpeedCap; }
	bool GetIsSkidding() const { return bIsSkidding; }
	bool GetIsSprinting() const { return bIsSprinting; }
protected:
	virtual void BeginPlay() override;
	void HandleSuspension();
	
	UPROPERTY(EditAnywhere, Category = "Tether")
	float BungeeStiffness = 50.0f;
	UPROPERTY(EditAnywhere, Category = "Tether")
	float MaxTensionBurstMultiplier = 3.0f;
	UPROPERTY(EditAnywhere, Category = "Tether|Reel")
	float AutoReelSpeed = 1500.0f; 
	UPROPERTY(EditAnywhere, Category = "Tether|Reel")
	float MinRopeLength = 200.0f;

	
	UPROPERTY(EditAnywhere, Category = "Physics|Buoyancy")
	float BuoyancyStiffness = 500.0f; 
	UPROPERTY(EditAnywhere, Category = "Physics|Buoyancy")
	float WaterDamping = 30.0f;

	
	UPROPERTY(EditAnywhere, Category = "Physics|Carving")
	float RollInterpSpeed = 10.0f; 
	UPROPERTY(EditAnywhere, Category = "Physics|Carving")
	float YawInterpSpeed = 4.0f;
	UPROPERTY(EditAnywhere, Category = "Physics|Carving")
	float MaxVisualRoll = 45.0f; 
	bool bIsSkidding = false;
	UPROPERTY(EditAnywhere, Category = "Physics|Carving")
	float WaterStiffness = 10.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Global")
	float MaxTetherCounterLean = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Board|Global")
	float ModeTransitionSpeed = 5.0f; 
	
	UPROPERTY(EditAnywhere, Category = "Board|Standard")
	float StdStiffness = 6.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Standard")
	float StdFriction = 50.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Standard")
	float StdMaxYaw = 15.0f;

	// --- SPRINT MODE (Shift) ---
	UPROPERTY(EditAnywhere, Category = "Board|Sprint")
	float SprintStiffness = 15.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Sprint")
	float SprintFriction = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Sprint")
	float SprintMaxYaw = 10.0f;

	// --- SKID MODE (Space) ---
	UPROPERTY(EditAnywhere, Category = "Board|Skid")
	float SkidStiffness = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Skid")
	float SkidFriction = 3000.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Skid")
	float SkidMaxYaw = 80.0f;
	
	UPROPERTY(EditAnywhere, Category = "Board|Slingshot")
	float OptimalTetherAngle = 100.0f; 

	// How forgiving the sweet spot is. (e.g., 20 means anywhere from 80 to 120 gives some boost)
	UPROPERTY(EditAnywhere, Category = "Board|Slingshot")
	float SweetSpotTolerance = 20.0f; 

	// The massive forward push you get when hitting the sweet spot
	UPROPERTY(EditAnywhere, Category = "Board|Slingshot")
	float SlingshotBoostPower = 20000.0f;

	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	float SoftSpeedCap = 3000.0f; 

	// How massive the invisible wall becomes. Higher = harder soft cap.
	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	float AeroDragMultiplier = 50.0f; 
	UPROPERTY(EditAnywhere, Category = "Tether|Reel")
	float MinReelSpeed = 800.0f; 

	// The 'X' factor: How much faster the rope shrinks than your approach speed.
	// This keeps the line "Taut" (tight).
	UPROPERTY(EditAnywhere, Category = "Tether|Reel")
	float ReelTensionBonus = 300.0f;
	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	float DragCurveExponent = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Tether|Reeling")
	float  MaxTension;
	
	UPROPERTY(EditAnywhere, Category = "Tether|Motor")
	float EngineReelSpeed = 2000.0f; 

	UPROPERTY(EditAnywhere, Category = "Tether|Motor")
	float MinimumTautSpeed = 500.0f; 
	// 1.0 = normal drag, 0.2 = keep 80% of your momentum when detached!
	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	float CoastingDragMultiplier = 0.2f;
	// X: Distance Progress (0.0 = Just attached, 1.0 = Arrived at Anchor)
	// Y: Engine Power Multiplier (e.g., 0.0 to 1.0)
	UPROPERTY(EditAnywhere, Category = "Tether|Motor")
	UCurveFloat* EngineDistancePowerCurve;
	// X: Speed Ratio (CurrentSpeed / SoftSpeedCap). 0.0 = Stopped, 1.0 = At Speed Cap.
	// Y: Engine Power Multiplier. (e.g., 1.0 at slow speeds, 0.2 at max speed).
	UPROPERTY(EditAnywhere, Category = "Tether|Motor")
	UCurveFloat* EngineSpeedMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Board|Slingshot")
	UCurveFloat* BoostCurve;
	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	UCurveFloat* SpeedGainCurve;
	UPROPERTY(EditAnywhere, Category = "Board|Speed Regulation")
	UCurveFloat* BrakeCurve;
	UPROPERTY(EditAnywhere, Category = "Tether|Reeling")
	UCurveFloat* TensionCurve;
	UPROPERTY(EditAnywhere, Category = "Tether|Reeling")
	UCurveFloat* StiffnessCurve;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void InitializeComponent(UPrimitiveComponent* InPhysicsRoot, UPrimitiveComponent* InBoardMesh);
	void SetCurrentMaxSpeed(float NewSpeed){SoftSpeedCap = NewSpeed;}
	float GetCurrentMaxSpeed(){return SoftSpeedCap;}
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CurrentSpeedRatio= 0.0f;
	UFUNCTION(BlueprintCallable)
	void DisableTether();
	UFUNCTION(BlueprintCallable)
	void SetCanAttach(bool bNewCanAttach){CanAttach = bNewCanAttach;}	
	
private:
	float InitialGrappleDistance;
	
	float LastAttachSpeed;
	float SnapshotApproachSpeed;
	float CalculatedTargetBoost;
	float TimeSinceAttached;
	bool bIsSprinting = false;
	float LastTravelYaw = 0.0f;
	float CurrentRestLength = 0.0f;
	float CurrentTension = 0.0f;
	bool bIsTetherActive = false;
	bool CanAttach = true;
	UPROPERTY()
	UPrimitiveComponent* PhysicsRoot;
	/*UPROPERTY()
	AActor* CurrentAnchor;*/
	UPROPERTY()
	AOceanManager* OceanManager;
	UPROPERTY()
	UPrimitiveComponent* BoardMesh;
	float TargetLean = 0.0f; 
	float CurrentLean = 0.0f;
	float CurrentRoll = 0.0f;
	float CurrentYawOffset = 0.0f;
	float LiveStiffness;
	float LiveFriction;
	float LiveMaxYaw;
};
