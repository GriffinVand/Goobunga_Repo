


#include "DeadGuy.h"

#include "FMODAudioComponent.h"
#include "MovieSceneSequenceID.h"
#include "Components/BoxComponent.h"
#include "Goobunga/FacialAnimationComponent.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/Dialogue/DialogueManagerComponent.h"

ADeadGuy::ADeadGuy()
{
	PrimaryActorTick.bCanEverTick = true;
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	RootComponent = BoxComponent;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	SkeletalMeshComponent->SetupAttachment(RootComponent);
	FacialAnimationComponent = CreateDefaultSubobject<UFacialAnimationComponent>("FacialAnimationComponent");
	AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>("AudioComponent");
	AudioComponent->SetupAttachment(RootComponent);
}

void ADeadGuy::BeginPlay()
{
	Super::BeginPlay();
	UMaterialInstanceDynamic* DynamicMaterialInstance = UMaterialInstanceDynamic::Create(SkeletalMeshComponent->GetMaterial(1), this);
	FacialAnimationComponent->Material = DynamicMaterialInstance;
	SkeletalMeshComponent->SetMaterial(1, DynamicMaterialInstance);
	FacialAnimationComponent->PlayAnimation("Idle", true);
	
}

void ADeadGuy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FName ADeadGuy::GetCurrentDialogue_Implementation()
{
	bIsSpeaking = true;
	return CurrentDialogue;
}

void ADeadGuy::DialogueEnded_Implementation()
{
	FacialAnimationComponent->PlayAnimation("Dead", true);
	bIsSpeaking = false;
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	AudioComponent->SetEvent(DeathEvent);
	AudioComponent->Play();
	SkeletalMeshComponent->Stop();
}

void ADeadGuy::Interact_Implementation(AActor* Interactor)
{
	AudioComponent->Stop();
	if (AGoobunga_Player* GP = Cast<AGoobunga_Player>(Interactor))
	{
		GP->DialogueManagerComponent->StartDialogue(this);
	}
}

