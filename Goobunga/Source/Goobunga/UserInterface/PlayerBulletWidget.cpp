// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBulletWidget.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/SizeBoxSlot.h"

void UPlayerBulletWidget::SetBulletBoxSizes(FVector2D NewSize, FVector2D LeftUpPadding)
{
	if (BulletBox)
	{
		BulletBox->SetHeightOverride(NewSize.Y);
		BulletBox->SetWidthOverride(NewSize.X);
		if (USizeBoxSlot* SizeBoxSlot = Cast<USizeBoxSlot>(BulletImage->Slot))
		{
			SizeBoxSlot->SetPadding(FMargin(LeftUpPadding.X, LeftUpPadding.Y, 0, 0));
		}
		UE_LOG(LogTemp, Display, TEXT("Set size box height"));
	}
	else { UE_LOG(LogTemp, Display, TEXT("Couldnt size box height")); }
	
}
