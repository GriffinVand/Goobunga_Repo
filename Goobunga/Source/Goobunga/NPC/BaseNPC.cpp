#include "BaseNPC.h"

#include "Camera/CameraComponent.h"
#include "Goobunga/FacialAnimationComponent.h"
#include "Goobunga/PlayerCallables.h"

ABaseNPC::ABaseNPC()
{
	PrimaryActorTick.bCanEverTick = true;
	DialogueViewCam = CreateDefaultSubobject<UCameraComponent>(FName("DialogueViewCam"));
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>(FName("FacialAnimationComponent"));
	DialogueViewCam->SetupAttachment(RootComponent);
}

void ABaseNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseNPC::Interact_Implementation(AActor* Interactor)
{
	if (!Interactor) { return; }
	if (IPlayerCallables* PCI = Cast<IPlayerCallables>(Interactor))
	{
		PCI->StartDialogue(this);
	}
}

bool ABaseNPC::CanInteract_Implementation()
{
	return CurrentState != ENonCombatantState::Busy;
}

void ABaseNPC::DialogueStarted_Implementation(AActor* SpeakerActor)
{
	UE_LOG(LogTemp, Warning, TEXT("DialogueStarted_Implementation()"));
	TargetActor = SpeakerActor;
	CurrentState = ENonCombatantState::Busy;
	FacialAnimationComponent->PlayAnimation("Talk", true);
}

void ABaseNPC::DialogueEnded_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("DialogueEnded_Implementation()"));
	if (TargetActor && TargetActor->Implements<UPlayerCallables>())
	{
		IPlayerCallables::Execute_EndInteract(TargetActor, this);
	}
	TargetActor = nullptr;
	CurrentState = ENonCombatantState::Idle;
	FacialAnimationComponent->PlayAnimation(FacialAnimationComponent->DefaultAnimation, true);
}

