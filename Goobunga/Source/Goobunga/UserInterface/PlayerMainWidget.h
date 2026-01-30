// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Components/Overlay.h"
#include "PlayerWeaponAmmoWidget.h"
#include "Blueprint/UserWidget.h"
#include "PlayerMainWidget.generated.h"

/**
 * 
 */
class USizeBox;

UCLASS()
class GOOBUNGA_API UPlayerMainWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(meta = (BindWidget))
	UUserWidget* FaceCamWidget;

	UPROPERTY(meta = (BindWidget))
	UUserWidget* PepperWidget;

	UPROPERTY(meta = (BindWidget))
	USizeBox* WeaponUIContainer;

	
	
};
