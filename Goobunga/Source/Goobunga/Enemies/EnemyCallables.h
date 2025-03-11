#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyCallables.generated.h"

UINTERFACE(BlueprintType, MinimalAPI)
class UEnemyCallables : public UInterface
{

	GENERATED_BODY()
	
};

class IEnemyCallables
{
	GENERATED_BODY()

public:

	virtual void AttackPrimary() = 0;
};
