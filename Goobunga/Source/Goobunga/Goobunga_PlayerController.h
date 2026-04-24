// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UserInterface/MasterWidget.h"
#include "UserInterface/PlayerMainWidget.h"
#include "Goobunga_PlayerController.generated.h"

struct FMissionObjective;
class UAbilityWidgetBase;
class UAbilityBase;
class UPlayerWeaponAmmoWidget;
enum class EDamageType : uint8;
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
	
	void UpdateDodgeUI(float Percent);
	void CreateInteractUI(const FText& InteractText, bool bHide);
	void InitializeMasterWidget();
	void InitializePlayerHUD();
	void CreateWeaponUI(AWeapon* Weapon);
	void CreateAbilityUI(UAbilityBase* Ability);
	void CreateDashUI();
	UFUNCTION()
	void CreateObjectiveUI(const FMissionObjective& Objective, const bool bUpdate);
	
	UCommonActivatableWidget* PushWidgetToMaster(TSubclassOf<UCommonActivatableWidget> Class, ELayerType Layer);
	void RemoveWidgetFromMaster(UCommonActivatableWidget* Widget);
	
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* Pawn) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerMainWidget* MainHUD = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerWeaponAmmoWidget* WeaponUI = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityWidgetBase* SmallAbilityUI = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityWidgetBase* LargeAbilityUI = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityWidgetBase* HealAbilityUI = nullptr;
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
