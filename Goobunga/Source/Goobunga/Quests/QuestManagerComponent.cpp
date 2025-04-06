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
	Owner = GetOwner();
	if (!Owner) { UE_LOG(LogTemp, Error, TEXT("Owner is null")); UKismetSystemLibrary::QuitEditor(); }
	
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
	if (QuestsMap.Contains(Quest))
	{
		return QuestsMap[Quest].QuestProgress == QuestsMap[Quest].MaxQuestProgress;
	}
	UE_LOG(LogTemp, Error, TEXT("Quest not in map"));
	return true;
}

void UQuestManagerComponent::AcquireQuest(FQuestStruct NewQuest)
{
	if (QuestsMap.Contains(NewQuest.QuestID))
	{
		UE_LOG(LogTemp, Error, TEXT("Quest already in map"));
		return;
	}
	QuestsMap.Add(NewQuest.QuestID, NewQuest);
	Quests.Add(NewQuest);
	UE_LOG(LogTemp, Display, TEXT("Quest added"));
}

void UQuestManagerComponent::CompleteQuest(FName QuestID)
{
	if (QuestsMap.Contains(QuestID))
	{
		FQuestStruct QuestStruct = QuestsMap[QuestID];
		if (IPlayerCallables* PlayerCallablesInterface = Cast<IPlayerCallables>(Owner))
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
	if (QuestsMap.Contains(QuestID))
	{
		FQuestStruct Quest = QuestsMap[QuestID];
		QuestsMap.Remove(QuestID);
		Quests.Remove(Quest);
	}
	UE_LOG(LogTemp, Error, TEXT("Quest not in map"));
}



