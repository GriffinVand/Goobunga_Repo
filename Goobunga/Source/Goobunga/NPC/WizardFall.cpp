#include "WizardFall.h"

#include "FMODAudioComponent.h"
#include "NiagaraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Missions/MissionSubsystem.h"

AWizardFall::AWizardFall()
{
	PrimaryActorTick.bCanEverTick = true;
	AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>("AudioComponent");
	AudioComponent->SetupAttachment(RootComponent);
	WizardMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WizardMesh");
	WizardMesh->SetupAttachment(RootComponent);
	FallEffectComponent = CreateDefaultSubobject<UNiagaraComponent>("FallEffectComponent");
	FallEffectComponent->SetupAttachment(WizardMesh, "FallEffect_Socket");
}

void AWizardFall::BeginPlay()
{
	Super::BeginPlay();
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->RegisterForEvent(this, ActivateEvent);
	}
}

void AWizardFall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bFalling)
	{
		UpdateFall(DeltaTime);
	}
}

void AWizardFall::ReceiveEvent_Implementation(const FGameplayTag Tag)
{
	UE_LOG(LogTemp, Error, TEXT("Wizard got da event"))
	StartFall();
}

void AWizardFall::StartFall()
{
	SetActorEnableCollision(true);
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);
	WizardMesh->SetHiddenInGame(true);
	WizardMesh->SetVisibility(true, true);
	if (!GetCharacterMovement())
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AWizardFall::StartFall);
		return;
	}
	bFalling = true;	
	UCharacterMovementComponent* MovComp = GetCharacterMovement();
	MovComp->SetMovementMode(MOVE_Falling);
	MovComp->GravityScale = FallGravity;
	
}

void AWizardFall::UpdateFall(float DeltaTime)
{
	if (GetCharacterMovement()->MovementMode == MOVE_Walking)
	{
		bFalling = false;
		Land();
	}
	
}

void AWizardFall::Land()
{
	UE_LOG(LogTemp, Error, TEXT("Landed"));
}

