// Fill out your copyright notice in the Description page of Project Settings.


#include "Goobunga_PlayerController.h"
#include "Goobunga_Player.h"
#include "Components/SizeBox.h"

void AGoobunga_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController())
	{
		CreateMainHUD();
	}
}

void AGoobunga_PlayerController::OnRep_Pawn()
{
	Super::OnRep_Pawn();

	if (IsLocalController())
	{
		CreateMainHUD();
	}
}

void AGoobunga_PlayerController::CreateMainHUD()
{
	if (!MainHUD && MainHUDClass)
	{
		MainHUD = CreateWidget<UPlayerMainWidget>(this, MainHUDClass);
		if (!MainHUD) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::OnRep_Pawn Tried to create MainHUD but failed")); }
		else
		{
			MainHUD->AddToViewport();
		}
	}
}

void AGoobunga_PlayerController::CreateWeaponUI(AWeapon* Weapon)
{
	if (WeaponUI) { WeaponUI->RemoveFromParent(); WeaponUI = nullptr; }
	WeaponUI = CreateWidget<UPlayerWeaponAmmoWidget>(this, WeaponUIClass);
	if (!WeaponUI) { UE_LOG(LogTemp, Warning, TEXT("AGoobunga_PlayerController::UpdateWeaponUI Tried to create WeaponUI but failed")); }
	else if (MainHUD)
	{
		if (MainHUD->WeaponUIContainer)
		{
			WeaponUI->BindToWeapon(Weapon);
			MainHUD->WeaponUIContainer->AddChild(WeaponUI);
			UE_LOG(LogTemp, Error, TEXT("Added weapon ui to hud"));
			return;
		}
		UE_LOG(LogTemp, Error, TEXT("No weapon ui container CreateWeaponUI"));
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("No mainhud CreateWeaponUI"));
}