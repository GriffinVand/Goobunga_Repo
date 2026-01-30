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
};

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilityLoadout AbilityLoadout;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* PrimaryAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* SecondaryAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAbilitySaveData> OwnedAbilities;
	
	
	void AbilityStart(int32 AbilitySlot);
	void AbilityFinish(int32 AbilitySlot);
	void EquipAbility(int32 AbilitySlot, TSubclassOf<UAbilityBase> AbilityClass);
	
	void InitializeFromSave(const UGoobungaSaveFile& SaveGame);
	void InitializeFromLoadout();
	void SaveToSaveGame(UGoobungaSaveFile& SaveGame);
	
	
};
