#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GoobungaSaveFile.generated.h"

class IPlayerCallables;
class UAbilityBase;
class AWeapon;

USTRUCT(BlueprintType)
struct FWeaponSaveData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeapon> WeaponClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFillAmmo = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition = "!bFillAmmo", EditConditionHides = "true"))
	int32 CurrAmmo = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition = "!bFillAmmo", EditConditionHides = "true"))
	int32 CurrMag = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition = "!bFillAmmo", EditConditionHides = "true"))
	int32 CurrAltAmmo = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition = "!bFillAmmo", EditConditionHides = "true"))
	int32 CurrAltMag = 0;
	
};

USTRUCT(BlueprintType)
struct FAbilitySaveData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAbilityBase> AbilityClass;
};


UENUM(BlueprintType)
enum class EItemDataType : uint8
{
	None UMETA(DisplayName = "None"),
	Weapon UMETA(DisplayName = "Weapon"),
	Ability UMETA(DisplayName = "Ability"),
};

UCLASS()
class GOOBUNGA_API UItemData : public UDataAsset
{
	GENERATED_BODY()
public:
	virtual void OnPurchased(AActor* Purchaser);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ID = NAME_None;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EItemDataType ItemType = EItemDataType::None;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ItemTitle = FText::GetEmpty();
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ItemDescription = FText::GetEmpty();
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ItemCost = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UStaticMesh> DisplayMesh = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTransform DisplayTransform = FTransform::Identity;
};

UCLASS()
class GOOBUNGA_API UAbilityItemData : public UItemData
{
	GENERATED_BODY()
public:
	
	UAbilityItemData() { ItemType = EItemDataType::Ability; }
	TSubclassOf<UAbilityBase> AbilityClass;
};

UCLASS()
class GOOBUNGA_API UWeaponItemData : public UItemData
{
	GENERATED_BODY()
public:
	UWeaponItemData() { ItemType = EItemDataType::Weapon; }
	TSubclassOf<AWeapon> WeaponClass;
};

UCLASS()
class GOOBUNGA_API UEventItemData : public UItemData
{
	GENERATED_BODY()
public:
	
};

UCLASS()
class GOOBUNGA_API UGoobungaSaveFile : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString ID = "0";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName PlayerName;
	
	//PROGRESSION
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 LevelProgress = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName CurrentHub = "L_Forest";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bUnlockedDash = true;
	
	//INVENTORY
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 PlayerMoney;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<TSoftObjectPtr<UItemData>> PlayerOwnedItems;
	
	//EQUIPPED ITEMS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAbilitySaveData PlayerSmallAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAbilitySaveData PlayerLargeAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAbilitySaveData PlayerHealAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FWeaponSaveData PlayerPrimaryWeapon;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FWeaponSaveData PlayerSecondaryWeapon;
	
};
