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
	
	ABaseEnemy* Enemy = Cast<ABaseEnemy>(NewPawn);
	if (Enemy && Enemy->BehaviorTree)
	{
		RunBehaviorTree(Enemy->BehaviorTree);
		GetBlackboardComponent()->SetValueAsObject("Player", UGameplayStatics::GetPlayerCharacter(this, 0));
		GetBlackboardComponent()->SetValueAsObject("SelfActor", NewPawn);
		SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	}
}


