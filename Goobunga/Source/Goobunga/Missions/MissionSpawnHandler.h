// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionSpawnHandler.generated.h"

struct FWave;
struct FEncounter;

UCLASS()
class GOOBUNGA_API AMissionSpawnHandler : public AActor
{
	GENERATED_BODY()

public:
	AMissionSpawnHandler();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	void SpawnWave(const FName EncounterName, const FWave Wave);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TObjectPtr<AActor>> SpawnLocations;
};
