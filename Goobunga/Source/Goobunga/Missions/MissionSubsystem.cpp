#include "MissionSubsystem.h"

#include "EventInterface.h"
#include "Goobunga/GoobungaGameInstance.h"

void UMissionSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	
	ObjectiveTag = FGameplayTag::RequestGameplayTag("Objective");
	EventTag = FGameplayTag::RequestGameplayTag("Event");
	EncounterTag = FGameplayTag::RequestGameplayTag("Encounter");
	
	if (UGoobungaGameInstance* GGI = Cast<UGoobungaGameInstance>(InWorld.GetGameInstance()))
	{
		MissionData = GGI->SelectedMission;
		if (!MissionData) { UE_LOG(LogTemp, Error, TEXT("MissionData is null MS::OnWorldBeginPlay")); return;}
		StartMission();
	}
}

void UMissionSubsystem::StartMission()
{
	for (auto Encounter : MissionData->MissionEncounters)
	{
		RegisteredEncounters.FindOrAdd(Encounter.TriggerEvent).Add(Encounter);
	}
	MainObjectiveIndex = 0;
	if (MissionData->MissionObjectives.Num() == 0) { UE_LOG(LogTemp, Error, TEXT("No objectives?")); return; }
	StartObjective(MissionData->MissionObjectives[MainObjectiveIndex]);
}

void UMissionSubsystem::EndMission(bool bSuccess)
{
	UE_LOG(LogTemp, Warning, TEXT("End mission MS::EndMission"));
}

void UMissionSubsystem::StartEncounter(const FEncounter& NewEncounter)
{
	for (auto& Encounter : ActiveEncounters) { if (Encounter.EncounterName == NewEncounter.EncounterName) return; }
	int32 EnemiesToKill = 0;
	for (auto& Wave : NewEncounter.Waves)
	{
		for (auto& EnemySpawn : Wave.WaveSpawns)
		{
			EnemiesToKill++;
		}
	}
	FEncounter SetEncounter = NewEncounter;
	SetEncounter.EnemiesToKill = EnemiesToKill;
	
	ActiveEncounters.Add(SetEncounter);
	for (int i = 0; i < SetEncounter.Waves.Num(); i++)
	{
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, [this, SetEncounter, i]()
		{
			if (SpawnHandler) { SpawnHandler->SpawnWave(SetEncounter.EncounterName, SetEncounter.Waves[i]); }
		}, SetEncounter.Waves[i].WaveDelay, false);
	}
}

void UMissionSubsystem::HandleEncounterComplete(const FEncounter& Encounter)
{
	FGameplayTag CompleteEvent = Encounter.CompleteEvent;
	ActiveEncounters.RemoveAll([&](const FEncounter& E){
	return E.EncounterName == Encounter.EncounterName; });
	ReceiveEvent(CompleteEvent);
}

void UMissionSubsystem::StartObjective(const FMissionObjective& Obj)
{
	OnObjectiveUpdate.Broadcast(Obj, false);
}

void UMissionSubsystem::HandleObjectiveComplete(const FMissionObjective& Obj, bool bSuccess)
{
	if (!bSuccess) { EndMission(false); return; }
	ReceiveEvent(Obj.CompleteEvent);
	MainObjectiveIndex++;
	if (MainObjectiveIndex >= MissionData->MissionObjectives.Num()) { EndMission(true); return; }
	StartObjective(MissionData->MissionObjectives[MainObjectiveIndex]);
}

void UMissionSubsystem::RegisterForEvent(AActor* Actor, FGameplayTag Tag)
{
	if (Actor)
	{
		RegisteredEvents.FindOrAdd(Tag).Add(Actor);
	}
}

void UMissionSubsystem::ReceiveEvent(const FGameplayTag Tag)
{
	if (Tag.MatchesTag(EventTag))
	{
		if (auto RegisteredActors = RegisteredEvents.Find(Tag))
		{
			for (auto Actor : *RegisteredActors)
			{
				if (IEventInterface* EI = Cast<IEventInterface>(Actor)) { EI->ReceiveEvent(Tag); }
			}
		}
		return;
	}
	if (Tag.MatchesTag(EncounterTag))
	{
		if (auto RegisteredEncounter = RegisteredEncounters.Find(Tag))
		{
			for (auto Encounter : *RegisteredEncounter) { StartEncounter(Encounter); }
		}
		return;
	}
	if (Tag.MatchesTag(ObjectiveTag))
	{
		if (Tag.MatchesTag(MainObjective.RequiredTag))
		{
			MainObjective.CurrProgress = FMath::Clamp(MainObjective.CurrProgress + 1, 0, MainObjective.ReqProgress);
			OnObjectiveUpdate.Broadcast(MainObjective, true);
			if (MainObjective.CurrProgress == MainObjective.ReqProgress) { HandleObjectiveComplete(MainObjective, true); }
		}
		else if (Tag.MatchesTag(MainObjective.FailTag))
		{
			MainObjective.CurrProgress = -1;
			HandleObjectiveComplete(MainObjective, false);
		}
	}
}

void UMissionSubsystem::HandleDeath(FName DeathName)
{
	if (FEncounter* E = ActiveEncounters.FindByPredicate([&](const FEncounter& Encounter)
	{
		return Encounter.EncounterName == DeathName; 
	}))
	{
		E->EnemiesKilled += 1;
		if (E->EnemiesKilled >= E->EnemiesToKill) { HandleEncounterComplete(*E); }
	}
}
