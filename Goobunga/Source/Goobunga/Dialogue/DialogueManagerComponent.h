// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueStructs.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "DialogueManagerComponent.generated.h"

class UDialogueWidget;
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UDialogueManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDialogueManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	//Data table of dialogue
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* DialogueData;

	//Data table of replies
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* ReplyData;

	//The widget we want to display this in
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDialogueWidget> DialogueWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDialogueWidget* DialogueWidget;

	FDialogueLine CurrentDialogueLine;
	TArray<FDialogueReply> CurrentDialogueReplies;

	TMap<FName, FName> CharacterCurrentDialogues;

	UFUNCTION(BlueprintCallable)
	void StartDialogue(FName Character);
	
	void UpdateDialogue(FName DialogueID);
	FDialogueLine LoadDialogue(FName DialogueID);
	void CreateDialogueWidget();
	void DisplayDialogue();
	FDialogueReply LoadDialogueReply(FName ReplyID);
	void DisplayDialogueReply(TArray<FText> ReplyTexts);
	UFUNCTION(BlueprintCallable)
	void OnReplySelected(int ReplyIndex);
	void EndDialogue();
	UFUNCTION(BlueprintCallable)
	void AddCharacterDialogue(FName Character, FName DialogueID);
};
