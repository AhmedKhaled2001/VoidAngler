// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoidAngler_v00/GameBackend/Targetable.h"
#include "EnemyParent.generated.h"
UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Flowing     UMETA(DisplayName = "Flowing (Unhooked)"),
	Fighting    UMETA(DisplayName = "Fighting (Hooked & Pulling)"),
	Exhausted   UMETA(DisplayName = "Exhausted (Deadweight)"),
	PullingDrag UMETA(DisplayName = "Pulling Drag (Overpowering)")
};

USTRUCT(BlueprintType)
struct FFishFightProfile
{
	GENERATED_BODY()

	// --- 1. THE FLOW (Unhooked) ---
	UPROPERTY(EditDefaultsOnly, Category = "Flow")
	float CruisingSpeed = 2000.0f;
	UPROPERTY(VisibleAnywhere, Category = "AI|Combat")
	float TweakTimer = 0.0f;

	
	UPROPERTY(EditDefaultsOnly, Category = "Flow")
	float PreferredFlowDistance = 2000.0f; // Positive = ahead, Negative = behind

	UPROPERTY(EditDefaultsOnly, Category = "Flow")
	float LateralWeaveWidth = 1000.0f; // How far left/right it drifts

	UPROPERTY(EditDefaultsOnly, Category = "Flow")
	float WeaveAgility = 2.0f; // How fast it changes lanes

	// --- 2. THE TUG OF WAR (Fighting) ---
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float Mass = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float MaxStamina = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float SustainedFightForce = 5000.0f; // Normal pull away when hooked

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float TensionStaminaDrainMultiplier = 2.0f; // Extra stamina damage when line is tight

	// --- 3. THE PUNISHMENT (Pulling Drag) ---
	UPROPERTY(EditDefaultsOnly, Category = "Punishment")
	float DragPullForce = 15000.0f; // Spike force when overpowering

	UPROPERTY(EditDefaultsOnly, Category = "Punishment")
	float StaminaRegenOnDrag = 30.0f; // Boss heals if it pulls drag
};
UCLASS()
class VOIDANGLER_V00_API AEnemyParent : public AActor, public ITargetable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyParent();
	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetTarget(AActor* NewTarget);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = "Physics")
	float TargetSubmergedDepth = 150.0f; // How deep below the surface it wants to be

	UPROPERTY(EditDefaultsOnly, Category = "Physics")
	float BuoyancyStiffness = 50000.0f; // How hard it fights to stay at Target Depth

	UPROPERTY(EditDefaultsOnly, Category = "Physics")
	float BuoyancyDamping = 5000.0f; // Prevents the fish from bouncing endlessly
	UPROPERTY(BlueprintReadOnly, Category = "AI")
	AActor* TargetActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	EEnemyState CurrentState = EEnemyState::Flowing;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FFishFightProfile FightProfile;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	float CurrentStamina;
	// Treadmill offset: How far behind/ahead of the player should this enemy idle?
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float TargetDepthOffset = -2000.0f;
	

	// How heavy is this fish? Higher mass = harder to pull.
	UPROPERTY(EditAnywhere, Category = "Combat|Physics")
	float EnemyMass = 100.0f;

	// Water friction. Higher number = fish stops sliding faster when you stop pulling.
	UPROPERTY(EditAnywhere, Category = "Combat|Physics")
	float WaterDrag = 3.0f;
	// How aggressively it matches the player's A/D carving
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float LateralTrackingSpeed = 5.0f;
	UPROPERTY(VisibleAnywhere, Category = "AI|Combat")
	bool bIsTweaking = false;
	// The visual/physical representation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UCapsuleComponent* CollisionComp;
	float CurrentWeaveTime = 0.0f;

	// Cached references for performance (Prevents searching the world every frame)
	UPROPERTY()
	class AProceduralLevelGenerator* LevelGenRef;

	UPROPERTY()
	class APlayerCharacter* PlayerRef;
	float CurrentPullTension = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnTargeted(bool bIsTargeted) override;
	virtual void OnHooked() override;
	virtual void OnReleased() override;
	virtual ETargetWeightClass GetTargetWeightClass() const override;
	virtual void AddTowForce(const FVector& TowForce) override;
	virtual void OnLethalStrike() override;
	virtual float GetStaminaRatio() const override;
	virtual void RegisterPlayerTension(float TensionForce) override;
	
private:
	// The current momentum of the fish while being dragged
	FVector HookedVelocity = FVector::ZeroVector;
};
