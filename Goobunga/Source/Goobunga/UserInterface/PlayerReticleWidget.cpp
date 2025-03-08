// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerReticleWidget.h"

#include "Components/Image.h"

void UPlayerReticleWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (MainReticle)
	{
		MainReticle->SetVisibility(ESlateVisibility::Visible);
	}
	if (HitMarker)
	{
		HitMarker->SetVisibility(ESlateVisibility::Hidden);
	}
}


void UPlayerReticleWidget::ShowHitMarker()
{
	if (HitMarker)
	{
		HitMarker->SetVisibility(ESlateVisibility::Visible);
	}
}

void UPlayerReticleWidget::HideHitMarker()
{
	if (HitMarker)
	{
		HitMarker->SetVisibility(ESlateVisibility::Hidden);
	}
}
