#include "DialogueInterface.h"

#include "Camera/CameraComponent.h"

UCameraComponent* IDialogueInterface::GetDialogueView_Implementation()
{
	if (AActor* InterfaceActor = Cast<AActor>(_getUObject()))
	{
		return Cast<UCameraComponent>(InterfaceActor->GetComponentByClass(UCameraComponent::StaticClass()));
	}
	return nullptr;
}
