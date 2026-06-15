#pragma once

#include "CoreMinimal.h"
#include "ProjectileWeapon.h"
#include "BananaGun.generated.h"

UCLASS()
class GOOBUNGA_API ABananaGun : public AProjectileWeapon
{
	GENERATED_BODY()
	
public:
	virtual void HandleReloadPhaseStart(int32 Phase) override;
	virtual void HandleReloadPhaseFinish(int32 Phase) override;
	virtual void HandleReloadFinished() override;
	
protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInstanceDynamic* BananaMat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<int32, float> BananaVisibilityMap;
	void UpdateBananaVisibility(int32 Phase);
};
