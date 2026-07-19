// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOIDANGLER_V00_API UCameraManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCameraManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY()
	class USpringArmComponent* SpringArm;
	UPROPERTY()
	class UCameraComponent* PlayerCamera;
	UPROPERTY()
	class UPhysicsController* PhysicsComp;
	UPROPERTY(EditAnywhere, Category = "Camera|Debug")
	bool bShowDebugLog = true;
	
	UPROPERTY(EditAnywhere, Category = "Camera|FOV")
	float BaseFOV = 90.0f;
	UPROPERTY(EditAnywhere, Category = "Camera|FOV")
	float MaxFOVStretch = 30.0f; 
	UPROPERTY(EditAnywhere, Category = "Camera|Distance")
	float BaseArmLength = 600.0f;
	UPROPERTY(EditAnywhere, Category = "Camera|Distance")
	float MaxArmBackshift = 400.0f; 
	UPROPERTY(EditAnywhere, Category = "Camera|Feel")
	float CameraInterpSpeed = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera|Lean")
	float CameraTiltIntensity = 0.5f; // 0.5 = camera tilts half as much as the board
	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float SprintFOVMod = 20.0f; // The "Warp" amount when sprinting

	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float SprintArmMod = 150.0f; // Camera pulls back further to show the board "leaving" the camera

	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float SprintInterpSpeed = 10.0f;
	UPROPERTY(EditAnywhere, Category = "Camera|Lean")
	float TiltInterpSpeed = 6.0f;
	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float ShakeThreshold = 0.85f; 

	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float ShakeIntensity = 3.0f; 
	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float StartingSpeed = 3000.0f; 
	UPROPERTY(EditAnywhere, Category = "Camera|Feedback")
	float SkidImpactForce = 15.0f; 
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Initialize(class USpringArmComponent* InArm, class UCameraComponent* InCam, class UPhysicsController* InPhys);
		
};
