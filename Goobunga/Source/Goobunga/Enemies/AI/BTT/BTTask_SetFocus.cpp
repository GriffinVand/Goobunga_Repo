#include "BTTask_SetFocus.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Enemies/BaseEnemy.h"

UBTTask_SetFocus::UBTTask_SetFocus()
{
	NodeName = "Set Focus";
}

EBTNodeResult::Type UBTTask_SetFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (OwnerComp.GetAIOwner() == nullptr) { return EBTNodeResult::Failed; }
	if (ACharacter* Character = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(SelfActorKey.SelectedKeyName)))
	{
		if (Character->GetCharacterMovement())
		{
			Character->GetCharacterMovement()->bUseControllerDesiredRotation = !bClearFocus;
			Character->GetCharacterMovement()->bOrientRotationToMovement = bClearFocus;
		}
	}
	if (bClearFocus) { OwnerComp.GetAIOwner()->ClearFocus(EAIFocusPriority::Gameplay); }
	else if (AActor* Actor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetActorKey.SelectedKeyName)))
	{
		OwnerComp.GetAIOwner()->SetFocus(Actor);
	}
	return EBTNodeResult::Succeeded;
}
