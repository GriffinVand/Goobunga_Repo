#pragma once

#include "CoreMinimal.h"
#include "QuestStruct.generated.h"

USTRUCT(BlueprintType)
struct FQuestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int QuestProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxQuestProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestObjID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestObjIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestRewardID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int QuestRewardAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestRewardIcon;

	bool operator==(const FQuestStruct &other) const
	{
		return ( QuestID == other.QuestID);
	}
};