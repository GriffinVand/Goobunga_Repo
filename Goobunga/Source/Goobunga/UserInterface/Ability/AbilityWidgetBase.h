#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AbilityWidgetBase.generated.h"

enum class EAbilityState : uint8;
class UAbilityBase;
class UProgressBar;
class UCommonLazyImage;

UCLASS()
class GOOBUNGA_API UAbilityWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* AbilityIcon;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UProgressBar* AbilityProgressBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbilityBase* OwnerAbility;
	
	virtual void NativeConstruct() override;
	void BindToAbility(UAbilityBase* Ability);
	void InitializeUI();
	UFUNCTION()
	void UpdateProgress(float Percent);
	virtual void UpdateState(EAbilityState NewState);
};
