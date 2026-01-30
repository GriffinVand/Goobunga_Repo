#pragma once

#include "CoreMinimal.h"
#include "EnemyStates.h"
#include "UObject/Interface.h"
#include "EnemyCallables.generated.h"

DECLARE_DELEGATE(FOnLaunchFinished);

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
	virtual void LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnFinished) = 0;
	virtual bool GetCanAttack() = 0;
	virtual bool GetCanLaunch() = 0;
	virtual EEnemyState GetCurrentState() = 0;
};
