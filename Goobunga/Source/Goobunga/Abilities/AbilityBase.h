#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.generated.h"

class UAbilityComponent;
class AGoobunga_Player;

UENUM(BlueprintType)
enum class EAbilityType : uint8
{
	Small UMETA(DisplayName = "Small"),
	Large UMETA(DisplayName = "Large"),
	Heal UMETA(DisplayName = "Heal"),
};

UENUM(BlueprintType)
enum class EAbilityState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	WaitingForPlayer UMETA(DisplayName = "WaitingForPlayer"),
	Charging UMETA(DisplayName = "Charging"),
	Active UMETA(DisplayName = "Active"),
	Releasing UMETA(DisplayName = "Releasing"),
	Recovering UMETA(DisplayName = "Recovering"),
};

UCLASS(Blueprintable)
class GOOBUNGA_API UAbilityBase : public UObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAbilityType AbilityType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AbilityID = "Ability";
	virtual void StartSpell() {}
	virtual void UpdateSpell(float DeltaTime) {}
	virtual void EndSpell() {}
	virtual void CancelSpell() {}
	
	bool GetBlocksADS() const { return bBlocksADS; }
	bool GetDisablesGrip() const { return bDisablesGrip; }
	bool GetBlocksFire() const { return bBlocksFire;}
	bool GetIsActive() const { return bIsActive; }
	bool GetIsToggle() const { return bIsToggle; }
	bool GetIsPassive() const { return bIsPassive; }
	bool GetBlocksWeapon() const { return bBlocksWeapon; }
	bool GetRequiresActiveStart() const { return bRequiresActiveStart; }
	virtual bool IsReady() { return false; }
	
	void SetPlayerInstance(AGoobunga_Player* PlayerInst);
	void SetAbilityCompInstance(UAbilityComponent* AbilityCompInst);
	virtual void Finish();
	virtual void NotifyMontageEnded(UAnimMontage* Montage) {}
	virtual void NotifyMontageNotifyBegin(FName NotifyName) {}
	EAbilityState GetAbilityState() const { return AbilityState; }
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float AbilityCooldown = 5.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bBlocksADS = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bBlocksFire = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bDisablesGrip = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bIsToggle = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bRequiresActiveStart;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bIsPassive =  false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bBlocksWeapon =  false;
	
	UPROPERTY(BlueprintReadOnly)
	UAnimMontage* CurrActiveMontage = nullptr;
	EAbilityState AbilityState = EAbilityState::Idle;
	UPROPERTY(BlueprintReadOnly)
	AGoobunga_Player* Player;
	UPROPERTY(BlueprintReadOnly)
	UAbilityComponent* AbilityComponent;
	bool bIsActive = false;
	
	
};
