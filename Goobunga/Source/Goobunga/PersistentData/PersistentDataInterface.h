#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PersistentDataInterface.generated.h"

class UGoobungaSaveFile;

UINTERFACE()
class UPersistentDataInterface : public UInterface
{
	GENERATED_BODY()
};

class GOOBUNGA_API IPersistentDataInterface
{
	GENERATED_BODY()

public:
	virtual void SaveGameToFile(UGoobungaSaveFile& SaveGame) {}
	virtual void LoadGameFromFile(const UGoobungaSaveFile& SaveGame) {}
};
