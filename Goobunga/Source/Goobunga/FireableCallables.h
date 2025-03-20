

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/CameraComponent.h"
#include "Combat/WeaponUITypes.h"
#include "FireableCallables.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UFireableCallables : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IFireableCallables
{
	GENERATED_BODY()

public:
	
	virtual void FireEvent() = 0;

	virtual void EndFireEvent(bool Cancelled) = 0;
	
	virtual void AltFireEvent()  = 0;

	virtual void EndAltFireEvent(bool Cancelled) = 0;
	
	virtual void ReloadEvent()  = 0;
	
	virtual void EquipEvent(AActor* EquippingInstigator)  = 0;
	
	virtual bool CanADS()  = 0;
	
	virtual float GetADSSpeed()  = 0;

	virtual void UpdateAccuracy(float NewAccuracy) = 0;

	virtual int GetMaxMag() = 0;

	virtual int GetCurrentMag() = 0;

	virtual int GetMaxAmmo() = 0;

	virtual int GetCurrentAmmo() = 0;

	virtual EWeaponUItype GetWeaponUItype() = 0;

	virtual UTexture2D* GetIcon(FString IconName) = 0;

	virtual FName GetAttachSocketName() = 0;
	
};
