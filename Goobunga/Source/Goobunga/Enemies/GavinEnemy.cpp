#include "GavinEnemy.h"

#include "NiagaraFunctionLibrary.h"
#include "Goobunga/Weapons/Projectiles/GoobungaProjectile.h"
#include "Kismet/GameplayStatics.h"

AGavinEnemy::AGavinEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(TEXT("FacialAnimationComponent"));
}

void AGavinEnemy::BeginPlay()
{
	Super::BeginPlay();
	CurrentState = EEnemyState::Walking;
	if (FacialAnimationComponent)
	{
		FacialAnimationComponent->Material = GetMesh()->CreateAndSetMaterialInstanceDynamic(0);
		FacialAnimationComponent->PlayAnimation("Idle", true);
	}
	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->OnPlayMontageNotifyBegin.AddUniqueDynamic(this, &AGavinEnemy::OnMontageNotifyBegin);
	}
}

void AGavinEnemy::AttackPrimary(AActor* Target)
{
	//UE_LOG(LogTemp, Error, TEXT("Gavin Attack Primary"));
	CurrentTarget = Target;
	if (SpitMontage != nullptr)
	{
		if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
		{
			CurrentState = EEnemyState::Attacking;
			AnimInst->Montage_Play(SpitMontage, 1);
			FOnMontageEnded OnMontageEnded;
			OnMontageEnded.BindLambda([this](UAnimMontage* Montage, bool bInteruppted)
			{
				OnSpitFinished();
			});
			AnimInst->Montage_SetEndDelegate(OnMontageEnded, SpitMontage);
		}
	}
}

void AGavinEnemy::AttackSecondary(AActor* Target)
{
	//UE_LOG(LogTemp, Error, TEXT("Gavin Attack Secondary"));
	if (PopMontage != nullptr)
	{
		if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
		{
			CurrentState = EEnemyState::Attacking;
			AnimInst->Montage_Play(PopMontage, 1);
			FOnMontageEnded OnMontageEnded;
			OnMontageEnded.BindLambda([this](UAnimMontage* Montage, bool bIntercepted)
			{
				if (!bIntercepted)
				{
					OnPopFinished();
				}
			});
			AnimInst->Montage_SetEndDelegate(OnMontageEnded, PopMontage);
		}
	}
}

void AGavinEnemy::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& Payload)
{
	
	if (NotifyName == ExpectedSpitNotifyName)
	{
		UE_LOG(LogTemp, Error, TEXT("Gavin Spit"));
		LaunchSpit();
	}
}

void AGavinEnemy::LaunchSpit()
{
	
	if (!SpitProjectileClass) return;
	
	FVector Direction = GetActorForwardVector();
	if (CurrentTarget)
	{
		Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
		Direction.Normalize();
	}
	FVector SpawnLoc = GetActorLocation();
	if (GetMesh()->DoesSocketExist(SpitSocketName))
	{
		SpawnLoc = GetMesh()->GetSocketLocation(SpitSocketName);
	}
	FTransform SpawnTransform = FTransform::Identity;
	SpawnTransform.SetLocation(SpawnLoc);
	SpawnTransform.SetRotation(Direction.ToOrientationQuat());
	AGoobungaProjectile* NewSpit = GetWorld()->SpawnActorDeferred<AGoobungaProjectile>(SpitProjectileClass, SpawnTransform, this, this, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (NewSpit) { NewSpit->InstigatorAllegiance = EnemyAllegiance; UGameplayStatics::FinishSpawningActor(NewSpit, SpawnTransform); }
	
}

void AGavinEnemy::OnPopFinished()
{
	if (PopEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, PopEffect, GetActorLocation());
	}
	AttackDamageTrace(GetActorLocation(), PopRadius, PopDamage, EDamageType::Default);
	FVector MovementSpeed = GetVelocity();
	OnAttackFinished.Broadcast();
	Death(MovementSpeed, EDeathType::Explosion);
}

void AGavinEnemy::OnSpitFinished()
{
	//UE_LOG(LogTemp, Error, TEXT("Gavin Spit Finished"));
	bCanSpitAttack = false;
	CurrentTarget = nullptr;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(SpitAttackTimerHandle, [this](){ bCanSpitAttack = true; }, SpitAttackCooldown, false);
	}
	CurrentState = EEnemyState::Walking;
	OnAttackFinished.Broadcast();
}
