// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_LaunchInDirection.h"

#include "BaseEnemy.h"
#include "EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UBTTask_LaunchInDirection::UBTTask_LaunchInDirection()
{
	NodeName = "LaunchInDirection";
	bNotifyTick = false;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* PlayerActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(PlayerActorKey.SelectedKeyName));
	if (!SelfActor || !PlayerActor) return EBTNodeResult::Failed;
	
	if (IEnemyCallables* EnemyCallablesInterface = Cast<IEnemyCallables>(SelfActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Launch Begin"));
		EnemyCallablesInterface->LaunchTowardsLocation(PlayerActor, FOnLaunchFinished::CreateLambda([this, OwnerCompPtr = &OwnerComp]()
		{
			FinishLatentTask(*OwnerCompPtr, EBTNodeResult::Succeeded);
		}));
	}
	
	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ABaseEnemy* SelfActor = Cast<ABaseEnemy>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (SelfActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tell Actor end launch"));
		SelfActor->EndLaunch();
	}
	UE_LOG(LogTemp, Warning, TEXT("LaunchAborted"));
	return EBTNodeResult::Aborted;
}




