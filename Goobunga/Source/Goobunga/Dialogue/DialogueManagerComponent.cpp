#include "DialogueManagerComponent.h"

#include "DialogueInterface.h"
#include "FMODAudioComponent.h"
#include "./UI/DialogueWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Goobunga/FacialAnimationComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/Goobunga_PlayerController.h"
#include "Goobunga/PlayerCallables.h"
#include "Kismet/GameplayStatics.h"
#include "./UI/BaseShopWidget.h"
#include "Components/RichTextBlock.h"
#include "Kismet/KismetSystemLibrary.h"

UDialogueManagerComponent::UDialogueManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDialogueManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDialogueManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDialogueManagerComponent::StartDialogue(AActor* DialogueActor)
{
	if (!DialogueActor) { return; }
	bool bImplementInterface = DialogueActor->Implements<UDialogueInterface>();
	if (!bImplementInterface) { UE_LOG(LogTemp, Error, TEXT("Other actor does not have dialogue interface")); return; }
	CurrDialogueActor = DialogueActor;
	
	if (DialogueAudioComp) { DialogueAudioComp->DestroyComponent(false); }
	DialogueAudioComp = NewObject<UFMODAudioComponent>(CurrDialogueActor);
	if (DialogueAudioComp)
	{
		DialogueAudioComp->RegisterComponent();
		DialogueAudioComp->AttachToComponent(CurrDialogueActor->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		DialogueAudioComp->AttenuationDetails.MinimumDistance = MinAttenuation;
		DialogueAudioComp->AttenuationDetails.MaximumDistance = MaxAttenuation;
	}
	
	if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(Cast<APawn>(GetOwner())->GetController()))
	{
		
		if (IDialogueInterface::Execute_GetDialogueView(CurrDialogueActor))
		{
			PC->SetViewTargetWithBlend(CurrDialogueActor, ViewBlendTime);
		}
		UE_LOG(LogTemp, Display, TEXT("Create Widget"));
		DialogueWidget = Cast<UDialogueWidget>(PC->MasterWidget->PushWidget(DialogueWidgetClass, ELayerType::Menu));
		if (DialogueWidget)
		{
			DialogueWidget->ActivateWidget();
			UE_LOG(LogTemp, Display, TEXT("Widget exists"));
			DialogueWidget->DialogueManager = this;
			DialogueWidget->BindReplyWidgets();
			UpdateDialogue(IDialogueInterface::Execute_GetCurrentDialogue(DialogueActor));
			UE_LOG(LogTemp, Display, TEXT("Dialogue found"));
			
			if (AGoobunga_Player* Goobunga_Player = Cast<AGoobunga_Player>(GetOwner()))
			{
				UE_LOG(LogTemp, Error, TEXT("STARTING DIALOGUE ANIMATION"));
				Goobunga_Player->FacialAnimationComponent->PlayAnimation("Talking", true);
			}
			
			return;
		}
	}
	EndDialogue();
}

void UDialogueManagerComponent::UpdateDialogue(FName DialogueID)
{
	CurrentDialogueReplies.Empty();
	CurrentDialogueRepliesAvailable.Empty();
	if (DialogueID.IsNone()) { EndDialogue(); return; }
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
			if (!Reply.QuestRequirement.IsNone())
			{
				if (AGoobunga_Player* OwnerPlayer = Cast<AGoobunga_Player>(GetOwner()))
				{
					bool Available = OwnerPlayer->QuestManagerComponent->IsQuestComplete(Reply.QuestRequirement);
					CurrentDialogueRepliesAvailable.Add(Available);
				}
				else { CurrentDialogueRepliesAvailable.Add(true); }
			}
			else { CurrentDialogueRepliesAvailable.Add(true); }
		}
		UE_LOG(LogTemp, Display, TEXT("Dialogue texts num: %d, dialogue available num: %d"),
			ReplyTexts.Num(), CurrentDialogueRepliesAvailable.Num());
		DisplayDialogueReply(ReplyTexts);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue Widget DNE"));
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
		return FDialogueReply();
	}
}

void UDialogueManagerComponent::DisplayDialogue()
{
	if (DialogueWidget)
	{
		UE_LOG(LogTemp, Display, TEXT("Display dialogue"));
		DialogueWidget->DisplayDialogue(CurrentDialogueLine.Text);
		if (DialogueAudioComp && CurrentDialogueLine.Audio) { DialogueAudioComp->Stop(); DialogueAudioComp->SetEvent(CurrentDialogueLine.Audio); DialogueAudioComp->Play(); }
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
		DialogueWidget->DisplayReplies(ReplyTexts, CurrentDialogueRepliesAvailable);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue widget DNE"));
		UKismetSystemLibrary::QuitEditor();
	}
}

void UDialogueManagerComponent::OnReplySelected(int ReplyIndex)
{
	UE_LOG(LogTemp, Display, TEXT("ReplySelected"));
	if (CurrentDialogueReplies.Num() > ReplyIndex)
	{
		UE_LOG(LogTemp, Display, TEXT("Reply index found"));
		FDialogueReply SelectedReply = CurrentDialogueReplies[ReplyIndex];
		
		ReplyActions = SelectedReply.Actions;
		ReplyNextID = SelectedReply.NextID == NAME_None || SelectedReply.NextID.IsNone() ? CurrentDialogueLine.NextID : SelectedReply.NextID;
		if (ReplyNextID.IsNone()) { UE_LOG(LogTemp, Error, TEXT("No reply found")); EndDialogue(); return; }
		UE_LOG(LogTemp, Error, TEXT("Next ID %s"), *ReplyNextID.ToString());
		ProcessActions();
	}
	else
	{
		EndDialogue();
		UE_LOG(LogTemp, Error, TEXT("Reply index out of bounds"));
	}
}

void UDialogueManagerComponent::ProcessActions()
{
	while (ReplyActions.Num() > 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Handle reply action"));
		const FDialogueActionStruct Action = ReplyActions[0];
		ReplyActions.RemoveAt(0);

		if (!HandleReplyAction(Action))
		{
			return;
		}
	}
	UpdateDialogue(ReplyNextID);
}

void UDialogueManagerComponent::ContinueDialogue()
{
	ProcessActions();
}

void UDialogueManagerComponent::EndDialogue()
{
	UE_LOG(LogTemp, Error, TEXT("End Dialogue started"));
	if (DialogueAudioComp)
	{
		DialogueAudioComp->Stop();
		DialogueAudioComp->DestroyComponent(false);
	}
	if (DialogueWidget) { DialogueWidget->SetVisibility(ESlateVisibility::Hidden); }
	
	if (AGoobunga_Player* Goobunga_Player = Cast<AGoobunga_Player>(GetOwner()))
	{
		Goobunga_Player->FacialAnimationComponent->PlayAnimation("Idle", true);
		if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(Goobunga_Player->GetController()))
		{
			PC->SetViewTargetWithBlend(GetOwner(), ViewBlendTime);
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, PC]()
			{
				if (!DialogueWidget) { return; }
				DialogueWidget->DeactivateWidget(); 
				DialogueWidget = nullptr;
			}, ViewBlendTime + 0.1, false);
		}
	}
	
	if (!CurrDialogueActor) { return; }
	if (CurrDialogueActor->Implements<UDialogueInterface>()) { IDialogueInterface::Execute_DialogueEnded(CurrDialogueActor); }
	CurrDialogueActor = nullptr;
	UE_LOG(LogTemp, Error, TEXT("End Dialogue finished"));
}

bool UDialogueManagerComponent::HandleReplyAction(const FDialogueActionStruct& Action)
{
	IPlayerCallables* PCI = Cast<IPlayerCallables>(GetOwner());
	if (!PCI) { EndDialogue(); return true; }
	AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PC) { EndDialogue(); return true; }
	IDialogueInterface* DI = Cast<IDialogueInterface>(CurrDialogueActor);
	if (!DI) { EndDialogue(); return true; }
	
	switch (Action.ActionType)
	{
	case EDialogueActionType::OPEN_SHOP:
	{
		TSubclassOf<UBaseShopWidget> ShopWidgetClass = DI->GetShopWidgetClass();
		if (ShopWidgetClass)
		{
			UBaseShopWidget* ShopUI = Cast<UBaseShopWidget>(PC->MasterWidget->PushWidget(ShopWidgetClass, ELayerType::Menu));
			if (ShopUI)
			{
				ShopUI->OnShopCloseInput.AddUniqueDynamic(this, &UDialogueManagerComponent::ContinueDialogue);
				ShopUI->PopulateShop(DI->GetShopItems(), GetOwner());
				return false;
			}
			
		}
		return true;
	}
	case EDialogueActionType::END_DIALOGUE:
		EndDialogue();
		return false;
	case EDialogueActionType::GIVE_REWARD:
		return true;
	case EDialogueActionType::ADD_QUEST:
		return true;
	case EDialogueActionType::REMOVE_QUEST:
		return true;
	case EDialogueActionType::COMPLETE_QUEST:
		return true;
	case EDialogueActionType::SET_DIALOGUE:
		return true;
	default:
		return true;
	}
}





