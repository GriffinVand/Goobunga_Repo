#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.h"
#include "AbilityInstant.generated.h"
UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityInstant : public UAbilityBase
{
	GENERATED_BODY()
public:
	virtual void StartSpell() override;
	virtual void UpdateSpell(float DeltaTime) override;
	virtual void PerformAbility() { }
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Animation)
	UAnimMontage* AbilityAnimation;
};