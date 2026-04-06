// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SwerveWhileChasing.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UBTTask_SwerveWhileChasing::UBTTask_SwerveWhileChasing()
{
	NodeName = "Swerve While Chasing";
}

EBTNodeResult::Type UBTTask_SwerveWhileChasing::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* SelfActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName));
	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName));
	if (SelfActor && TargetActor)
	{
		FVector EnemyLocation = SelfActor->GetActorLocation();
		FVector PlayerLocation = TargetActor->GetActorLocation();
		FVector RightDir = SelfActor->GetActorRightVector();
		FVector SwerveDir = FMath::RandBool() ? RightDir : -RightDir;
		
		SwerveDir.Normalize();
		float SwerveDistance = FMath::RandRange(MinDist, MaxDist);
		FVector NewLocation = EnemyLocation + SwerveDir * SwerveDistance;
		//UKismetSystemLibrary::DrawDebugLine(SelfActor, EnemyLocation, NewLocation, FColor::Red, 3);
		UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(SelfActor->GetWorld());
		if (NavSys)
		{
			FVector Result;
			if (NavSys->K2_GetRandomReachablePointInRadius(SelfActor, NewLocation, Result, 300.f))
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsVector(TargetLocation.SelectedKeyName, Result);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}

