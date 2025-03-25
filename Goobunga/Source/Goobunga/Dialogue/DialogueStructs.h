#pragma once

#include "CoreMinimal.h"
#include "DialogueStructs.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLine: public FTableRowBase
{
	GENERATED_BODY()

	//Actual text to be shown
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	//Audio to pair with this dialogue line
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Audio;
	
	//ID of next dialogue->if there aren't any replies
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextID;

	//IDs of all possible replies
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ReplyIDs;
	
};

USTRUCT(BlueprintType)
struct FDialogueReply: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Actions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestRequirement;
	
};

