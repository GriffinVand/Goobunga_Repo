#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
#include "AbilityComponent.generated.h"

UENUM(BlueprintType)
enum class EAbilityBlockFlag : uint8
{
	Fire UMETA(DisplayName = "Fire"),
	Aim UMETA(DisplayName = "Aim"),
	Grip UMETA(DisplayName = "Grip"),
	Reload UMETA(DisplayName = "Reload"),
	Sprint UMETA(DisplayName = "Sprint"),
	Swap UMETA(DisplayName = "Swap"),
};

class UGoobungaSaveFile;

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityBase* ActiveAbility;
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
	void AbilityCancel(EAbilityType Slot);
	void EquipAbility(EAbilityType Slot, TSubclassOf<UAbilityBase> AbilityClass);
	UAbilityBase* GetAbility(EAbilityType Slot);
	
	void NotifyMontageNotifyRecieved(FName NotifyName);
	void NotifyMontageEnded(UAnimMontage*);
	void NotifyAbilityActiveFinished(EAbilityType Slot);
	
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	void InitializeFromSave(const UGoobungaSaveFile& SaveGame);
	void SaveToSaveGame(UGoobungaSaveFile& SaveGame);
	
	bool CanUseAbility(EAbilityType Slot);
	bool IsFlagBlocked(EAbilityBlockFlag Flag);
	
	
};
