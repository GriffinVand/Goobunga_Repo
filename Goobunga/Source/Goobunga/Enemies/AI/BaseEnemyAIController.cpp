// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "Kismet/GameplayStatics.h"


void ABaseEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseEnemyAIController::OnPossess(APawn* NewPawn)
{
	Super::OnPossess(NewPawn);
	InitializeAIBehavior();
}

void ABaseEnemyAIController::InitializeAIBehavior()
{
	if (!GetPawn()) { return; }
	ABaseEnemy* Enemy = Cast<ABaseEnemy>(GetPawn());
	if (Enemy && Enemy->BehaviorTree && UGameplayStatics::GetPlayerCharacter(this, 0))
	{
		RunBehaviorTree(Enemy->BehaviorTree);
		GetBlackboardComponent()->SetValueAsObject("Player", UGameplayStatics::GetPlayerCharacter(this, 0));
		GetBlackboardComponent()->SetValueAsObject("SelfActor", Enemy);
		SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	} else
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			InitializeAIBehavior();
		});
	}
}


