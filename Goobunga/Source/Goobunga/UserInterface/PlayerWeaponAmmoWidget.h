#pragma once

#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Goobunga/Combat/WeaponUITypes.h"
#include "PlayerWeaponAmmoWidget.generated.h"

class UTextBlock;
class UImage;
class UVerticalBox;

UCLASS()
class GOOBUNGA_API UPlayerWeaponAmmoWidget: public UUserWidget
{
GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UImage* WeaponIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> BulletWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextBlock* CurrentAmmoText;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UUserWidget*> BulletWidgets;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstanceDynamic* WeaponIconMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* WeaponIconMaterialParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ActiveColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InactiveColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponUItype, float> BulletWidthValues = {
		{EWeaponUItype::Thin, 5 },
		{EWeaponUItype::Thick, 20},
		{EWeaponUItype::Barrage, 10},
	};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponUItype, float> BulletHeightValues = {
		{EWeaponUItype::Thin, 40 },
		{EWeaponUItype::Thick, 40},
		{EWeaponUItype::Barrage, 8},
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponUItype, int> BulletMaxRowValues = {
		{EWeaponUItype::Thin, 1 },
		{EWeaponUItype::Thick, 1 },
		{EWeaponUItype::Barrage, 5 },
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponUItype, float> BulletPaddingsLeft = {
		{EWeaponUItype::Thin, 5 },
		{EWeaponUItype::Thick, 5 },
		{EWeaponUItype::Barrage, 5 },
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponUItype, float> BulletPaddingsUp = {
		{EWeaponUItype::Thin, 0 },
		{EWeaponUItype::Thick, 0 },
		{EWeaponUItype::Barrage, 5 },
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHorizontalBox*> BulletContainers;
	
	virtual void NativeConstruct() override;
	virtual void InitializeAmmoCounter(int MaxMag, int CurrMag, int MaxAmmo, int CurrAmmo, EWeaponUItype WeaponUItype);
	virtual void UpdateAmmoCounter(int MaxMag, int CurrMag, int MaxAmmo, int CurrAmmo);
	virtual void SetWeaponIcon(UTexture2D* NewIcon);
	virtual void CreateBulletWidget(int MaxMag, EWeaponUItype WeaponUItype);
	virtual void UpdateCurrentAmmoText(int CurrAmmo);
};
