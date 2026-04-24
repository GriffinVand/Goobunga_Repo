// Fill out your copyright notice in the Description page of Project Settings.


#include "Goobunga_PlayerController.h"

#include "CommonTextBlock.h"
#include "Goobunga_Player.h"
#include "UserInterface/PlayerWeaponAmmoWidget.h"
#include "Goobunga/Abilities/AbilityBase.h"
#include "Components/SizeBox.h"
#include "Missions/MissionSubsystem.h"
#include "UserInterface/Ability/AbilityWidgetBase.h"
#include "UserInterface/HUD/DodgeWidgetBase.h"
#include "UserInterface/HUD/InteractWidget.h"
#include "UserInterface/Objective/ObjectiveWidgetBase.h"

void AGoobunga_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->OnObjectiveUpdate.AddUniqueDynamic(this, &AGoobunga_PlayerController::CreateObjectiveUI);
		MS->OnPlayerReady();
	} else { UE_LOG(LogTemp, Error, TEXT("NO MissionSubsystem PC::BeginPlay")); }
	UE_LOG(LogTemp, Error, TEXT("PC::BeginPlay"));
}

void AGoobunga_PlayerController::InitializeMasterWidget()
{
	if (!MasterWidgetClass) { UE_LOG(LogTemp, Error, TEXT("Null MasterWidgetClass")); return; }
	MasterWidget = CreateWidget<UMasterWidget>(this, MasterWidgetClass);
	if (!MasterWidget) { UE_LOG(LogTemp, Error, TEXT("Failed to create MasterWidget")); return; }
	MasterWidget->AddToViewport();
	OnMasterWidgetCreated.Broadcast();
}

void AGoobunga_PlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	UE_LOG(LogTemp, Error, TEXT("Possessed a pawn"));
	InitializeMasterWidget();
	if (AGoobunga_Player* Goobunga_Player = Cast<AGoobunga_Player>(InPawn)) { InitializePlayerHUD(); }
}

void AGoobunga_PlayerController::InitializePlayerHUD()
{
	if (!MainHUDClass) { UE_LOG(LogTemp, Error, TEXT("Null MainHUDClass")); return; }
	if (!MasterWidget) { UE_LOG(LogTemp, Error, TEXT("Null Masterwidget")); return; }
	MainHUD = Cast<UPlayerMainWidget>(MasterWidget->PushWidget(MainHUDClass, ELayerType::Game));
	SetInputMode(FInputModeGameOnly());
	SetShowMouseCursor(false);
	MainHUD->ActivateWidget();
	if (!MainHUD) { UE_LOG(LogTemp, Error, TEXT("Failed to create MainHUD")); return;  }
}

void AGoobunga_PlayerController::CreateInteractUI(const FText& InteractText, bool bHide)
{
	if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateInteractUI No MainHUD")); return; }
	if (!MainHUD->InteractWidget) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateInteractUI No Interact widget")); return; }
	if (bHide) { MainHUD->InteractWidget->SetVisibility(ESlateVisibility::Hidden); return; }
	MainHUD->InteractWidget->InteractText->SetText(InteractText);
	MainHUD->InteractWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
	
}

void AGoobunga_PlayerController::CreateDashUI()
{
	if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateDashUI No MainHUD")); return; }
	MainHUD->DodgeWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
}

void AGoobunga_PlayerController::UpdateDodgeUI(float Percent)
{
	if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::UpdateDodgeUI No MainHUD")); return; }
	MainHUD->DodgeWidget->UpdateUI(Percent);
}

void AGoobunga_PlayerController::CreateWeaponUI(AWeapon* Weapon)
{
	if (WeaponUI) { WeaponUI->RemoveFromParent(); WeaponUI = nullptr; }
	WeaponUI = CreateWidget<UPlayerWeaponAmmoWidget>(this, WeaponUIClass);
	if (!WeaponUI) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateWeaponUI Tried to create WeaponUI but failed")); return; }
	if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateWeaponUI No MainHUD")); return; }
	if (MainHUD->WeaponUIContainer)
	{
		WeaponUI->BindToWeapon(Weapon);
		MainHUD->WeaponUIContainer->AddChild(WeaponUI);
		UE_LOG(LogTemp, Error, TEXT("Added weapon ui to hud"));
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("No weapon ui container CreateWeaponUI"));
}

void AGoobunga_PlayerController::CreateAbilityUI(UAbilityBase* Ability)
{
	if (!Ability) { return; }
	if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::CreateWeaponUI No MainHUD")); return; }
	switch (Ability->AbilityType)
	{
	case EAbilityType::Small:
		if (SmallAbilityUI) { SmallAbilityUI->RemoveFromParent(); }
		SmallAbilityUI = CreateWidget<UAbilityWidgetBase>(this, Ability->AbilityWidgetClass);
		if (!SmallAbilityUI) { UE_LOG(LogTemp, Error, TEXT("Failed to create ability")); return; }
		SmallAbilityUI->BindToAbility(Ability);
		MainHUD->SmallAbilityUIContainer->AddChild(SmallAbilityUI);
		
		break;
	case EAbilityType::Large:
		if (LargeAbilityUI) { LargeAbilityUI->RemoveFromParent(); }
		LargeAbilityUI = CreateWidget<UAbilityWidgetBase>(this, Ability->AbilityWidgetClass);
		if (!LargeAbilityUI) { UE_LOG(LogTemp, Error, TEXT("Failed to create ability")); return; }
		LargeAbilityUI->BindToAbility(Ability);
		MainHUD->LargeAbilityUIContainer->AddChild(LargeAbilityUI);
		
		break;
	case EAbilityType::Heal:
		if (HealAbilityUI) { HealAbilityUI->RemoveFromParent(); }
		HealAbilityUI = CreateWidget<UAbilityWidgetBase>(this, Ability->AbilityWidgetClass);
		if (!HealAbilityUI) { UE_LOG(LogTemp, Error, TEXT("Failed to create ability")); return; }
		HealAbilityUI->BindToAbility(Ability);
		MainHUD->HealAbilityUIContainer->AddChild(HealAbilityUI);
		
		break;
	}
}

void AGoobunga_PlayerController::CreateObjectiveUI(const FMissionObjective& Objective, const bool bUpdate)
{
	if (!MainHUD) { UE_LOG(LogTemp, Error, TEXT("No MainHUD PC::CreateObjectiveUI")); return; }
	if (!MainHUD->MainObjectiveWidget) { UE_LOG(LogTemp, Error, TEXT("No MainObjectiveWidget PC::CreateObjectiveUI")); return; }
	
	if (bUpdate) { MainHUD->MainObjectiveWidget->UpdateUI(Objective); }
	else { MainHUD->MainObjectiveWidget->InitializeUI(Objective); }
}

void AGoobunga_PlayerController::RemoveWidgetFromMaster(UCommonActivatableWidget* Widget)
{
	if (Widget && MasterWidget)
	{
		
	}
}
