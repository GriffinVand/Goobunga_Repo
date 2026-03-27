#pragma once

#include "CoreMinimal.h"
#include "GoobungaProjectile.h"
#include "FireballProjectile.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, BlueprintType)
class GOOBUNGA_API AFireballProjectile : public AGoobungaProjectile
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> GroundActorClass;
	virtual void SpawnGroundActor();
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
};
