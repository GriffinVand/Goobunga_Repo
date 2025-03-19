#pragma once

#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "PlayerWeaponAmmoWidget.generated.h"

class UImage;

UCLASS()
class GOOBUNGA_API UPlayerWeaponAmmoWidget: public UUserWidget
{
GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	UImage* WeaponIcon;
	UPROPERTY(EditAnywhere)
	UUserWidget* BulletWidget;
	UPROPERTY(EditAnywhere)
	UVerticalBox* BulletVerticalContainer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UUserWidget*> BulletWidgets;

	virtual void NativeConstruct() override;

	virtual void InitializeAmmoCounter(int MaxAmmo);
	virtual void UpdateAmmoCounter(int CurrentAmmo);
	virtual void SetWeaponIcon(UTexture2D* NewIcon);
	
};
