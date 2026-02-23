#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GoobungaSaveFile.generated.h"

class UAbilityBase;
class AWeapon;

USTRUCT(BlueprintType)
struct FWeaponSaveData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TSubclassOf<AWeapon> WeaponClass;
	
};

USTRUCT(BlueprintType)
struct FAbilitySaveData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TSubclassOf<UAbilityBase> AbilityClass;
};

UCLASS()
class GOOBUNGA_API UGoobungaSaveFile : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID = "0";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PlayerName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CurrentHub = "L_Forest";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWeaponSaveData> PlayerOwnedWeapons;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponSaveData PlayerPrimaryWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponSaveData PlayerSecondaryWeapon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAbilitySaveData> PlayerOwnedAbilities;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData PlayerPrimaryAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData PlayerSecondaryAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilitySaveData PlayerHealAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerMoney;
	
	
	
};
