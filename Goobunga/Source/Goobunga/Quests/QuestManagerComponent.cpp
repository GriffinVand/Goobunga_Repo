
#include "QuestManagerComponent.h"

#include "QuestManagerSubsystem.h"
#include "Goobunga/PlayerCallables.h"
#include "Kismet/KismetSystemLibrary.h"

UQuestManagerComponent::UQuestManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UQuestManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (UQuestManagerSubsystem* QMS = GetWorld()->GetGameInstance()->GetSubsystem<UQuestManagerSubsystem>())
	{
		QMS->OnObjectiveEvent.AddUniqueDynamic(this, &UQuestManagerComponent::UpdateQuestProgress);
	}
}

void UQuestManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
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

void UQuestManagerComponent::UpdateQuestProgress(FGameplayTagContainer QuestObjTags, int ProgressIncrement)
{
	for (FQuestStruct& QuestStruct : QuestData)
	{
		if (QuestObjTags.HasAllExact(QuestStruct.QuestProgressTags))
		{
			QuestStruct.QuestProgress += ProgressIncrement;
		}
	}
}






