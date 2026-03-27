#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageTypes.h"
#include "TeamInterface.h"
#include "CombatCallables.generated.h"

UENUM(BlueprintType)
enum class EDamageResult : uint8
{
	None UMETA(DisplayName = "None"),
	Default UMETA(DisplayName = "Default"),
	Critical UMETA(DisplayName = "Critical"),
	Kill UMETA(DisplayName = "Kill"),
};

UINTERFACE(MinimalAPI, NotBlueprintable)
class UCombatCallables : public UInterface
{
	GENERATED_BODY()
};


class GOOBUNGA_API ICombatCallables
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	virtual EDamageResult CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType, EAllegiance Allegiance) = 0;
	virtual void OnDealtDamage(EDamageResult DamageResult) {}
	static void DealDamageAndNotify(int32 Damage, EDamageType Type, AActor* OtherActor, AActor* DealerActor)
	{
		if (!OtherActor || !DealerActor) { return; }
		
		ICombatCallables* CC = Cast<ICombatCallables>(OtherActor);
		if (!CC) return;
		ITeamInterface* TI = Cast<ITeamInterface>(DealerActor);
		if (!TI) return;
		EAllegiance DealerAllegiance = TI->GetAllegiance();
		if (DealerAllegiance == EAllegiance::None) { UE_LOG(LogTemp, Error, TEXT("Tried to deal damage but allegiance is none")); return; }
		const EDamageResult Result = CC->CombatDamage(DealerActor, Damage, Type, DealerAllegiance);
		if (ICombatCallables* OwnerCC = Cast<ICombatCallables>(DealerActor)) { OwnerCC->OnDealtDamage(Result); }
	}
};
