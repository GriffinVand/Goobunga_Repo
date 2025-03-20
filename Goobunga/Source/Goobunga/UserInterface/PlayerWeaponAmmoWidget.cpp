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
	for (UUserWidget* BulletWidgetInstance : BulletWidgets) { BulletWidgetInstance->RemoveFromParent(); }
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
		int CurrRow = 0;
		int MaxRow = (MaxMag + BulletMaxRowValues[WeaponUItype] - 1) / BulletMaxRowValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletMaxRowValue = %d"), MaxRow);
		float BulletHeight = BulletHeightValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletHeight = %f"), BulletHeight);
		float BulletWidth = BulletWidthValues[WeaponUItype];
		UE_LOG(LogTemp, Display, TEXT("BulletWidth = %f"), BulletWidth);
		float LeftPadding = BulletPaddingsLeft[WeaponUItype];
		float UpPadding = BulletPaddingsUp[WeaponUItype];
		for (int i = 0; i < MaxMag; i++)
		{
			UUserWidget* NewBullet = CreateWidget<UUserWidget>(GetWorld(), BulletWidgetClass);
			if (NewBullet)
			{
				if (UPlayerBulletWidget* BulletRef = Cast<UPlayerBulletWidget>(NewBullet))
				{
					BulletRef->SetBulletBoxSizes(FVector2D(BulletWidth, BulletHeight), FVector2D(LeftPadding, UpPadding));
					BulletWidgets.Add((BulletRef));
					BulletContainers[CurrRow]->AddChild(BulletRef);
					UE_LOG(LogTemp, Display, TEXT("New bullet element"));
				}
			}
			if (i > 0 && ((i+1) % MaxRow) == 0) CurrRow++;
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



