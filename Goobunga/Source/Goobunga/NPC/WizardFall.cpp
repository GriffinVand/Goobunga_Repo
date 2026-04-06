#include "WizardFall.h"

#include "FMODAudioComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AWizardFall::AWizardFall()
{
	PrimaryActorTick.bCanEverTick = true;
	AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>("AudioComponent");
	AudioComponent->SetupAttachment(RootComponent);
}

void AWizardFall::BeginPlay()
{
	Super::BeginPlay();
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
}

void AWizardFall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bFalling)
	{
		UpdateFall(DeltaTime);
	}
}

void AWizardFall::StartFall()
{
	if (!GetCharacterMovement())
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AWizardFall::StartFall);
		return;
	}
	
	UCharacterMovementComponent* MovComp = GetCharacterMovement();
	MovComp->SetMovementMode(MOVE_Falling);
}

void AWizardFall::UpdateFall(float DeltaTime)
{
	
}

void AWizardFall::Land()
{
	
}

