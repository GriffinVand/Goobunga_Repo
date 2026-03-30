#include "AbilityComponent.h"
#include "Goobunga/Goobunga_Player.h"

UAbilityComponent::UAbilityComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UAbilityComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	TArray<UAbilityBase*> CurrentAbilities = { SmallAbility, LargeAbility, HealAbility};
	for (auto& Ability : CurrentAbilities)
	{
		if (Ability)
		{
			Ability->UpdateSpell(DeltaTime);
		}
	}
}

void UAbilityComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	OwnedAbilities = SaveGame.PlayerOwnedAbilities;
	TSubclassOf<UAbilityBase> AbilityClass = SaveGame.PlayerSmallAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Small, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("SmallAbility class is null AbilityComponent::InitializeFromSave")); }
	AbilityClass = SaveGame.PlayerLargeAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Large, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("LargeAbility class is null AbilityComponent::InitializeFromSave")); }
	AbilityClass = SaveGame.PlayerHealAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(EAbilityType::Heal, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("HealAbility class is null AbilityComponent::InitializeFromSave")); }
}

void UAbilityComponent::SaveToSaveGame(UGoobungaSaveFile& SaveGame)
{
	FAbilitySaveData PrimaryAbilityData;
	if (SmallAbility)
	{
		PrimaryAbilityData.AbilityClass = SmallAbility->GetClass();
	}
	SaveGame.PlayerSmallAbility = PrimaryAbilityData;
	FAbilitySaveData SecondaryAbilityData;
	if (LargeAbility)
	{
		SecondaryAbilityData.AbilityClass = LargeAbility->GetClass();
	}
	SaveGame.PlayerLargeAbility = SecondaryAbilityData;
	FAbilitySaveData HealAbilityData;
	if (HealAbility)
	{
		HealAbilityData.AbilityClass = HealAbility->GetClass();
	}
	SaveGame.PlayerHealAbility = HealAbilityData;
	
	SaveGame.PlayerOwnedAbilities = OwnedAbilities;
}

void UAbilityComponent::EquipAbility(EAbilityType Slot, TSubclassOf<UAbilityBase> AbilityClass)
{
	if (!AbilityClass) { UE_LOG(LogTemp, Error, TEXT("Passed in AbilityClass is null AbilityComponent::EquipAbility")); return; }
	UAbilityBase** AbilitySlotPtr;
	switch (Slot)
	{
	case EAbilityType::Small:
		AbilitySlotPtr = &SmallAbility;
		break;
	case EAbilityType::Large:
		AbilitySlotPtr = &LargeAbility;
		break;
	case EAbilityType::Heal:
		AbilitySlotPtr = &HealAbility;
		break;
	default:
		return;
	}
	if (UAbilityBase* NewAbility = NewObject<UAbilityBase>(this, AbilityClass))
	{
		if (UAbilityBase* OldAbility = *AbilitySlotPtr)
		{
			OldAbility->CancelSpell();
			OldAbility->MarkAsGarbage();
		}
		AGoobunga_Player* Owner = Cast<AGoobunga_Player>(GetOwner());
		if (!Owner) { UE_LOG(LogTemp, Error, TEXT("Owner invalid AbilityComponent::EquipAbility")); } else { UE_LOG(LogTemp, Error, TEXT("Owner IS VALID AbilityComponent::EquipAbility")); }
		NewAbility->SetPlayerInstance(Owner);
		NewAbility->SetAbilityCompInstance(this);
		Owner->EquippedAbility(NewAbility);
		*AbilitySlotPtr = NewAbility;
	}
	
	if (!*AbilitySlotPtr) { UE_LOG(LogTemp, Error, TEXT("Tried to create new ability but nullptr AbilityComponent::EquipAbility")); }
}

void UAbilityComponent::AbilityStart(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	if (!Ability->GetIsActive()) { Ability->StartSpell(); if (!Ability->GetIsPassive()){ ActiveAbility = Ability; } return; }
	if (Ability->GetIsToggle()) { Ability->StartSpell(); }
}

void UAbilityComponent::AbilityFinish(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	if (Ability->GetIsActive()) { Ability->EndSpell(); }
}

void UAbilityComponent::AbilityCancel(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return;
	if (Ability->GetIsActive()) { Ability->CancelSpell(); }
}

UAbilityBase* UAbilityComponent::GetAbility(EAbilityType Slot)
{
	switch (Slot)
	{
	case EAbilityType::Small:
		return SmallAbility;
	case EAbilityType::Large:
		return LargeAbility;
	case EAbilityType::Heal:
		return HealAbility;
	default:
		return nullptr;
	}
}

void UAbilityComponent::NotifyMontageEnded(UAnimMontage* Montage)
{
	if (ActiveAbility)
	{
		ActiveAbility->NotifyMontageEnded(Montage);
	}
	else { UE_LOG(LogTemp, Error, TEXT("No active ability to notify"));}
}

void UAbilityComponent::NotifyMontageNotifyRecieved(FName NotifyName)
{
	for (UAbilityBase* Ability : TArray<UAbilityBase*>{HealAbility, SmallAbility, LargeAbility})
	{
		if (Ability && Ability->GetIsActive())
		{
			Ability->NotifyMontageNotifyBegin(NotifyName);
		}
	}
}

void UAbilityComponent::NotifyAbilityActiveFinished(EAbilityType Slot)
{
	if (UAbilityBase* Ability = GetAbility(Slot))
	{
		if (Ability == ActiveAbility) { ActiveAbility = nullptr; }
	}
}

bool UAbilityComponent::CanUseAbility(EAbilityType Slot)
{
	UAbilityBase* Ability = GetAbility(Slot);
	if (!Ability) return false;
	
	if (!Ability->IsReady()) return false;
	if (Ability->GetIsActive() && Ability->GetIsToggle()) return true;
	if (ActiveAbility && (!Ability->GetIsPassive() || Ability->GetRequiresActiveStart())) return false;
	UE_LOG(LogTemp, Error, TEXT("Can actually perform small ability"));
	return true;
	
}

bool UAbilityComponent::IsFlagBlocked(EAbilityBlockFlag Flag)
{
	if (ActiveAbility)
	{
		switch (Flag)
		{
		case EAbilityBlockFlag::Fire:
			return ActiveAbility->GetBlocksFire();
		case EAbilityBlockFlag::Aim:
			return ActiveAbility->GetBlocksADS();
		case EAbilityBlockFlag::Grip:
			return ActiveAbility->GetDisablesGrip();
		case EAbilityBlockFlag::Reload:
			return true;
		case EAbilityBlockFlag::Sprint:
			return true;
		case EAbilityBlockFlag::Swap:
			return true;
		}
	}
	return false;
}
