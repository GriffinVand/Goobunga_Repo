#include "AbilityWidgetBase.h"

#include "CommonLazyImage.h"
#include "Components/ProgressBar.h"
#include "Goobunga/Abilities/AbilityBase.h"
#include "Goobunga/Abilities/AbilityBase.h"

void UAbilityWidgetBase::BindToAbility(UAbilityBase* Ability)
{
	OwnerAbility = Ability;
	if (!OwnerAbility) { return; }
	OwnerAbility->OnCooldownChanged.AddUniqueDynamic(this, &UAbilityWidgetBase::UpdateProgress);
}

void UAbilityWidgetBase::NativeConstruct()
{
	InitializeUI();	
}

void UAbilityWidgetBase::InitializeUI()
{
	if (!OwnerAbility) { UE_LOG(LogTemp, Error, TEXT("Owner ability null AbilityWidgetBase")); return; }
	if (OwnerAbility->AbilityIcon == nullptr) { UE_LOG(LogTemp, Error, TEXT("Owner ability icon null AbilityWidgetBase")); return; }
	UE_LOG(LogTemp, Error, TEXT("Set brush"));
	AbilityIcon->SetBrushFromTexture(OwnerAbility->AbilityIcon);
	UpdateProgress(0.f);
}

void UAbilityWidgetBase::UpdateProgress(float Percent)
{
	AbilityProgressBar->SetPercent(Percent);
	if (Percent >= 1.f)
	{
		AbilityProgressBar->SetVisibility(ESlateVisibility::Hidden);
	} else { AbilityProgressBar->SetVisibility(ESlateVisibility::HitTestInvisible); }
}

void UAbilityWidgetBase::UpdateState(EAbilityState NewState)
{
	//Change appearance maybe
}
