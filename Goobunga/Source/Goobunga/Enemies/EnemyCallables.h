#pragma once

#include "CoreMinimal.h"
#include "EnemyStates.h"
#include "UObject/Interface.h"
#include "EnemyCallables.generated.h"


class FOnAttackFinished;

UINTERFACE(BlueprintType, MinimalAPI)
class UEnemyCallables : public UInterface
{

	GENERATED_BODY()
	
};

class IEnemyCallables
{
	GENERATED_BODY()

public:

	virtual void AttackPrimary(AActor* Target) = 0;
	virtual void AttackSecondary(AActor* Target) = 0;
	virtual bool GetCanAttackPrim() = 0;
	virtual bool GetCanAttackSec() = 0;
	virtual FOnAttackFinished& GetAttackFinishedDelegate() = 0;
	virtual ENPCState GetCurrentState() = 0;
	virtual void SetCurrentState(const ENPCState NewState) = 0;
};
