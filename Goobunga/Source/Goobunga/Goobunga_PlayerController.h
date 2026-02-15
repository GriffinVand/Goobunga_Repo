// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UserInterface/MasterWidget.h"
#include "UserInterface/PlayerMainWidget.h"
#include "Goobunga_PlayerController.generated.h"

/**
 * 
 */
class AWeapon;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMasterWidgetCreated);

UCLASS()
class GOOBUNGA_API AGoobunga_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintAssignable)
	FOnMasterWidgetCreated OnMasterWidgetCreated;
	
	void InitializeMasterWidget();
	void InitializePlayerHUD();
	void CreateWeaponUI(AWeapon* Weapon);
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* Pawn) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerMainWidget* MainHUD = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerWeaponAmmoWidget* WeaponUI = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMasterWidget* MasterWidget = nullptr;
protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UMasterWidget> MasterWidgetClass;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPlayerMainWidget> MainHUDClass;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPlayerWeaponAmmoWidget> WeaponUIClass;
	
	
private:
};
