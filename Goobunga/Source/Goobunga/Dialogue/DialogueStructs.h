#pragma once

#include "CoreMinimal.h"
#include "FMODEvent.h"
#include "DialogueStructs.generated.h"

UENUM(BlueprintType)
enum class EDialogueActionType : uint8
{
	None UMETA(DisplayName = "None"),
	OPEN_SHOP UMETA(DisplayName = "OPEN_SHOP"),
	TRUE_DIALOGUE UMETA(DisplayName = "TRUE_DIALOGUE"),
	ADD_QUEST UMETA(DisplayName = "ADD_QUEST"),
	COMPLETE_QUEST UMETA(DisplayName = "COMPLETE_QUEST"),
	REMOVE_QUEST UMETA(DisplayName = "REMOVE_QUEST"),
	GIVE_REWARD UMETA(DisplayName = "GIVE_REWARD"),
	SET_DIALOGUE UMETA(DisplayName = "SET_DIALOGUE"),
	END_DIALOGUE UMETA(DisplayName = "END_DIALOGUE"),
};

USTRUCT(BlueprintType)
struct FDialogueActionStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDialogueActionType ActionType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActionTarget;
};

USTRUCT(BlueprintType)
struct FDialogueLine: public FTableRowBase
{
	GENERATED_BODY()

	//Actual text to be shown
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	//Audio to pair with this dialogue line
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFMODEvent* Audio;
	
	//ID of next dialogue->if there aren't any replies
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextID;
	
	//Expression for the NPC to have during this line
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Expression;

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
	TArray<FDialogueActionStruct> Actions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestRequirement;
	
};

