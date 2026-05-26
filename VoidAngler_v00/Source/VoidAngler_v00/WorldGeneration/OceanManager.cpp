// Fill out your copyright notice in the Description page of Project Settings.


#include "OceanManager.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMaterialLibrary.h"
// Sets default values
AOceanManager::AOceanManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

float AOceanManager::GetWaterHeightAt(FVector2D QueryLocation, float Time) const
{
	if (AmbientWaves.Num() == 0) return 0.0f; // Safety check

	FGerstnerWave BaseWave = AmbientWaves[0];

	// The Gerstner Math
	float k = 6.283185f / BaseWave.Wavelength; 
	float CurrTime = GetWorld()->GetTimeSeconds();
	float Phase = (k * QueryLocation.X * BaseWave.Direction.X) - (BaseWave.Speed * CurrTime);

	return (BaseWave.Amplitude * FMath::Sin(Phase)) ;
}

// Called when the game starts or when spawned
void AOceanManager::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(MPCDelayTimerHandle, this, &AOceanManager::DelayedBeginPlay, 0.1f, false);

}

void AOceanManager::DelayedBeginPlay()
{
	if (AmbientWaves.Num() > 0 && OceanMPC)
	{
		FGerstnerWave BaseWave = AmbientWaves[0];

		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Amplitude"), BaseWave.Amplitude);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Length"), BaseWave.Wavelength);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Speed"), BaseWave.Speed);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_DirX"), BaseWave.Direction.X);
	}
}

// Called every frame
void AOceanManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// 1. Clean up expired wave events
	UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Global_Time"), GetWorld()->GetTimeSeconds());
	for (int32 i = ActiveWaveEvents.Num() - 1; i >= 0; --i)
	{
		ActiveWaveEvents[i].ElapsedTime += DeltaTime;
		if (ActiveWaveEvents[i].ElapsedTime >= ActiveWaveEvents[i].Duration)
		{
			ActiveWaveEvents.RemoveAt(i);
		}
	}
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn && false)
	{
		FVector PlayerLoc = PlayerPawn->GetActorLocation();
		float CurrentTime = GetWorld()->GetTimeSeconds();

		// Draw a 10x10 grid of points around the player
		int32 GridSize = 10;
		float Spacing = 500.0f; // 500 units between each dot

		for (int x = -GridSize / 2; x < GridSize / 2; ++x)
		{
			for (int y = -GridSize / 2; y < GridSize / 2; ++y)
			{
				// Calculate the X/Y Query Location
				FVector2D QueryLoc(PlayerLoc.X + (x * Spacing), PlayerLoc.Y + (y * Spacing));
                
				// Ask the Oracle for the Z height!
				float WaterZ = GetWaterHeightAt(QueryLoc, CurrentTime);

				// Draw a blue sphere at that exact 3D location
				FVector DrawLoc(QueryLoc.X, QueryLoc.Y, WaterZ);
				DrawDebugSphere(GetWorld(), DrawLoc, 25.0f, 8, FColor::Cyan, false, -1.0f, 0, 2.0f);
			}
		}
	}
}

void AOceanManager::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (AmbientWaves.Num() > 0 && OceanMPC)
	{
		FGerstnerWave BaseWave = AmbientWaves[0];

		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Amplitude"), BaseWave.Amplitude);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Length"), BaseWave.Wavelength);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_Speed"), BaseWave.Speed);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_DirX"), BaseWave.Direction.X);
		UKismetMaterialLibrary::SetScalarParameterValue(this, OceanMPC, FName("Ambient_BaseHeight"), BaseWaterHeight);
		
	}
}

void AOceanManager::TriggerWaveEvent(FGerstnerWave WaveParams, FVector2D EventEpicenter, float EventRadius, float Falloff, float Duration)
{
	FWaveEvent NewEvent;
	NewEvent.WaveData = WaveParams;
	NewEvent.Epicenter = EventEpicenter;
	NewEvent.Radius = EventRadius;
	NewEvent.FalloffDistance = Falloff;
	NewEvent.Duration = Duration;
	NewEvent.ElapsedTime = 0.0f;

	ActiveWaveEvents.Add(NewEvent);
}

