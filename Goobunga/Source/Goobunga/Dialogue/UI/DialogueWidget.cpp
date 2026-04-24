// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidget.h"
#include "Goobunga/Dialogue/DialogueManagerComponent.h"
#include "CommonButtonBase.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetSystemLibrary.h"


void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ReplyWidgets.Add(ReplyWidget1);
	ReplyWidgets.Add(ReplyWidget2);
	ReplyWidgets.Add(ReplyWidget3);
	ReplyWidgets.Add(ReplyWidget4);
}

void UDialogueWidget::NativeOnActivated()
{
	Super::NativeOnActivated();
	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->FlushPressedKeys();
	}
}

void UDialogueWidget::BindReplyWidgets()
{
	if (!DialogueManager) { return; }
	UE_LOG(LogTemp, Display, TEXT("Binding Reply Widgets"));
	for (int i = 0; i < ReplyWidgets.Num(); i++)
	{
		UE_LOG(LogTemp, Display, TEXT("Bound widget"));
		ReplyWidgets[i]->ReplyIndex = i;
		ReplyWidgets[i]->OnReplySelected.RemoveAll(DialogueManager);
		ReplyWidgets[i]->OnReplySelected.AddDynamic(DialogueManager, &UDialogueManagerComponent::OnReplySelected);
	}
}


void UDialogueWidget::DisplayDialogue(const FText& Text)
{
	if (DialogueText)
	{
		UE_LOG(LogTemp, Display, TEXT("Set text kein problem"));
		DialogueText->SetText(FText::FromString(DialogueStyle + Text.ToString() + DialogueStyleTail));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Ein PROBLEM"));
	}
}

void UDialogueWidget::DisplayReplies(TArray<FText> Texts, TArray<bool> Selectable)
{
	if (Selectable.Num() != Texts.Num())
	{
		UE_LOG(LogTemp, Display, TEXT("dialogue texts and selectable number are not equal"));
	}
	for (auto Widget : ReplyWidgets)
	{
		Widget->SetVisibility(ESlateVisibility::Collapsed);
	}
	if (Texts.Num() > ReplyWidgets.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("More reply texts than slots")); UKismetSystemLibrary::QuitEditor();
	}
	for (int i = 0; i < Texts.Num(); i++)
	{
		if (ReplyWidgets[i])
		{
			ReplyWidgets[i]->SetVisibility(ESlateVisibility::Visible);
			ReplyWidgets[i]->ReplyText->SetText(FText::FromString(DialogueStyle + Texts[i].ToString() + DialogueStyleTail));
			ReplyWidgets[i]->ReplyButton->SetIsEnabled(Selectable[i]);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Reply widget is NULL"));
		}
	}
}





