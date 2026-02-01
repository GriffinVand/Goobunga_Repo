#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TeamInterface.generated.h"

UENUM(BlueprintType)
enum class EAllegiance : uint8
{
	Enemy UMETA(DisplayName="Enemy"),
	Friendly UMETA(DisplayName="Friendly"),
};

UINTERFACE()
class UTeamInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API ITeamInterface
{
	GENERATED_BODY()

public:
	
	virtual EAllegiance GetAllegiance() const = 0;
	
};
