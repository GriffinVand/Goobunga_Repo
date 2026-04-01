#include "MissionSpawnHandler.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "MissionSubsystem.h"

AMissionSpawnHandler::AMissionSpawnHandler()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMissionSpawnHandler::BeginPlay()
{
	Super::BeginPlay();
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->RegisterSpawner(this);
	} else { UE_LOG(LogTemp, Error, TEXT("No MS! MissionSpawnHandler::BeginPlay()")); }
	
}

void AMissionSpawnHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissionSpawnHandler::SpawnWave(const FName EncounterName, const FWave Wave)
{
	int32 ExpectedSpawns = 0;
	int32 ValidSpawns = 0;
	for (auto& Spawn : Wave.WaveSpawns)
	{
		ExpectedSpawns++;
		TObjectPtr<AActor>* SpawnLocation = SpawnLocations.Find(Spawn.SpawnParams.SpawnTag);
		if (SpawnLocation)
		{
			if (AActor* SpawnActor = SpawnLocation->Get())
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
				AActor* NewActor = GetWorld()->SpawnActor<ABaseEnemy>(Spawn.EnemyClass, SpawnActor->GetActorLocation(), SpawnActor->GetActorRotation(), SpawnParams);
				if (NewActor) { ValidSpawns++; }
			}
		}
	}
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		for (int i = 0; i < ExpectedSpawns - ValidSpawns; i++) { MS->HandleDeath(EncounterName); }
	}
}

