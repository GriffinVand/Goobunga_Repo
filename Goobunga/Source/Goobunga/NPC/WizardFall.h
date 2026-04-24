#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "Goobunga/Missions/EventInterface.h"
#include "NPCData.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "WizardFall.generated.h"

class UNiagaraSystem;
class ASeismicExplosion;
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraSystem* EnterPortalSystem;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ActivateEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag PortalEvent;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ASeismicExplosion> ExplosionClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ENonCombatantState CurrentState = ENonCombatantState::Busy;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* LandEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* FallingEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* FollowEvent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* EnterPortalEvent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FallTime = 9.5;
	
	void StartFall();
	void UpdateFall(float DeltaTime);
	void Land();
	void OpenPortal();
	void EnterPortal(FAIRequestID RequestID, const FPathFollowingResult& Result);
	bool bFalling = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FallGravity = 0.2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TimeToOpenPortal = 3.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* PortalLocation = nullptr;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveEvent_Implementation(const FGameplayTag Tag) override;
	void DisableMovement();
};
