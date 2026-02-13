#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InDamageInterface.generated.h"

UINTERFACE()
class UInDamageInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IInDamageInterface
{
	GENERATED_BODY()

public:
	virtual void DeclareOwningActor(AActor* Owner) = 0;
	
};
