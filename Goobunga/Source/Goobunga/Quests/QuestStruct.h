#pragma once

#include "CoreMinimal.h"
#include "QuestStruct.generated.h"

USTRUCT(BlueprintType)
struct FQuestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText QuestName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText QuestDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int QuestProgress;
};
