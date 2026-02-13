// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_LaunchInDirection.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Goobunga/Enemies/JoshEnemy.h"
#include "Goobunga/Enemies/LaunchInterface.h"


UBTTask_LaunchInDirection::UBTTask_LaunchInDirection()
{
	NodeName = "LaunchInDirection";
	bNotifyTick = false;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));
	if (!SelfActor || !TargetActor) return EBTNodeResult::Failed;
	
	if (ILaunchInterface* LaunchInterface = Cast<ILaunchInterface>(SelfActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Launch Begin"));
		LaunchInterface->LaunchTowardsLocation(TargetActor, FOnLaunchFinished::CreateLambda([this, OwnerCompPtr = &OwnerComp]()
		{
			FinishLatentTask(*OwnerCompPtr, EBTNodeResult::Succeeded);
		}));
	}
	
	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AJoshEnemy* SelfActor = Cast<AJoshEnemy>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (SelfActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tell Actor end launch"));
		SelfActor->EndLaunch();
	}
	UE_LOG(LogTemp, Warning, TEXT("LaunchAborted"));
	return EBTNodeResult::Aborted;
}




