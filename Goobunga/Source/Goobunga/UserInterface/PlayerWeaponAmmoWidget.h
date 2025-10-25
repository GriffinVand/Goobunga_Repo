#pragma once

#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Goobunga/Combat/WeaponUITypes.h"
#include "PlayerWeaponAmmoWidget.generated.h"

class UTextBlock;
class UImage;
class UVerticalBox;
class AWeapon;

UCLASS()
class GOOBUNGA_API UPlayerWeaponAmmoWidget: public UUserWidget
{
GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	AWeapon* CurrentWeapon;
	
	int MaxMag = 0;
	int CurrMag = 0;
	int MaxAmmo = 0;
	int CurrAmmo = 0;
	EWeaponUItype WeaponUIType = EWeaponUItype::Thin;
	UPROPERTY(EditAnywhere)
	UTexture2D* WeaponIconTexture = nullptr;

	UPROPERTY(meta = (BindWidget))
	UImage* WeaponIconImage;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WeaponAmmoTextBlock;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> BulletWidgetClass;
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
	
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BulletContainer1 = nullptr;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BulletContainer2 = nullptr;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BulletContainer3 = nullptr;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BulletContainer4 = nullptr;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BulletContainer5 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHorizontalBox*> BulletContainers;
	
	virtual void NativeConstruct() override;
	
	void BindToWeapon(AWeapon* Weapon);
	UFUNCTION()
	void OnAmmoChanged();
	
	void SetWeaponInfo();
	void InitializeAmmoCounter();
	void CreateBulletWidget();
	void UpdateWeaponInfo();
	void UpdateAmmoCounter();
	void UpdateWeaponIcon();
	void UpdateCurrentAmmoText();
};
