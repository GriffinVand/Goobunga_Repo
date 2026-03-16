#pragma once
#include "CoreMinimal.h"
#include "AbilityInstant.h"
#include "AbilityFireball.generated.h"

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityFireball : public UAbilityInstant
{
	GENERATED_BODY()
	
public:
	virtual void PerformSpell() override;
	virtual void NotifyMontageNotifyBegin(FName NotifyName) override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> FireballClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName FireballSocket;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName LaunchNotifyName;
	
};
