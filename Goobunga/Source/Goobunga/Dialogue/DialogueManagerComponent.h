// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueStructs.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "Goobunga/Quests/QuestManagerComponent.h"
#include "DialogueManagerComponent.generated.h"

class UFMODAudioComponent;
class UDialogueWidget;
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GOOBUNGA_API UDialogueManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDialogueManagerComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinAttenuation = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAttenuation = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UFMODAudioComponent* DialogueAudioComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* DialogueData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* ReplyData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* CurrDialogueActor = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDialogueWidget> DialogueWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDialogueWidget* DialogueWidget;

	FDialogueLine CurrentDialogueLine;
	TArray<FDialogueReply> CurrentDialogueReplies;
	TArray<bool> CurrentDialogueRepliesAvailable;
	
	UFUNCTION(BlueprintCallable)
	void StartDialogue(AActor* DialogueActor);
	UFUNCTION(BlueprintCallable)
	void OnReplySelected(int ReplyIndex);

private:
	void UpdateDialogue(FName DialogueID);
	FDialogueLine LoadDialogue(FName DialogueID);
	void DisplayDialogue();
	
	UFUNCTION()
	void ContinueDialogue();
	void ProcessActions();
	FDialogueReply LoadDialogueReply(FName ReplyID);
	void DisplayDialogueReply(const TArray<FText>& ReplyTexts);
	void EndDialogue();
	bool HandleReplyAction(const FDialogueActionStruct& Action);
	
	TArray<FDialogueActionStruct> ReplyActions;
	FName ReplyNextID;
};
