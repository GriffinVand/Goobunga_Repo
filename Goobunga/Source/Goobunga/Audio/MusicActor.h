#pragma once

#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "GameFramework/Actor.h"
#include "MusicActor.generated.h"

UCLASS()
class GOOBUNGA_API AMusicActor : public AActor
{
	GENERATED_BODY()

public:
	AMusicActor();

protected:
	virtual void BeginPlay() override;
	void SetMusicActor();
	
	
	int32 CurrentPriority = 0;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODEvent* DefaultWorldMusic;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODAudioComponent* AudioComp;
	void PlayMusic(UFMODEvent* Event, int32 Priority);
	void StopMusic();
	UFUNCTION()
	void OnEventEnded();
	virtual void Tick(float DeltaTime) override;
};
