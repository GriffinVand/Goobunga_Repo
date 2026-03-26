#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestStruct.generated.h"

USTRUCT(BlueprintType)
struct FQuestStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int QuestProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxQuestProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestObjIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> QuestRewardID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> QuestRewardAmount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestRewardIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer QuestProgressTags;

	bool operator==(const FQuestStruct &other) const
	{
		return ( QuestID == other.QuestID);
	}
};