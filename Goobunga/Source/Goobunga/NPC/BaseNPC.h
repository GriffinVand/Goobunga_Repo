// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCData.h"
#include "GameFramework/Character.h"
#include "Goobunga/Dialogue/DialogueInterface.h"
#include "Goobunga/Interaction/InteractInterface.h"
#include "BaseNPC.generated.h"

class UFacialAnimationComponent;

UCLASS()
class GOOBUNGA_API ABaseNPC : public ACharacter, public IInteractInterface, public IDialogueInterface
{
	GENERATED_BODY()

public:
	ABaseNPC();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* DialogueViewCam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFacialAnimationComponent* FacialAnimationComponent;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UBaseShopWidget> ShopWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UItemData>> ShopItems;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultDialogueID = NAME_None;
	

public:
	virtual void Tick(float DeltaTime) override;
	
#pragma region DIALOGUE
	
	ENonCombatantState CurrentState = ENonCombatantState::Idle;	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AActor* TargetActor = nullptr;
	
	virtual TArray<TObjectPtr<UItemData>> GetShopItems() override { return ShopItems; }
	virtual TSubclassOf<UBaseShopWidget> GetShopWidgetClass() override { return ShopWidgetClass; }
	virtual FName GetCurrentDialogue_Implementation() override { return DefaultDialogueID; }
	virtual void SetCurrentDialogue_Implementation(FName CurrentDialogue) override { DefaultDialogueID = CurrentDialogue; }
	virtual void DialogueEnded_Implementation() override;
	virtual void DialogueStarted_Implementation(AActor* SpeakerActor) override;
#pragma endregion

#pragma region INTERACT
	virtual bool CanInteract_Implementation() override;
	virtual void Interact_Implementation(AActor* Interactor) override;
	virtual FText GetInteractText_Implementation(AActor* Interactor) override { return FText::FromString("Press 'E' to speak"); }
#pragma endregion
};
