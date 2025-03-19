#include "PlayerWeaponAmmoWidget.h"

#include "Components/Image.h"

void UPlayerWeaponAmmoWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
}

void UPlayerWeaponAmmoWidget::InitializeAmmoCounter(int MaxAmmo)
{
	
}

void UPlayerWeaponAmmoWidget::UpdateAmmoCounter(int CurrentAmmo)
{
	
}

void UPlayerWeaponAmmoWidget::SetWeaponIcon(UTexture2D* NewIcon)
{
	if (WeaponIcon)
	{
		WeaponIcon->SetBrushFromTexture(NewIcon, true);
	}
}


