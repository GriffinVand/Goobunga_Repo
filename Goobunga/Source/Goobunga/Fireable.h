

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/CameraComponent.h"
#include "Fireable.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UFireable : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IFireable
{
	GENERATED_BODY()

public:
	
	virtual void FireEvent() = 0;
	
	virtual void AltFireEvent()  = 0;
	
	virtual void ReloadEvent()  = 0;
	
	virtual void EquipEvent(AActor* EquippingInstigator)  = 0;
	
	virtual bool CanADS()  = 0;
	
	virtual float GetADSSpeed()  = 0;
	
	virtual UCameraComponent* GetADSCamera()  = 0;
	
};
