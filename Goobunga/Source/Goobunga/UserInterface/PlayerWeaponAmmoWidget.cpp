#include "PlayerWeaponAmmoWidget.h"
#include "PlayerBulletWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Goobunga/Combat/WeaponUITypes.h"
#include "Kismet/KismetMaterialLibrary.h"

void UPlayerWeaponAmmoWidget::NativeConstruct()
{
	Super::NativeConstruct();
	WeaponIconMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), WeaponIconMaterialParent);
	if (WeaponIconMaterial)
	{
		WeaponIcon->SetBrushFromMaterial(WeaponIconMaterial);
	}
}

void UPlayerWeaponAmmoWidget::InitializeAmmoCounter(int MaxMag, int CurrMag, int MaxAmmo, int CurrAmmo, EWeaponUItype WeaponUItype)
{
	for (auto BulletWidget : BulletWidgets) { BulletWidget->RemoveFromParent(); }
	BulletWidgets.Empty();
	CreateBulletWidget(MaxMag, WeaponUItype);
	UpdateAmmoCounter(MaxMag, CurrMag, MaxAmmo, CurrAmmo);
}

void UPlayerWeaponAmmoWidget::UpdateAmmoCounter(int MaxMag, int CurrMag, int MaxAmmo, int CurrAmmo)
{
	if (BulletWidgets.Num() == MaxMag)
	{
		for (auto BulletWidgetInstance : BulletWidgets)
		{
			BulletWidgetInstance->SetColorAndOpacity(ActiveColor);
		}
		for (int i = 0; i < MaxMag - CurrMag; i++)
		{
			BulletWidgets[i]->SetColorAndOpacity(InactiveColor);
		}
	}
	UpdateCurrentAmmoText(CurrAmmo);
}

void UPlayerWeaponAmmoWidget::CreateBulletWidget(int MaxMag, EWeaponUItype WeaponUItype)
{
	if (BulletWidgetClass)
	{
		UE_LOG(LogTemp, Display, TEXT("Container num %d"), BulletContainers.Num());
		int CurrRow = 0;
		int MaxRow = (MaxMag + BulletMaxRowValues[WeaponUItype] - 1) / BulletMaxRowValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletMaxRowValue = %d"), MaxRow);
		float BulletHeight = BulletHeightValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletHeight = %f"), BulletHeight);
		float BulletWidth = BulletWidthValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletWidth = %f"), BulletWidth);
		float LeftPadding = BulletPaddingsLeft[WeaponUItype];
		float UpPadding = BulletPaddingsUp[WeaponUItype];
		TArray<UUserWidget*> CurrentContainer = {};
		for (int i = 0; i < MaxMag; i++)
		{
			UUserWidget* NewBullet = CreateWidget<UUserWidget>(GetWorld(), BulletWidgetClass);
			if (NewBullet)
			{
				if (UPlayerBulletWidget* BulletRef = Cast<UPlayerBulletWidget>(NewBullet))
				{
					BulletRef->SetBulletBoxSizes(FVector2D(BulletWidth, BulletHeight), FVector2D(LeftPadding, UpPadding));
					if ((CurrRow + 1) % 2 == 0 )
					{
						CurrentContainer.Insert(BulletRef, 0);
						BulletContainers[CurrRow]->InsertChildAt(0, BulletRef);
					}
					else
					{
						CurrentContainer.Add(BulletRef);
						BulletContainers[CurrRow]->AddChild(BulletRef);
					}
				}
			}
			if (i > 0 && ((i+1) % MaxRow) == 0)
			{
				for (auto Item : CurrentContainer) { BulletWidgets.Add(Item); }
				CurrRow++;
				CurrentContainer.Empty();
			}
		}
	}
}

void UPlayerWeaponAmmoWidget::SetWeaponIcon(UTexture2D* NewIcon)
{
	if (WeaponIconMaterial)
	{
		WeaponIconMaterial->SetTextureParameterValue("Diffuse", NewIcon);
	}
}

void UPlayerWeaponAmmoWidget::UpdateCurrentAmmoText(int CurrAmmo)
{
	if (CurrentAmmoText)
	{
		CurrentAmmoText->SetText(FText::FromString(FString::FromInt(CurrAmmo)));
	}
}

FLinearColor UPlayerWeaponAmmoWidget::GetColorFromInt(int32 ColorIndex)
{
	switch (ColorIndex)
	{
	case 0:
		return FLinearColor::Red;
	case 1:
		return FLinearColor::Green;
	case 2:
		return FLinearColor::Blue;
	case 3:
		return FLinearColor::Yellow;
	case 4:
		return FLinearColor::White;
	default:
		return FLinearColor::Black; // Fallback color
	}
}

void UPlayerWeaponAmmoWidget::SetColors()
{
	for (auto Container : BulletContainers)
	{
		for (int i = 0; i < Container->GetChildrenCount(); i++)
		{
			if (UPlayerBulletWidget* CurrBull = Cast<UPlayerBulletWidget>(Container->GetChildAt(i)))
			{
				FLinearColor NewColor = GetColorFromInt(i);
				CurrBull->BulletImage->SetColorAndOpacity(NewColor);
			}
		}
	}
}




