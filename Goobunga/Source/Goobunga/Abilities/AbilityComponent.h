#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
#include "AbilityComponent.generated.h"

class UGoobungaSaveFile;

USTRUCT(BlueprintType)
struct FAbilityLoadout
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAbilityBase> MainAbilityClass = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAbilityBase> SecondaryAbilityClass = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAbilityBase> HealAbilityClass = nullptr;
};

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilityLoadout AbilityLoadout;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* SmallAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* LargeAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* HealAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAbilitySaveData> OwnedAbilities;
	
	
	void AbilityStart(EAbilityType Slot);
	void AbilityFinish(EAbilityType Slot);
	void EquipAbility(EAbilityType Slot, TSubclassOf<UAbilityBase> AbilityClass);
	UAbilityBase* GetAbility(EAbilityType Slot);
	bool CanUseAbility(EAbilityType Slot);
	
	void InitializeFromSave(const UGoobungaSaveFile& SaveGame);
	void SaveToSaveGame(UGoobungaSaveFile& SaveGame);
	
	
};
