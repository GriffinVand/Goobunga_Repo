#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MusicSubsystem.generated.h"

class AMusicActor;
class UFMODEvent;

UCLASS()
class GOOBUNGA_API UMusicSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AMusicActor* CurrMusicActor = nullptr;
	
	void SetMusicActor(AMusicActor* MusicActor) { CurrMusicActor = MusicActor; }
	void PlayMusic(UFMODEvent* Event, int32 Priority);
	void PlayDefault();
	void StopMusic();
};
