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
	AActor* PlayerActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(Player.SelectedKeyName));
	if (SelfActor && PlayerActor)
	{
		FVector EnemyLocation = SelfActor->GetActorLocation();
		FVector PlayerLocation = PlayerActor->GetActorLocation();
		FVector DirectionToPlayer = PlayerLocation - EnemyLocation;
		DirectionToPlayer.Normalize();
		FVector RightDir = FVector::CrossProduct(DirectionToPlayer, FVector::UpVector);
		RightDir = FMath::RandBool() ? RightDir : -RightDir;
		FVector SwerveDir = (((RightDir + DirectionToPlayer) / 2) + DirectionToPlayer) / 2;
		SwerveDir.Normalize();
		float SwerveDistance = FMath::RandRange(400.f, 700.f);
		FVector NewLocation = EnemyLocation + SwerveDir * SwerveDistance;
		//UKismetSystemLibrary::DrawDebugLine(SelfActor, EnemyLocation, NewLocation, FColor::Red, 3);
		UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(SelfActor->GetWorld());
		if (NavSys)
		{
			FVector Result;
			bool bSuccess = NavSys->K2_GetRandomReachablePointInRadius(SelfActor, NewLocation, Result, 300.f);
			if (bSuccess)
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsVector(TargetLocation.SelectedKeyName, Result);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}

