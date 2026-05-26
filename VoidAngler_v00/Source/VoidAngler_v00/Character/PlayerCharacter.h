// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UTetherComponent;
class UBoardComponent;

UCLASS()
class VOIDANGLER_V00_API APlayerCharacter : public APawn
{
	GENERATED_BODY()

public:
	APlayerCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
	UPROPERTY()
	AActor* CurrentTargetActor = nullptr;
	FVector LastCheckpointLocation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class UBoxComponent* RamHitbox;
	
	UPROPERTY(EditAnywhere, Category = "Respawn")
	float KillZThreshold = -5000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|Ram")
	float LethalSpeedThreshold = 4000.0f; 

	// Must be a UFUNCTION to bind to the dynamic delegate
	UFUNCTION()
	void OnRamHitboxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	void Edge(float Value);
	void Winch(float Value);
	void Brake();
	void BrakeReleased();
private:
	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* CharacterMesh;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UBoardComponent* BoardComponentt;
	UPROPERTY(VisibleAnywhere, Category="Components")
	class UCameraManager* CameraManager;
	UPROPERTY(VisibleAnywhere, Category="Components")
	class UStaticMeshComponent* BoardMesh;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UTetherComponent* TetherComponent;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class UPhysicsController* PhysicsControllerr;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCameraComponent* Camera;
	void FireTether();
	void SprintPressed();
	void SprintReleased();

	
	UPROPERTY(EditAnywhere, Category = "Aim Assist")
	float AimScanRadius = 500.0f; 
	UPROPERTY(EditAnywhere, Category = "Aim Assist")
	float AimScanDistance = 15000.0f; 

	// Helper Function: Returns the best target actor (or nullptr)
	AActor* FindBestTetherTarget();
	
	void Turn(float Value);
	void LookUp(float Value);
public:	
	void SetCheckpoint(FVector NewLocation);

	// Call this to kill/respawn the player
	void Respawn();
};
