// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_LaunchInDirection.h"

#include "BaseEnemy.h"
#include "EnemyCallables.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UBTTask_LaunchInDirection::UBTTask_LaunchInDirection()
{
	NodeName = "LaunchInDirection";
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* PlayerActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(PlayerActorKey.SelectedKeyName));
	if (SelfActor && PlayerActor)
	{
		FVector TargetLocation = PlayerActor->GetActorLocation();
		if (IEnemyCallables* EnemyCallablesInterface = Cast<IEnemyCallables>(SelfActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("Launch Begin"));
			EnemyCallablesInterface->LaunchTowardsLocation(TargetLocation);
			return EBTNodeResult::InProgress;
		}
	}
	return EBTNodeResult::Failed;
}

void UBTTask_LaunchInDirection::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (SelfActor)
	{
		if (IEnemyCallables* EnemyCallablesInterface = Cast<IEnemyCallables>(SelfActor))
		{
			if (EnemyCallablesInterface->GetCurrentState() != EEnemyState::Launching && EnemyCallablesInterface->GetCurrentState() != EEnemyState::Busy)
			{
				UE_LOG(LogTemp, Warning, TEXT("LaunchInProgress"));
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			}
		}
	}
	else { FinishLatentTask(OwnerComp, EBTNodeResult::Failed); }
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




