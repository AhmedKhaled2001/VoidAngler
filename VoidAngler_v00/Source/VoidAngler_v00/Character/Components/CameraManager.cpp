// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraManager.h"

#include "PhysicsController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values for this component's properties
UCameraManager::UCameraManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCameraManager::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UCameraManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!SpringArm || !PlayerCamera || !PhysicsComp) return;
	
	float Speed = PhysicsComp->GetCurrentSpeed();
	float SpeedCap = PhysicsComp->GetSoftSpeedCap();
	float SpeedRatio = FMath::Clamp(Speed / SpeedCap, 0.0f, 1.5f);
	float BoardRoll = PhysicsComp->GetCurrentRoll();
	bool bIsSkidding = PhysicsComp->GetIsSkidding();
	bool bIsSprinting = PhysicsComp->GetIsSprinting();
	
	float TargetFOV = BaseFOV + (SpeedRatio * MaxFOVStretch);
	float TargetArmLength = BaseArmLength + (SpeedRatio * MaxArmBackshift);
	if (bIsSprinting)
	{
		TargetFOV += SprintFOVMod;
		TargetArmLength += SprintArmMod;
	}
	float TargetTilt = -BoardRoll * CameraTiltIntensity;
	FRotator CurrentCamRot = PlayerCamera->GetRelativeRotation();
	FRotator NewCamRot = FRotator(0.0f, 0.0f, TargetTilt);

	if (SpeedRatio > ShakeThreshold)
	{
		// Calculate how "deep" into the shake zone we are (0.0 to 1.0)
		float IntensityFactor = (SpeedRatio - ShakeThreshold) / (1.5f - ShakeThreshold);
		float CurrentShake = IntensityFactor * ShakeIntensity;

		// Apply a random offset to the camera's relative location
		FVector JitterOffset = FVector(
			0.0f, // Keep X (Forward) stable to avoid clipping
			FMath::RandRange(-CurrentShake, CurrentShake),
			FMath::RandRange(-CurrentShake, CurrentShake)
		);
		PlayerCamera->SetRelativeLocation(JitterOffset);
	}
	else
	{
		// Smoothly return to zero if we drop below the shake speed
		PlayerCamera->SetRelativeLocation(FMath::VInterpTo(PlayerCamera->GetRelativeLocation(), FVector::ZeroVector, DeltaTime, 5.0f));
	}

	if (bIsSkidding)
	{
		// We add to the FOV directly. Since it's already interping in Task 2,
		// this will feel like a sudden "pop" out.
		PlayerCamera->FieldOfView += SkidImpactForce * DeltaTime * 10.0f;
	}
	float CurrentInterp = bIsSprinting ? SprintInterpSpeed : CameraInterpSpeed;
	PlayerCamera->FieldOfView = FMath::FInterpTo(
		PlayerCamera->FieldOfView, 
		TargetFOV, 
		DeltaTime, 
		CurrentInterp
	);
	SpringArm->TargetArmLength = FMath::FInterpTo(
		SpringArm->TargetArmLength, 
		TargetArmLength, 
		DeltaTime, 
		CurrentInterp
	);
	
	PlayerCamera->SetRelativeRotation(FMath::RInterpTo(
		CurrentCamRot, 
		NewCamRot, 
		DeltaTime, 
		TiltInterpSpeed
	));
	if (bShowDebugLog)
	{
		GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::Cyan, FString::Printf(TEXT("Speed: %.0f | FOV: %.1f"), Speed, PlayerCamera->FieldOfView));
	}
	if (bShowDebugLog)
	{
		GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::Cyan, FString::Printf(TEXT("Watcher Speed: %.2f"), Speed));
	}
}

void UCameraManager::Initialize(class USpringArmComponent* InArm, class UCameraComponent* InCam,
	class UPhysicsController* InPhys)
{
	SpringArm = InArm;
	PlayerCamera = InCam;
	PhysicsComp = InPhys;
}

