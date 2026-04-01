#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionData.h"
#include "MissionSpawnHandler.h"
#include "Subsystems/WorldSubsystem.h"
#include "MissionSubsystem.generated.h"

class UMissionObjective;
struct FEncounter;
class UMissionData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveUpdate, const FMissionObjective&, Objective, const bool, bUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventBase, FGameplayTag, Tag);

UCLASS()
class GOOBUNGA_API UMissionSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	FOnObjectiveUpdate OnObjectiveUpdate;
	
	FGameplayTag ObjectiveTag;
	FGameplayTag EncounterTag;
	FGameplayTag EventTag;
	
	FOnEventBase OnEventBase;
	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	
	void StartMission();
	void EndMission(bool bSuccess);
	
	void StartEncounter(const FEncounter& NewEncounter);
	void HandleEncounterComplete(const FEncounter& Encounter);
	
	void StartObjective(const FMissionObjective& Obj);
	void HandleObjectiveComplete(const FMissionObjective& Obj, bool bSuccess);
	
	void RegisterSpawner(AMissionSpawnHandler* Spawner) { SpawnHandler = Spawner;}
	void HandleDeath(FName DeathName);
	
	void ReceiveEvent(const FGameplayTag Tag);
	UFUNCTION(BlueprintCallable)
	void BroadCastEvent(FGameplayTag Tag) { OnEventBase.Broadcast(Tag); }
	UFUNCTION(BlueprintCallable)
	void RegisterForEvent(AActor* Actor, FGameplayTag Tag);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AMissionSpawnHandler* SpawnHandler;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMissionData* MissionData;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMissionObjective MainObjective;
	int32 MainObjectiveIndex = 0;
	
	TMap<FGameplayTag, TArray<TObjectPtr<AActor>>> RegisteredEvents;
	TMap<FGameplayTag, TArray<FEncounter>> RegisteredEncounters;
	TArray<FEncounter> ActiveEncounters;
	
};
