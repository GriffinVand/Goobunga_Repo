// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "BaseEnemyAIController.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = MaxHealth;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (DismemberPartClasses.Num() > 0)
	{
		for (UStaticMesh* ComponentType : DismemberPartClasses)
		{
			UStaticMeshComponent* NewMeshComp = NewObject<UStaticMeshComponent>(this);

			if (NewMeshComp)
			{
				NewMeshComp->SetStaticMesh(ComponentType);
				NewMeshComp->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				NewMeshComp->RegisterComponent();
				NewMeshComp->SetVisibility(false);
				NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				NewMeshComp->SetSimulatePhysics(false);
				DismemberPartComponents.Add(NewMeshComp);
			}
		}
	}
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FadingOut)
	{
		UpdateFadeOut(DeltaTime);
	}
}

// Take damage
void ABaseEnemy::CombatDamage(AActor* DamageDealer, float Damage, EDamageType DamageType)
{
	if (DamageTypeMap.Contains(DamageType))
	{
		float DamageMultiplier = DamageTypeMap[DamageType];
		Health -= DamageMultiplier * Damage;
	}
	else
	{
		Health -= Damage;
	}
	if (Health <= 0) { Death(); }
}

void ABaseEnemy::Death()
{
	ABaseEnemyAIController* AIController = Cast<ABaseEnemyAIController>(Controller);
	if (AIController)
	{
		AIController->GetBrainComponent()->StopLogic("Dead");
		Dismember();
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Couldn't access AI Controller"));
	Destroy();
}

void ABaseEnemy::Dismember()
{
	GetMesh()->SetVisibility(false);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	if (DismemberPartComponents.Num() > 0)
	{
		for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
		{
			DismemberPart->SetVisibility(true);
			DismemberPart->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			DismemberPart->SetSimulatePhysics(true);
		}
		FadingOut = true;
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("No dismember parts"));
	Destroy();
}

void ABaseEnemy::UpdateFadeOut(float DeltaTime)
{
	FadeOutTimeRemaining -= DeltaTime;
	if (FadeOutTimeRemaining <= 0) { Destroy(); }
	
	FadeOutTimeElapsed += DeltaTime;
	if (FadeOutTimeElapsed > FadeOutInterval *  (FadeOutTimeRemaining / FadeOutTime) && FadeOutTimeElapsed > 0.1f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Change visibility"));
		FadeOutTimeElapsed = 0.f;
		for (UStaticMeshComponent* DismemberPart : DismemberPartComponents)
		{
			DismemberPart->SetVisibility(!DismemberPart->IsVisible());
		}
	}
}

