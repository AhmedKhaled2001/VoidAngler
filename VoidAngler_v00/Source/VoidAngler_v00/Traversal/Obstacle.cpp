// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"

#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "VoidAngler_v00/Character/PlayerCharacter.h"
#include "VoidAngler_v00/Character/Components/BoardComponent.h"
#include "VoidAngler_v00/Character/Components/PhysicsController.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;
    
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

void AObstacle::ResetObstacle(APlayerCharacter* Player, float CurrentSpeed)
{
	Player->PhysicsControllerr->SetCurrentMaxSpeed(CurrentSpeed);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Purple, FString::Printf(TEXT("CurrentSpeed after reset: %.2f"), CurrentSpeed));
	
	//Player->PhysicsControllerr->SetCanAttach(true);
}

void AObstacle::OnPlayerHit(AActor* PlayerActor)
{
	//On Hit Obstacle Sequence 
	APlayerCharacter* Player = Cast<APlayerCharacter>(PlayerActor);
	if (Player)
	{
		float CurrentSpeed = Player->PhysicsControllerr->GetCurrentMaxSpeed();
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Purple, FString::Printf(TEXT("CurrentSpeed: %.2f"), CurrentSpeed));
		Player->PhysicsControllerr->SetCurrentMaxSpeed(CurrentSpeed / 2.0f);
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Purple, FString::Printf(TEXT("CurrentSpeed On Hit: %.2f"), CurrentSpeed));
		
		//Player->PhysicsControllerr->SetCanAttach(false);
		Player->PhysicsControllerr->DisableTether();
		if (HitShake)
			UGameplayStatics::PlayWorldCameraShake(GetWorld(), HitShake, GetActorLocation(), 100000.0f, 100000.0f);
		if (GetWorld()->GetTimerManager().IsTimerActive(HitTimerHandle))
		{
			ResetObstacle(Player, CurrentSpeed);
		}
		GetWorld()->GetTimerManager().SetTimer(HitTimerHandle,
			[this, Player, CurrentSpeed]()
				{
					this->ResetObstacle(Player, CurrentSpeed);
				},
			TetherDisableDuration,
			false);
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("Obstacle Hit")));
	}
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::HandleOverlap);
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::HandleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
							 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
							 bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the actor overlapping is your Player Pawn
	if (OtherActor && OtherActor->IsA(APawn::StaticClass())) // Or replace with your specific Player class
	{
		// Call the Blueprint logic for this specific obstacle
		OnPlayerHit(OtherActor);
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}