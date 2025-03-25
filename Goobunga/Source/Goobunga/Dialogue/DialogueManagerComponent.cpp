// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueManagerComponent.h"
#include "DialogueWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values for this component's properties
UDialogueManagerComponent::UDialogueManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UDialogueManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDialogueManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                              FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDialogueManagerComponent::StartDialogue(FName Character)
{
	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		FInputModeUIOnly Input;
		PlayerController->SetInputMode(Input);
		PlayerController->bShowMouseCursor = true;
	}
	if (CharacterCurrentDialogues.Contains(Character))
	{
		CreateDialogueWidget();
		UE_LOG(LogTemp, Display, TEXT("Create Widget"));
		DialogueWidget->DialogueManager = this;
		DialogueWidget->AddToViewport();
		UpdateDialogue(CharacterCurrentDialogues[Character]);
		UE_LOG(LogTemp, Display, TEXT("Dialogue found"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Character-Dialogue pair not found"));
	}
}

void UDialogueManagerComponent::CreateDialogueWidget()
{
	DialogueWidget = CreateWidget<UDialogueWidget>(GetWorld(), DialogueWidgetClass);
	if (!DialogueWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("Widget could not be created"));
		UKismetSystemLibrary::QuitEditor();
	}
}

void UDialogueManagerComponent::UpdateDialogue(FName DialogueID)
{
	CurrentDialogueReplies.Empty();
	
	if (DialogueWidget)
	{
		CurrentDialogueLine = LoadDialogue(DialogueID);
		for (FName ReplyID: CurrentDialogueLine.ReplyIDs)
		{
			CurrentDialogueReplies.Add(LoadDialogueReply(ReplyID));
		}
		UE_LOG(LogTemp, Display, TEXT("Dialogue display"));
		DisplayDialogue();
		TArray<FText> ReplyTexts = {};
		for (FDialogueReply Reply: CurrentDialogueReplies)
		{
			UE_LOG(LogTemp, Display, TEXT("Dialogue reply display"));
			ReplyTexts.Add(Reply.Text);		
		}
		DisplayDialogueReply(ReplyTexts);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue Widget DNE"));
		UKismetSystemLibrary::QuitEditor();
	}
}

FDialogueLine UDialogueManagerComponent::LoadDialogue(FName DialogueID)
{
	FDialogueLine* NewLine = DialogueData->FindRow<FDialogueLine>(DialogueID, "");
	UE_LOG(LogTemp, Display, TEXT("Looking for DialogueID: %s"), *DialogueID.ToString());
	if (NewLine)
	{
		UE_LOG(LogTemp, Display, TEXT("Found dialogue line"));
		return *NewLine;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue ID not recognized"));
		UKismetSystemLibrary::QuitEditor();
		return FDialogueLine();
	}
}

FDialogueReply UDialogueManagerComponent::LoadDialogueReply(FName ReplyID)
{
	FDialogueReply* NewReply = ReplyData->FindRow<FDialogueReply>(ReplyID, "");
	if (NewReply)
	{
		UE_LOG(LogTemp, Display, TEXT("Dialogue reply displayed"));
		return *NewReply;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Reply ID not recognized"));
		UKismetSystemLibrary::QuitEditor();
		return FDialogueReply();
	}
}

void UDialogueManagerComponent::DisplayDialogue()
{
	if (DialogueWidget)
	{
		UE_LOG(LogTemp, Display, TEXT("Display dialogue"));
		DialogueWidget->DialogueText->SetText(CurrentDialogueLine.Text);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue widget DNE"));
		UKismetSystemLibrary::QuitEditor();
	}
}

void UDialogueManagerComponent::DisplayDialogueReply(const TArray<FText>& ReplyTexts)
{
	if (DialogueWidget)
	{
		UE_LOG(LogTemp, Display, TEXT("Display replies"));
		DialogueWidget->DisplayReplies(ReplyTexts);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue widget DNE"));
		UKismetSystemLibrary::QuitEditor();
	}
}

void UDialogueManagerComponent::OnReplySelected(int ReplyIndex)
{
	if (CurrentDialogueReplies.Num() > ReplyIndex)
	{
		UE_LOG(LogTemp, Display, TEXT("Reply index found"));
		FDialogueReply SelectedReply = CurrentDialogueReplies[ReplyIndex];
		//Handle reply actions
		if (SelectedReply.Actions.Num() > 0)
		{
			if (SelectedReply.Actions[0] == "Quit")
			{
				UE_LOG(LogTemp, Display, TEXT("Quit requested"));
				EndDialogue();
			}
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Continue dialogue"));
			UpdateDialogue(SelectedReply.NextID);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Reply index out of bounds"));
	}
}

void UDialogueManagerComponent::EndDialogue()
{
	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		FInputModeGameOnly Game;
		PlayerController->SetInputMode(Game);
		PlayerController->bShowMouseCursor = false;
	}
	DialogueWidget->RemoveFromParent();
}

void UDialogueManagerComponent::AddCharacterDialogue(FName Character, FName DialogueID)
{
	CharacterCurrentDialogues.Add(Character);
	CharacterCurrentDialogues[Character] = DialogueID;
}



