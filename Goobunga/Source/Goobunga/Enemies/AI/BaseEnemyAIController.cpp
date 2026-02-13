// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Enemies/BaseEnemy.h"
#include "Kismet/GameplayStatics.h"


void ABaseEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	ABaseEnemy* Enemy = Cast<ABaseEnemy>(GetPawn());
	if (Enemy && Enemy->BehaviorTree)
	{
		RunBehaviorTree(Enemy->BehaviorTree);
		GetBlackboardComponent()->SetValueAsObject("Player", UGameplayStatics::GetPlayerCharacter(this, 0));
		SetFocus(UGameplayStatics::GetPlayerCharacter(this, 0), EAIFocusPriority::Gameplay);
	}
}


