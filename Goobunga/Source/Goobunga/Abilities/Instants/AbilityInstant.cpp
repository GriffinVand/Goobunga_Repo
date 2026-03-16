#include "AbilityInstant.h"

#include "Goobunga/Goobunga_Player.h"

void UAbilityInstant::BeginDestroy()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(CooldownTimer);	
	}
	Super::BeginDestroy();
}

void UAbilityInstant::StartSpell()
{
	UE_LOG(LogTemp, Error, TEXT("Start instant spell"));
	bIsActive = true;
	if (StartUpAnimation)
	{
		UE_LOG(LogTemp, Error, TEXT("Startup anim exists"));
		if (Player)
		{
			UE_LOG(LogTemp, Error, TEXT("Player exists"));
			CurrActiveMontage = StartUpAnimation;
			Player->PlayAbilityMontage(StartUpAnimation);
			return;
		}
	}
	PerformSpell();
	
}

void UAbilityInstant::PerformSpell()
{
	bCooldownExpired = false;
	GetWorld()->GetTimerManager().SetTimer(CooldownTimer, [this](){ bCooldownExpired = true; }, CooldownTime, false);
}

void UAbilityInstant::CancelSpell()
{
	Finish();
}

void UAbilityInstant::NotifyMontageEnded(UAnimMontage* Montage)
{
	UE_LOG(LogTemp, Error, TEXT("Onmontage ended reached"));
	if (!Montage || !bIsActive) return;
	if (Montage == StartUpAnimation)
	{
		CurrActiveMontage = nullptr;
		Finish();
	}
}

bool UAbilityInstant::IsReady()
{
	return (!bIsActive && bCooldownExpired);
}
