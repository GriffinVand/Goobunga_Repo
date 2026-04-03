// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Components/Image.h"
#include "Goobunga/Combat/DamageTypes.h"
#include "PlayerMainWidget.generated.h"

class UInteractWidget;
class UObjectiveWidgetBase;
class UHorizontalBox;
enum class EDamageResult : uint8;
/**
 * 
 */
class USizeBox;

UCLASS()
class GOOBUNGA_API UPlayerMainWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	
	void HandleDamageEffect(EDamageType DamageType);
	void HandleHitEffect(EDamageResult DamageResult);
	
	UPROPERTY(meta = (BindWidget))
	UUserWidget* FaceCamWidget;
	
	UPROPERTY(meta = (BindWidget))
	UObjectiveWidgetBase* MainObjectiveWidget;
	
	UPROPERTY(meta = (BindWidget))
	UInteractWidget* InteractWidget;

	
	UPROPERTY(meta = (BindWidget))
	USizeBox* WeaponUIContainer;
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USizeBox* SmallAbilityUIContainer;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USizeBox* LargeAbilityUIContainer;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USizeBox* HealAbilityUIContainer;
	
	UPROPERTY(meta = (BindWidget))
	UImage* BloodScreen;
	UPROPERTY(meta = (BindWidget))
	UImage* GooScreen;
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* BloodFade;
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* GooFade;
	
	UPROPERTY(meta = (BindWidget))
	UImage* HitImage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* RegHitTexture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* CritHitTexture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* KillHitTexture;
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* HitAnimation;
	
	
	

	
	
};
