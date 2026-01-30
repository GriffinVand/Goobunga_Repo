#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "QuestData.generated.h"

UCLASS()
class GOOBUNGA_API UQuestData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestIcon;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer QuestProgressTags;
};
