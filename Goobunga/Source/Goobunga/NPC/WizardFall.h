#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "Goobunga/Missions/EventInterface.h"
#include "WizardFall.generated.h"

class UNiagaraComponent;
class UFMODAudioComponent;
class UFMODEvent;

UCLASS()
class GOOBUNGA_API AWizardFall : public ACharacter, public IEventInterface
{
	GENERATED_BODY()

public:
	AWizardFall();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USkeletalMeshComponent* WizardMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UFMODAudioComponent* AudioComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraComponent* FallEffectComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ActivateEvent;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* LandEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* FallingEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FallTime = 9.5;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> ExplosionClass;
	
	void StartFall();
	void UpdateFall(float DeltaTime);
	void Land();
	bool bFalling = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FallGravity = 0.2;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveEvent_Implementation(const FGameplayTag Tag) override;
	void DisableMovement();
};
