#include "MissionSubsystem.h"

#include "EventInterface.h"
#include "Goobunga/GoobungaGameInstance.h"
#include "Goobunga/Audio/MusicSubsystem.h"
#include "Goobunga/PersistentData/PersistentDataSubsystem.h"

void UMissionSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	
	ObjectiveTag = FGameplayTag::RequestGameplayTag("Objective");
	EventTag = FGameplayTag::RequestGameplayTag("Event");
	EncounterTag = FGameplayTag::RequestGameplayTag("Encounter");
	CompleteTag = FGameplayTag::RequestGameplayTag("Complete");
}

void UMissionSubsystem::OnPlayerReady()
{
	if (UGoobungaGameInstance* GGI = Cast<UGoobungaGameInstance>(GetWorld()->GetGameInstance()))
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
	for (int i = 0; i < SetEncounter.TimedEvents.Num(); i++)
	{
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, [this, SetEncounter, i]()
		{
			ReceiveEvent(SetEncounter.TimedEvents[i].EventTag);
		}, SetEncounter.TimedEvents[i].EventDelay, false);
	}
	if (NewEncounter.EncounterMusic)
	{
		if (UMusicSubsystem* MS = GetWorld()->GetGameInstance()->GetSubsystem<UMusicSubsystem>())
		{
			MS->PlayMusic(NewEncounter.EncounterMusic, 1);
		}
	}
}

void UMissionSubsystem::HandleEncounterComplete(const FEncounter& Encounter)
{
	TArray<FGameplayTag> CompleteEvents = Encounter.CompleteEvents;
	ActiveEncounters.RemoveAll([&](const FEncounter& E){
	return E.EncounterName == Encounter.EncounterName; });
	for (auto& Event : CompleteEvents) { ReceiveEvent(Event); }
}

void UMissionSubsystem::StartObjective(const FMissionObjective& Obj)
{
	UE_LOG(LogTemp, Error, TEXT("MS::StartObj"));
	MainObjective = Obj;
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
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Tag.ToString());
		RegisteredEvents.FindOrAdd(Tag).Add(Actor);
		UE_LOG(LogTemp, Warning, TEXT("Regester for event MS::RegisterForEvent"));
	}
}

void UMissionSubsystem::ReceiveEvent(const FGameplayTag Tag)
{
	UE_LOG(LogTemp, Warning, TEXT("Received event MS::ReceiveEvent"));
	
	if (Tag.MatchesTag(EventTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("EventTag event MS::ReceiveEvent"));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Tag.ToString());
		if (auto RegisteredActors = RegisteredEvents.Find(Tag))
		{
			UE_LOG(LogTemp, Warning, TEXT("Found registered actor MS::ReceiveEvent"));
			for (auto Actor : *RegisteredActors)
			{
				if (!IsValid(Actor)) { continue; }
				if (IEventInterface* EI = Cast<IEventInterface>(Actor)) { EI->ReceiveEvent(Tag); }
				else if (Actor->Implements<UEventInterface>()) { IEventInterface::Execute_ReceiveEvent(Actor, Tag); }
			}
		}
		return;
	}
	if (Tag.MatchesTag(EncounterTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("EncounterTag event MS::ReceiveEvent"));
		if (auto RegisteredEncounter = RegisteredEncounters.Find(Tag))
		{
			for (auto Encounter : *RegisteredEncounter) { StartEncounter(Encounter); }
		}
		return;
	}
	if (Tag.MatchesTag(ObjectiveTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("ObjectiveTag event MS::ReceiveEvent"));
		
		if (Tag == MainObjective.RequiredTag)
		{
			UE_LOG(LogTemp, Error, TEXT("Objective req tag MS::ReceiveEvent"));
			MainObjective.CurrProgress = FMath::Clamp(MainObjective.CurrProgress + 1, 0, MainObjective.ReqProgress);
			OnObjectiveUpdate.Broadcast(MainObjective, true);
			if (MainObjective.CurrProgress == MainObjective.ReqProgress) { HandleObjectiveComplete(MainObjective, true); }
		}
		else if (Tag == MainObjective.FailTag)
		{
			UE_LOG(LogTemp, Error, TEXT("Objective fail tag MS::ReceiveEvent"));
			MainObjective.CurrProgress = -1;
			HandleObjectiveComplete(MainObjective, false);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Tag.ToString());
			UE_LOG(LogTemp, Warning, TEXT("%s"), *MainObjective.RequiredTag.ToString());
		}
	}
	if (Tag.MatchesTag(CompleteTag))
	{
		if (UPersistentDataSubsystem* PDS = GetWorld()->GetGameInstance()->GetSubsystem<UPersistentDataSubsystem>())
		{
			PDS->SaveGame(PDS->ActiveSaveFileName);
		}
	}
}

void UMissionSubsystem::HandleDeath(FName DeathName)
{
	//UE_LOG(LogTemp, Error, TEXT("Handle Death %s"), *DeathName.ToString());
	if (FEncounter* E = ActiveEncounters.FindByPredicate([&](const FEncounter& Encounter)
	{
		return Encounter.EncounterName == DeathName; 
	}))
	{
		//UE_LOG(LogTemp, Error, TEXT("Valid Death for encounter"));
		E->EnemiesKilled += 1;
		if (E->EnemiesKilled >= E->EnemiesToKill) { HandleEncounterComplete(*E); }
	}
}
