// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBulletWidget.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/SizeBoxSlot.h"

void UPlayerBulletWidget::NativeConstruct()
{
}


void UPlayerBulletWidget::SetBulletBoxSizes(FVector2D NewSize, FVector2D LeftUpPadding)
{
	Size = NewSize;
	Padding = LeftUpPadding;
	if (BulletBox)
	{
		BulletBox->SetHeightOverride(Size.Y);
		BulletBox->SetWidthOverride(Size.X);
		if (BufferBox)
		{
			BufferBox->SetHeightOverride(Padding.Y);
			BufferBox->SetWidthOverride(Padding.X);
		}
		else { UE_LOG(LogTemp, Display, TEXT("Couldnt access size box")); }
	}
	else { UE_LOG(LogTemp, Display, TEXT("Couldnt size box height")); }
}
