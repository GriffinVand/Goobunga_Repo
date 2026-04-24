#pragma once
#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "NiagaraSystem.h"
#include "Goobunga/FacialAnimationComponent.h"
#include "GavinEnemy.generated.h"
class AGoobungaProjectile;

UCLASS(Blueprintable)
class GOOBUNGA_API AGavinEnemy : public ABaseEnemy
{
	GENERATED_BODY()
public:
	
	AGavinEnemy();

	virtual bool GetCanAttackPrim() override { return bCanSpitAttack && CurrentState != ECombatantState::Attacking; }
	virtual bool GetCanAttackSec() override { return bCanExplodeAttack && CurrentState != ECombatantState::Attacking; }
	virtual void AttackPrimary(AActor* Target) override;
	virtual void AttackSecondary(AActor* Target) override;
	
	UFUNCTION()
	void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFacialAnimationComponent* FacialAnimationComponent;
	
	
protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName ExpectedSpitNotifyName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimMontage* SpitMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimMontage* PopMontage;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AActor* CurrentTarget;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Pop)
	float PopDamage = 10.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Pop)
	float PopRadius = 300.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Pop)
	UNiagaraSystem* PopEffect;
	
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Spit)
	float SpitAttackCooldown = 5.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Spit)
	TSubclassOf<AGoobungaProjectile> SpitProjectileClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Spit)
	FName SpitSocketName;
	
private:
	bool bCanSpitAttack = true;
	bool bCanExplodeAttack = true;
	
	FTimerHandle SpitAttackTimerHandle;
	
	void OnSpitFinished();
	void OnPopFinished();
	void LaunchSpit();
	
};
