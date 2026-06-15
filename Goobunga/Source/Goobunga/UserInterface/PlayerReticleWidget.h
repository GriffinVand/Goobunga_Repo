// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PlayerReticleWidget.generated.h"

class UCommonLazyImage;

UCLASS()
class GOOBUNGA_API UPlayerReticleWidget : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCommonLazyImage* MainReticle;
	
	
};
