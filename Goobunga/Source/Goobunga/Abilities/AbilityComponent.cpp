#include "AbilityComponent.h"

void UAbilityComponent::InitializeFromSave(const UGoobungaSaveFile& SaveGame)
{
	OwnedAbilities = SaveGame.PlayerOwnedAbilities;
	TSubclassOf<UAbilityBase> AbilityClass = SaveGame.PlayerPrimaryAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(1, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("PrimaryAbility class is null AbilityComponent::InitializeFromSave")); }
	AbilityClass = SaveGame.PlayerSecondaryAbility.AbilityClass;
	if (AbilityClass)
	{
		EquipAbility(2, AbilityClass);
	} else { UE_LOG(LogTemp, Error, TEXT("SecondaryAbility class is null AbilityComponent::InitializeFromSave")); }
}

void UAbilityComponent::InitializeFromLoadout()
{
	if (AbilityLoadout.MainAbilityClass) { EquipAbility(1, AbilityLoadout.MainAbilityClass); }
	if (AbilityLoadout.SecondaryAbilityClass) { EquipAbility(2, AbilityLoadout.SecondaryAbilityClass); }
}

void UAbilityComponent::SaveToSaveGame(UGoobungaSaveFile& SaveGame)
{
	FAbilitySaveData PrimaryAbilityData;
	if (PrimaryAbility)
	{
		PrimaryAbilityData.AbilityClass = PrimaryAbility->GetClass();
	}
	SaveGame.PlayerPrimaryAbility = PrimaryAbilityData;
	FAbilitySaveData SecondaryAbilityData;
	if (SecondaryAbility)
	{
		SecondaryAbilityData.AbilityClass = SecondaryAbility->GetClass();
	}
	SaveGame.PlayerSecondaryAbility = SecondaryAbilityData;
	
	SaveGame.PlayerOwnedAbilities = OwnedAbilities;
}

void UAbilityComponent::EquipAbility(int32 AbilitySlot, TSubclassOf<UAbilityBase> AbilityClass)
{
	if (!AbilityClass) { UE_LOG(LogTemp, Error, TEXT("Passed in AbilityClass is null AbilityComponent::EquipAbility")); return; }
	UAbilityBase** AbilitySlotPtr;
	switch (AbilitySlot)
	{
	case 1:
		AbilitySlotPtr = &PrimaryAbility;
		break;
	case 2:
		AbilitySlotPtr = &SecondaryAbility;
		break;
	default:
		return;
	}
	*AbilitySlotPtr = NewObject<UAbilityBase>(this, AbilityClass);
	if (!*AbilitySlotPtr) { UE_LOG(LogTemp, Error, TEXT("Tried to create new ability but nullptr AbilityComponent::EquipAbility")); }
}

void UAbilityComponent::AbilityStart(int32 AbilitySlot)
{
	switch (AbilitySlot)
	{
	case 1:
		
		break;
	case 2:
		
		break;
	default:
		break;
	}
}

void UAbilityComponent::AbilityFinish(int32 AbilitySlot)
{
	switch (AbilitySlot)
	{
	case 1:
		
		break;
	case 2:
		
		break;
	default:
		break;
	}
}
