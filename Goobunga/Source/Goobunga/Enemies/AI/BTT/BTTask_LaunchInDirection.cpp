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
		TWeakObjectPtr<UBehaviorTreeComponent> WeakOwner = &OwnerComp;
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsLaunchingKey.SelectedKeyName, true);
		//UE_LOG(LogTemp, Warning, TEXT("Launch Begin"));
		LaunchInterface->LaunchTowardsLocation(TargetActor, FOnLaunchFinished::CreateLambda([this, WeakBB = WeakOwner]()
		{
			if (!WeakBB.IsValid()) { return;}
			WeakBB->GetBlackboardComponent()->SetValueAsBool(IsLaunchingKey.SelectedKeyName, false);
			FinishLatentTask(*WeakBB, EBTNodeResult::Succeeded);
		}));
	}
	
	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_LaunchInDirection::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ILaunchInterface* LI = Cast<ILaunchInterface>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	if (LI)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsLaunchingKey.SelectedKeyName, false);
		//UE_LOG(LogTemp, Warning, TEXT("Tell Actor end launch"));
		LI->AbortLaunch();
	}
	//UE_LOG(LogTemp, Warning, TEXT("LaunchAborted"));
	return EBTNodeResult::Aborted;
}




