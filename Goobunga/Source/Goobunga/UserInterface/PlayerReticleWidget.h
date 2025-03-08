// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PlayerReticleWidget.generated.h"

/**
 * 
 */
class UImage;
UCLASS()
class GOOBUNGA_API UPlayerReticleWidget : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* MainReticle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* HitMarker;

	UFUNCTION(BlueprintCallable)
	void ShowHitMarker();
	UFUNCTION(BlueprintCallable)
	void HideHitMarker();

	virtual void NativeOnInitialized() override;
	
	
};
