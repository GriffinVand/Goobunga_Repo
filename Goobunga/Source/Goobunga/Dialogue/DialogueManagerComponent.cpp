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
	if (!DialogueData->FindRow<FDialogueLine>(IDialogueInterface::Execute_GetCurrentDialogue(DialogueActor), "")) { return; }
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
			IDialogueInterface::Execute_DialogueStarted(CurrDialogueActor, GetOwner());
			
			PC->FlushPressedKeys();
			PC->SetViewTargetWithBlend(CurrDialogueActor, ViewBlendTime);
			PC->SetInputMode(FInputModeUIOnly());
			PC->SetShowMouseCursor(true);
			
			FTimerHandle Timer;
			GetWorld()->GetTimerManager().SetTimer(Timer, [this, PC]()
			{
				OnStartBlendFinished(PC);
			}, ViewBlendTime+0.1, false);
			return;
		}
	}
	EndDialogue();
}

void UDialogueManagerComponent::OnStartBlendFinished(AGoobunga_PlayerController* PC)
{
	UE_LOG(LogTemp, Display, TEXT("Create Widget"));
	if (DialogueWidget) { UE_LOG(LogTemp, Error, TEXT("Major issue: Dialogue widget persisting")); }
	DialogueWidget = Cast<UDialogueWidget>(PC->MasterWidget->PushWidget(DialogueWidgetClass, ELayerType::Menu));
	if (DialogueWidget && PC && CurrDialogueActor)
	{
		DialogueWidget->DialogueManager = this;
		DialogueWidget->BindReplyWidgets();
		UpdateDialogue(IDialogueInterface::Execute_GetCurrentDialogue(CurrDialogueActor));
			
		if (IPlayerCallables* PCI = Cast<IPlayerCallables>(GetOwner()))
		{
			PCI->GetFacialAnimation()->PlayAnimation("Talking", true, 0);
		}
		return;
	}
	EndDialogue();
}

void UDialogueManagerComponent::UpdateDialogue(FName DialogueID)
{
	if (DialogueID.IsNone()) { EndDialogue(); return; }
	ReplyNextID = NAME_None;
	ReplyActions.Empty();
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
	//UE_LOG(LogTemp, Display, TEXT("Looking for DialogueID: %s"), *DialogueID.ToString());
	if (NewLine)
	{
		return *NewLine;
	}
	UE_LOG(LogTemp, Error, TEXT("Dialogue ID not recognized"));
	if (FDialogueLine* FallbackLine = DialogueData->FindRow<FDialogueLine>(FallbackDialogueID, ""))
	{
		return *FallbackLine;
	}
	return FDialogueLine();
}

FDialogueReply UDialogueManagerComponent::LoadDialogueReply(FName ReplyID)
{
	FDialogueReply* NewReply = ReplyData->FindRow<FDialogueReply>(ReplyID, "");
	if (NewReply)
	{
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
		FDialogueReply SelectedReply = CurrentDialogueReplies[ReplyIndex];
		ReplyActions = SelectedReply.Actions;
		ReplyNextID = SelectedReply.NextID.IsNone() ? CurrentDialogueLine.NextID : SelectedReply.NextID;
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
	UE_LOG(LogTemp, Display, TEXT("Processing Actions: %d"), ReplyActions.Num());
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
	if (IPlayerCallables* PCI = Cast<IPlayerCallables>(GetOwner()))
	{
		PCI->GetFacialAnimation()->PlayAnimation("Talking", true, 0);
	}
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
	if (DialogueWidget)
	{
		DialogueWidget->DeactivateWidget(); 
		DialogueWidget = nullptr;
	}
	
	if (AGoobunga_Player* Goobunga_Player = Cast<AGoobunga_Player>(GetOwner()))
	{
		Goobunga_Player->FacialAnimationComponent->PlayDefaultAnimation();
		if (AGoobunga_PlayerController* PC = Cast<AGoobunga_PlayerController>(Goobunga_Player->GetController()))
		{
			PC->SetShowMouseCursor(false);
			PC->SetViewTargetWithBlend(GetOwner(), ViewBlendTime);
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, PC]()
			{
				PC->SetInputMode(FInputModeGameOnly());
				if (!CurrDialogueActor) { return; }
				if (CurrDialogueActor->Implements<UDialogueInterface>()) { IDialogueInterface::Execute_DialogueEnded(CurrDialogueActor); }
				CurrDialogueActor = nullptr;
			}, ViewBlendTime + 0.1, false);
		}
	}
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
				ShopWidget = ShopUI;
				PCI->GetFacialAnimation()->PlayAnimation("Shop", true, 0);
				ShopUI->OnShopCloseInput.Clear();
				ShopUI->OnShopCloseInput.AddUniqueDynamic(this, &UDialogueManagerComponent::OnShopEnded);
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

void UDialogueManagerComponent::OnShopEnded()
{
	UE_LOG(LogTemp, Warning, TEXT("Shop Ended DMC::OnShopEnded"));
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
	{
		if (ShopWidget) ShopWidget->DeactivateWidget();
		ShopWidget = nullptr;
		ContinueDialogue();
	});
}





