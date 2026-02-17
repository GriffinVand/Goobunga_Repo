#include "PlayerWeaponAmmoWidget.h"
#include "PlayerBulletWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Goobunga/Combat/WeaponUITypes.h"
#include "Goobunga/Weapons/Weapon.h"
#include "Kismet/KismetMaterialLibrary.h"

void UPlayerWeaponAmmoWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BulletContainers = {BulletContainer1, BulletContainer2, BulletContainer3, BulletContainer4, BulletContainer5};
	WeaponIconMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), WeaponIconMaterialParent);
	if (WeaponIconMaterial && WeaponIconImage)
	{
		//UE_LOG(LogTemp, Display, TEXT("set icon brush"));
		WeaponIconImage->SetBrushFromMaterial(WeaponIconMaterial);
	}
	//UE_LOG(LogTemp, Display, TEXT("Native Construct finished"));
	InitializeAmmoCounter();
	UpdateAmmoCounter();
	UpdateWeaponInfo();
}

void UPlayerWeaponAmmoWidget::BindToWeapon(AWeapon* Weapon)
{
	//UE_LOG(LogTemp, Display, TEXT("Native Construct finished"));
	CurrentWeapon = Weapon;
	SetWeaponInfo();
	Weapon->OnAmmoChanged.AddDynamic(this, &UPlayerWeaponAmmoWidget::OnAmmoChanged);
}

void UPlayerWeaponAmmoWidget::OnAmmoChanged()
{
	SetWeaponInfo();
	UpdateWeaponInfo();
}

void UPlayerWeaponAmmoWidget::SetWeaponInfo()
{
	this->MaxMag = CurrentWeapon->MaxMag;
	this->CurrMag = CurrentWeapon->CurrentMag;
	this->MaxAmmo = CurrentWeapon->MaxAmmo;
	this->CurrAmmo = CurrentWeapon->CurrentAmmo;
	this->WeaponUIType = CurrentWeapon->WeaponUIType;
	this->WeaponIconTexture = CurrentWeapon->GetIcon("Filled");
	//UE_LOG(LogTemp, Display, TEXT("Set weapon info %d"), CurrAmmo);
}


void UPlayerWeaponAmmoWidget::UpdateWeaponInfo()
{
	//UE_LOG(LogTemp, Display, TEXT("Update weapon info"));
	UpdateAmmoCounter();
	UpdateWeaponIcon();
	UpdateCurrentAmmoText();
}


void UPlayerWeaponAmmoWidget::InitializeAmmoCounter()
{
	CreateBulletWidget();
}

void UPlayerWeaponAmmoWidget::UpdateAmmoCounter()
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
}

void UPlayerWeaponAmmoWidget::CreateBulletWidget()
{
	if (BulletWidgetClass)
	{
		BulletWidgets.Empty();
		for (auto BulletWidget : BulletWidgets) { BulletWidget->RemoveFromParent(); }
		//UE_LOG(LogTemp, Display, TEXT("Container num %d"), BulletContainers.Num());
		int CurrRow = 0;
		int MaxRow = (MaxMag + BulletMaxRowValues[WeaponUIType] - 1) / BulletMaxRowValues[WeaponUIType];
		//UE_LOG(LogTemp, Display, TEXT("BulletMaxRowValue = %d"), MaxRow);
		float BulletHeight = BulletHeightValues[WeaponUIType];
		//UE_LOG(LogTemp, Display, TEXT("BulletHeight = %f"), BulletHeight);
		float BulletWidth = BulletWidthValues[WeaponUIType];
		//UE_LOG(LogTemp, Display, TEXT("BulletWidth = %f"), BulletWidth);
		float LeftPadding = BulletPaddingsLeft[WeaponUIType];
		float UpPadding = BulletPaddingsUp[WeaponUIType];
		TArray<UUserWidget*> CurrentContainer = {};
		for (int i = 0; i < MaxMag; i++)
		{
			UUserWidget* NewBullet = CreateWidget<UUserWidget>(GetWorld(), BulletWidgetClass);
			if (NewBullet)
			{
				if (UPlayerBulletWidget* BulletRef = Cast<UPlayerBulletWidget>(NewBullet))
				{
					//UE_LOG(LogTemp, Display, TEXT("NewBullet Width %f Height %f"), BulletWidth, BulletHeight);
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

void UPlayerWeaponAmmoWidget::UpdateWeaponIcon()
{
	if (WeaponIconMaterial)
	{
		WeaponIconMaterial->SetTextureParameterValue("Diffuse", WeaponIconTexture);
	}
}

void UPlayerWeaponAmmoWidget::UpdateCurrentAmmoText()
{
	if (WeaponAmmoTextBlock)
	{
		WeaponAmmoTextBlock->SetText(FText::FromString(FString::FromInt(CurrAmmo)));
	}
}




