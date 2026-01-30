#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestManagerSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveEvent, FGameplayTagContainer, EventTags, int32, EventAmount);

UCLASS()
class GOOBUNGA_API UQuestManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	
	FOnObjectiveEvent OnObjectiveEvent;
	
	UFUNCTION()
	void NotifyObjectiveEvent(FGameplayTagContainer EventTags, int32 EventAmount);
	
	
};
