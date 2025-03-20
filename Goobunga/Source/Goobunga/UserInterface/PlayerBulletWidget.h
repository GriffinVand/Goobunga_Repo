// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerBulletWidget.generated.h"

/**
 * 
 */
class UImage;
class USizeBox;

UCLASS()
class GOOBUNGA_API UPlayerBulletWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	USizeBox* BulletBox;
	UPROPERTY(meta = (BindWidget))
	USizeBox* BufferBox;
	UPROPERTY(meta = (BindWidget))
	UImage* BulletImage;

	void SetBulletBoxSizes(FVector2D NewSize, FVector2D LeftUpPadding);
};
