// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UserInterface/PlayerMainWidget.h"
#include "Goobunga_PlayerController.generated.h"

/**
 * 
 */
class AWeapon;

UCLASS()
class GOOBUNGA_API AGoobunga_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void OnRep_Pawn() override;
	void CreateMainHUD();
	void CreateWeaponUI(AWeapon* Weapon);
	void BeginPlay() override;
protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPlayerMainWidget> MainHUDClass;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPlayerWeaponAmmoWidget> WeaponUIClass;
	
	
private:
	UPROPERTY(EditAnywhere)
	UPlayerMainWidget* MainHUD = nullptr;
	UPROPERTY(EditAnywhere)
	UPlayerWeaponAmmoWidget* WeaponUI = nullptr;
};
