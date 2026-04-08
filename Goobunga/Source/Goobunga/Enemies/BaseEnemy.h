#pragma once

#include "CoreMinimal.h"
#include "EnemyCallables.h"
#include "GameFramework/Character.h"
#include "Goobunga/Combat/CombatCallables.h"
#include "EnemyStates.h"
#include "GameplayTagContainer.h"
#include "Goobunga/Combat/TeamInterface.h"
#include "BaseEnemy.generated.h"

class UFMODEvent;

UENUM(BlueprintType)
enum class EDeathType : uint8
{
	Default UMETA(DisplayName = "Default"),
	Explosion UMETA(DisplayName = "Explosion")
};

class USplineComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackFinished);

UCLASS()
class GOOBUNGA_API ABaseEnemy : public ACharacter, public ICombatCallables, public IEnemyCallables, public ITeamInterface
{
	GENERATED_BODY()

public:
	ABaseEnemy();
	FOnAttackFinished OnAttackFinished;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFMODEvent* CallEvent;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateCurrentState(float DeltaTime);
	
	virtual EAllegiance GetAllegiance() const override { return EnemyAllegiance; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAllegiance EnemyAllegiance = EAllegiance::Enemy;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviorTree;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	int MaxHealth = 10;
	
	bool Attacking = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dismember, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMesh*> DismemberPartClasses;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dismember, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> DismemberPartComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ENPCState StartState = ENPCState::Walking;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ENPCState CurrentState = ENPCState::Walking;
	
	UFUNCTION()
	virtual void Death(FVector LastMovementSpeed, EDeathType DeathType);
	UFUNCTION()
	virtual void Dismember(FVector LastMovementSpeed);
	UFUNCTION()
	virtual void Ragdoll();
	
	void SetDeathTag(FName Tag) { DeathTag = Tag; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Events)
	FName DeathTag = FName("Bawls");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Events)
	FGameplayTag EnterCombatEvent;

	
	virtual bool GetCanAttackPrim() override { return false; }
	virtual bool GetCanAttackSec() override { return false; }
	virtual FOnAttackFinished& GetAttackFinishedDelegate() override { return OnAttackFinished; }
	virtual ENPCState GetCurrentState() override { return CurrentState; }
	virtual void SetCurrentState(const ENPCState NewState) override { if (CurrentState != ENPCState::Death) CurrentState = NewState; }
	
	virtual EDamageResult CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType, EAllegiance Allegiance) override;
	
	virtual void AttackPrimary(AActor* Target) override {}
	virtual void AttackSecondary(AActor* Target) override {}
	
	UFUNCTION(BlueprintCallable)
	virtual void AttackDamageTrace(FVector Loc, float Radius, int32 Damage, EDamageType DamageType);

};
