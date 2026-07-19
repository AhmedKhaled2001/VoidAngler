// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class VOIDANGLER_V00_API AObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacle();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	class UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle Globals")
	TSubclassOf<class UCameraShakeBase> HitShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle Globals")
	float TetherDisableDuration = 3.0f;
	FTimerHandle HitTimerHandle;
	void ResetObstacle(class APlayerCharacter* Player, float CurrentSpeed);
	// This makes it so you can define what happens when you hit this 
	// SPECIFIC obstacle in the Blueprint Editor (e.g., set damage, slow amount)
	UFUNCTION(Blueprintable, Category = "Interaction")
	void OnPlayerHit(AActor* PlayerActor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
					   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
					   bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
