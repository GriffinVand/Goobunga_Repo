#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionData.generated.h"

class UFMODEvent;
class ABaseEnemy;

USTRUCT(BlueprintType)
struct FEnemySpawnParams
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName SpawnTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bRandom = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition=bRandom))
	float AcceptableRadius = 500.f;
};

USTRUCT(BlueprintType)
struct FEnemySpawn
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FEnemySpawnParams SpawnParams;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ABaseEnemy> EnemyClass;
};

USTRUCT(BlueprintType)
struct FWave
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FEnemySpawn> WaveSpawns;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float WaveDelay = 0.0f;

};

USTRUCT(BlueprintType)
struct FEncounter
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODEvent* EncounterMusic = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName EncounterName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag TriggerEvent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FWave> Waves;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EnemiesToKill = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EnemiesKilled = 0;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag CompleteEvent;
	
};

USTRUCT(BlueprintType)
struct FMissionObjective
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsProgressive = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag RequiredTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag FailTag;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ObjectiveDescription = FText::FromString("None");
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* ObjectiveIcon = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 CurrProgress = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ReqProgress = 1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag CompleteEvent;
	
};

UCLASS(BlueprintType)
class GOOBUNGA_API UMissionData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName MissionLevel;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FEncounter> MissionEncounters;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FMissionObjective> MissionObjectives;
};
