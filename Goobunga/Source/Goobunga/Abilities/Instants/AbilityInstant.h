#pragma once
#include "CoreMinimal.h"
#include "../AbilityBase.h"
#include "AbilityInstant.generated.h"
UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityInstant : public UAbilityBase
{
	GENERATED_BODY()
public:
	virtual void BeginDestroy() override;
	virtual void StartSpell() override;
	virtual void PerformSpell();
	virtual void CancelSpell() override;
	virtual bool IsReady() override;
	virtual void NotifyMontageEnded(UAnimMontage* Montage) override;
	FTimerHandle CooldownTimer;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Animation)
	UAnimMontage* StartUpAnimation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Stats)
	float CooldownTime = 5.f;
	bool bCooldownExpired = true;
};