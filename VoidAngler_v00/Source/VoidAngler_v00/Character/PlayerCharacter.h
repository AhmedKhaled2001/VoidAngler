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

	// How low is too low? (World Z)
	UPROPERTY(EditAnywhere, Category = "Respawn")
	float KillZThreshold = -5000.0f;

	void Edge(float Value);
	void Reel(float Value);
	void Brake();
	void BrakeReleased();
private:
	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* CharacterMesh;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UBoardComponent* BoardComponent;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UTetherComponent* TetherComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCameraComponent* Camera;
	void FireTether();

	
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
