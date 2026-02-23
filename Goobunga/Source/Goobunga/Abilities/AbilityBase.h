#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.generated.h"

class AGoobunga_Player;

UENUM(BlueprintType)
enum class EAbilityType : uint8
{
	Small UMETA(DisplayName = "Small"),
	Large UMETA(DisplayName = "Large"),
	Heal UMETA(DisplayName = "Heal"),
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
	virtual void StartSpell(AGoobunga_Player* Player);
	virtual void UpdateSpell(AGoobunga_Player* Player, float DeltaTime);
	virtual void EndSpell(AGoobunga_Player* Player);
	bool GetInterrupts() const { return bInterrupts; }
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bInterrupts = false;
	
	
};
