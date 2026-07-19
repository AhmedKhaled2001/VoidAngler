// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelDirector.h"

#include "OceanManager.h"
#include "Kismet/GameplayStatics.h"
#include "VoidAngler_v00/GameBackend/LevelDeck.h"

// Sets default values
ALevelDirector::ALevelDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelDirector::BeginPlay()
{
	Super::BeginPlay();
	OceanManagerRef = Cast<AOceanManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AOceanManager::StaticClass()));
	//GetWorld()->GetTimerManager().SetTimer(TestWaveTimer, this, &ALevelDirector::SpawnTestTsunami, TestTsunamiFrequency, true);
	PlayerRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerRef)
	{
		LastPlayerLocation = PlayerRef->GetActorLocation();
		FVector StartLoc = PlayerRef->GetActorLocation();
		StartLoc.Z = 0.0f; 
		float StartingWidth = 4000.0f; 
		if (CurrentBiomeDeck && CurrentBiomeDeck->LaneWidthCurve)
		{
			StartingWidth = CurrentBiomeDeck->LaneWidthCurve->GetFloatValue(0.0f);
		}
		FVector RightVector = PlayerRef->GetActorRightVector();
		LastLeftWallLoc = StartLoc - (RightVector * (StartingWidth / 2.0f));
		LastRightWallLoc = StartLoc + (RightVector * (StartingWidth / 2.0f));
		NoiseStep = FMath::RandRange(0.0f, 1000.0f);
		LastCenterLoc = StartLoc;
		CurrentTrackDirection = PlayerRef->GetActorForwardVector();
		CurrentTrackDirection.Z = 0.0f;
		CurrentTrackDirection.Normalize();
	}
	
	GetWorld()->GetTimerManager().SetTimer(PoolRefreshTimer, this, &ALevelDirector::RefreshActivePool, 0.5f, true);
}
/*void ALevelDirector::SpawnTestTsunami()
{
	if (!OceanManagerRef || !PlayerRef) return;
	
	// 2. Define the "Blast Zone"
	FVector PlayerLoc = PlayerRef->GetActorLocation();
	FVector2D Epicenter(PlayerLoc.X, PlayerLoc.Y + 25000.0f); // Spawn it slightly ahead of the player
    
	float Radius = 25000.0f; // Massive 10,000 unit area
	float Falloff = 7000.0f; // Smooth 3,000 unit blend back to flat water
	float Lifespan = TestTsunamiDuration;  

	// 3. Fire the event!
	OceanManagerRef->TriggerWaveEvent(TestTsunami, Epicenter, Radius, Falloff, Lifespan);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("TSUNAMI INCOMING!"));
}*/
void ALevelDirector::RefreshActivePool()
{
	if (!PlayerRef || !CurrentBiomeDeck) return;

	// 2. CALCULATE DISTANCE
	FVector CurrentPlayerLocation = PlayerRef->GetActorLocation();
	// Calculate how far they moved since the last check (0.5 seconds ago)
	float DistanceMoved = FVector::Dist(CurrentPlayerLocation, LastPlayerLocation);
	TotalDistanceTraversed += DistanceMoved;
	LastPlayerLocation = CurrentPlayerLocation;

	ActiveSpawnPool.Empty();
	
	for (const FSpawnableAsset& MasterAsset : CurrentBiomeDeck->SpawningDeck)
	{
		if (MasterAsset.SpawnWeightCurve != nullptr && MasterAsset.AssetClass != nullptr)
		{
			float CurrentWeight = MasterAsset.SpawnWeightCurve->GetFloatValue(TotalDistanceTraversed);
			if (CurrentWeight > 0.01f) 
			{
				FActiveAsset NewActiveAsset;
				NewActiveAsset.AssetClass = MasterAsset.AssetClass;
				NewActiveAsset.AssetType = MasterAsset.AssetType;
				NewActiveAsset.CurrentWeight = CurrentWeight;

				ActiveSpawnPool.Add(NewActiveAsset);
			}
		}
	}
	
	
	
		FString PoolContentStr = "Active Spawn Pool: ";
		for (FActiveAsset CurrElement : ActiveSpawnPool)
		{
			PoolContentStr += FString::Printf(TEXT("%s(%f)"), *CurrElement.AssetClass->GetName(), CurrElement.CurrentWeight);
			if (ActiveSpawnPool[ActiveSpawnPool.Num() - 1] == CurrElement)
			{
				PoolContentStr += ", ";
			}
		}
		GEngine->AddOnScreenDebugMessage(0, 3.0f, FColor::Yellow, PoolContentStr);
	
	BuildBordersAhead();
	
}

void ALevelDirector::BuildBordersAhead()
{
	if (!CurrentBiomeDeck || !CurrentBiomeDeck->LaneWidthCurve || ActiveSpawnPool.Num() == 0) return;

    // Keep building until our walls are far enough ahead of the player
    while (LeftWallDistanceBuilt < (TotalDistanceTraversed + SpawnDistanceAhead))
    {
        // 1. ADVANCE THE SPINE (The River's Center)
        float PerlinValue = FMath::PerlinNoise1D(NoiseStep);
        float YawChange = PerlinValue * 3.0f; // Curve severity (tweak this later!)
        
        CurrentTrackDirection = CurrentTrackDirection.RotateAngleAxis(YawChange, FVector::UpVector);
        CurrentTrackDirection.Normalize();
        NoiseStep += 0.05f;
    	
        FVector NewCenterLoc = LastCenterLoc + (CurrentTrackDirection * BorderSegmentLength);
    	
        float CurrentLaneWidth = CurrentBiomeDeck->LaneWidthCurve->GetFloatValue(LeftWallDistanceBuilt);
        FVector TrackRight = FVector::CrossProduct(FVector::UpVector, CurrentTrackDirection).GetSafeNormal();

        // 3. CALCULATE NEW TARGET POINTS
        FVector TargetLeftWall = NewCenterLoc - (TrackRight * (CurrentLaneWidth / 2.0f));
        FVector TargetRightWall = NewCenterLoc + (TrackRight * (CurrentLaneWidth / 2.0f));

        // 4. POINT-TO-POINT MATH (The Look-At Rotation)
        FVector LeftDirection = (TargetLeftWall - LastLeftWallLoc).GetSafeNormal();
        FRotator LeftRotation = FRotationMatrix::MakeFromX(LeftDirection).Rotator();

        FVector RightDirection = (TargetRightWall - LastRightWallLoc).GetSafeNormal();
        FRotator RightRotation = FRotationMatrix::MakeFromX(RightDirection).Rotator();

        // 5. FIND A BORDER ASSET FROM THE ACTIVE POOL
        TSubclassOf<AActor> BorderClassToSpawn = nullptr;
        for (const FActiveAsset& Asset : ActiveSpawnPool)
        {
        	
            if (Asset.AssetType == ESpawnType::LevelBorder)
            {
            	
                GEngine->AddOnScreenDebugMessage(0, 3.0f, FColor::Green, "Found Level Border");
                BorderClassToSpawn = Asset.AssetClass;
            	
                break; // Just grab the first valid border for now
            }
        }
        // 6. SPAWN THE BORDERS
        if (BorderClassToSpawn)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            // Spawn Left Wall at the OLD location, looking AT the target location
            GetWorld()->SpawnActor<AActor>(BorderClassToSpawn, LastLeftWallLoc, LeftRotation, SpawnParams);
            
            // Spawn Right Wall
            GetWorld()->SpawnActor<AActor>(BorderClassToSpawn, LastRightWallLoc, RightRotation, SpawnParams);
        	
            GEngine->AddOnScreenDebugMessage(0, 3.0f, FColor::Red, "Spawning Something!");
        }
    	TrySpawnPattern(LeftWallDistanceBuilt);

    	for (int32 i = ActivePatternQueue.Num() - 1; i >= 0; --i)
    	{
    		if (ActivePatternQueue[i].TargetDistance <= LeftWallDistanceBuilt)
    		{
    			FVector FinalLocation = NewCenterLoc + (TrackRight * ActivePatternQueue[i].RightwardOffset) + FVector(0.0f, 0.0f, 700.0f);
    			FinalLocation.Z = 130.0f;
    			FActorSpawnParameters SpawnParams;
    			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
                
    			GetWorld()->SpawnActor<AActor>(ActivePatternQueue[i].AssetClass, FinalLocation, CurrentTrackDirection.Rotation(), SpawnParams);
    			ActivePatternQueue.RemoveAt(i);
    		}
    	}
        LastLeftWallLoc = TargetLeftWall;
        LastRightWallLoc = TargetRightWall;
        LastCenterLoc = NewCenterLoc;
        
        LeftWallDistanceBuilt += BorderSegmentLength;
        RightWallDistanceBuilt += BorderSegmentLength;
    }
}



void ALevelDirector::TrySpawnPattern(float CurrentBuildDistance)
{
	if (CurrentBuildDistance < DistanceUntilNextPattern) return;
    if (!CurrentBiomeDeck || CurrentBiomeDeck->PatternDeck.Num() == 0) return;

    // 2. BUILD THE WEIGHTED POOL
    float TotalWeight = 0.0f;
    TArray<FSpawnPattern> ValidPatterns;
    TArray<float> ValidWeights; 

    for (const FSpawnPattern& Pattern : CurrentBiomeDeck->PatternDeck)
    {
        if (Pattern.PatternWeightCurve != nullptr)
        {
            // We use the player's distance for the weight curve so difficulty scales with the player, not the cursor!
            float CurrentWeight = Pattern.PatternWeightCurve->GetFloatValue(TotalDistanceTraversed);

            if (CurrentWeight > 0.01f)
            {
                ValidPatterns.Add(Pattern);
                ValidWeights.Add(CurrentWeight);
                TotalWeight += CurrentWeight;
            }
        }
    }

    if (ValidPatterns.Num() == 0 || TotalWeight <= 0.0f) return;

    // 3. ROLL THE WEIGHTED DICE
    float RandomRoll = FMath::FRandRange(0.0f, TotalWeight);
    float CurrentTally = 0.0f;
	FSpawnPattern SelectedPattern = ValidPatterns[0];
    bool bFound = false;

    for (int32 i = 0; i < ValidPatterns.Num(); ++i)
    {
        CurrentTally += ValidWeights[i];
        if (RandomRoll <= CurrentTally)
        {
            SelectedPattern = ValidPatterns[i];
            bFound = true;
            break;
        }
    }

    if (!bFound) return; 
    for (const FPatternItem& Item : SelectedPattern.ItemsInPattern)
    {
        if (Item.AssetClass)
        {
        	FPendingSpawn NewPendingSpawn;
        	NewPendingSpawn.AssetClass = Item.AssetClass;
        	float AbsoluteSpawnDistance = CurrentBuildDistance + Item.ForwardOffset;
        	NewPendingSpawn.TargetDistance = AbsoluteSpawnDistance;
        	float WidthAtSpawn = CurrentBiomeDeck->LaneWidthCurve->GetFloatValue(AbsoluteSpawnDistance);
        	NewPendingSpawn.RightwardOffset = (WidthAtSpawn / 2.0f) * Item.LanePosition;
        	ActivePatternQueue.Add(NewPendingSpawn);
        }
    }

    // 5. UPDATE THE LOCKOUT
    // The next pattern cannot spawn until the construction cursor moves past this pattern's length!
    DistanceUntilNextPattern = CurrentBuildDistance + SelectedPattern.PatternLength + 500.0f;
}

// Called every frame
void ALevelDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

