#include "QuestManagerSubsystem.h"

#include "Goobunga/Goobunga_Player.h"
#include "Kismet/GameplayStatics.h"

void UQuestManagerSubsystem::NotifyObjectiveEvent(FGameplayTagContainer EventTags, int32 EventAmount)
{
	UE_LOG(LogTemp, Error, TEXT("NotifyObjEvent called QMS::NotifyObjectiveEvent"));
	OnObjectiveEvent.Broadcast(EventTags, EventAmount);
}
