// Fill out your copyright notice in the Description page of Project Settings.


#include "Goobunga_PlayerController.h"
#include "Goobunga_Player.h"
#include "Components/SizeBox.h"

void AGoobunga_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	InitializeMasterWidget();
}

void AGoobunga_PlayerController::InitializeMasterWidget()
{
	if (!MasterWidgetClass) { UE_LOG(LogTemp, Error, TEXT("Null MasterWidgetClass")); return; }
	MasterWidget = CreateWidget<UMasterWidget>(this, MasterWidgetClass);
	if (!MasterWidget) { UE_LOG(LogTemp, Error, TEXT("Failed to create MasterWidget")); return; }
	MasterWidget->AddToViewport();
	OnMasterWidgetCreated.Broadcast();
	if (AGoobunga_Player* Goobunga_Player = Cast<AGoobunga_Player>(GetPawn())) { InitializePlayerHUD(); }
}

void AGoobunga_PlayerController::InitializePlayerHUD()
{
	if (!MainHUDClass) { UE_LOG(LogTemp, Error, TEXT("Null MainHUDClass")); return; }
	MainHUD = Cast<UPlayerMainWidget>(MasterWidget->PushWidget(MainHUDClass, ELayerType::Game));
	if (!MainHUD) { UE_LOG(LogTemp, Error, TEXT("Failed to create MainHUD")); return;  }
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