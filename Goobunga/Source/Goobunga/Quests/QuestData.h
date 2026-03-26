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
	int MaxQuestProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer QuestProgressTags;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> QuestRewardID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> QuestRewardAmount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestRewardIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> QuestObjIcon;
};
