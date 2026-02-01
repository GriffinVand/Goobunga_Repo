#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LaunchInterface.generated.h"

DECLARE_DELEGATE(FOnLaunchFinished);


UINTERFACE()
class ULaunchInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API ILaunchInterface
{
	GENERATED_BODY()

public:
	virtual void LaunchTowardsLocation(AActor* TargetActor, FOnLaunchFinished InOnFinished) = 0;
	virtual bool GetCanLaunch() = 0;
};
