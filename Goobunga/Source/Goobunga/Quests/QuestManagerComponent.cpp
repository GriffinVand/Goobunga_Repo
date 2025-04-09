// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestManagerComponent.h"

#include "Goobunga/PlayerCallables.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values for this component's properties
UQuestManagerComponent::UQuestManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UQuestManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UQuestManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UQuestManagerComponent::IsQuestComplete(FName Quest)
{
	if (QuestIDs.Contains(Quest))
	{
		int Index = QuestIDs.Find(Quest);
		FQuestStruct QuestStruct = QuestData[Index];
		return QuestStruct.QuestProgress >= QuestStruct.MaxQuestProgress;
	}
	UE_LOG(LogTemp, Error, TEXT("Quest not in map"));
	return false;
}

void UQuestManagerComponent::CompleteQuest(FName QuestID)
{
	if (QuestIDs.Contains(QuestID))
	{
		int Index = QuestIDs.Find(QuestID);
		FQuestStruct QuestStruct = QuestData[Index];
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(GetOwner()))
		{
			FString RewardCommand = FString(TEXT("RECIEVE_REWARD")) +
			TEXT(" ") +
			QuestStruct.QuestRewardID.ToString() +
			TEXT(" ") +
			FString::FromInt(QuestStruct.QuestRewardAmount);
			PlayerCallablesInterface->PerformAction(RewardCommand);
			RemoveQuest(QuestID);
			return;
		}
		UE_LOG(LogTemp, Error, TEXT("Player callables not found"));
	}
	UE_LOG(LogTemp, Error, TEXT("Quest not in map"));
}


void UQuestManagerComponent::RemoveQuest(FName QuestID)
{
	if (QuestIDs.Contains(QuestID))
	{
		int Index = QuestIDs.Find(QuestID);
		QuestIDs.RemoveAt(Index);
		QuestData.RemoveAt(Index);
	}
	UE_LOG(LogTemp, Error, TEXT("Quest not in map"));
}

void UQuestManagerComponent::CreateQuestListWidget()
{
	
}

void UQuestManagerComponent::CreateQuestIndicatorWidget()
{
	
}

void UQuestManagerComponent::AddQuestToQuestList(FName QuestID)
{
	if (QuestIDs.Contains(QuestID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to add quest we already have: %s"), *QuestID.ToString());
		return;
	}
	if (QuestTable)
	{
		FQuestStruct* NewQuest = QuestTable->FindRow<FQuestStruct>(QuestID, "");
		if (NewQuest)
		{
			FQuestStruct NewQuestData = *NewQuest;
			QuestIDs.Add(QuestID);
			QuestData.Add(NewQuestData);
			UE_LOG(LogTemp, Warning, TEXT("Quest added to questlist"));
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No quest table"));
}

void UQuestManagerComponent::UpdateQuestProgress(FName QuestObjID, int ProgressIncrement)
{
	for (FQuestStruct QuestStruct : QuestData)
	{
		if (QuestStruct.QuestObjID == QuestObjID)
		{
			QuestStruct.QuestProgress += ProgressIncrement;
		}
	}
}






