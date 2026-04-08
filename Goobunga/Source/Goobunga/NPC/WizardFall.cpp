#include "WizardFall.h"

#include "FMODAudioComponent.h"
#include "NiagaraComponent.h"
#include "Components/CapsuleComponent.h"
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
	DisableMovement();
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->RegisterForEvent(this, ActivateEvent);
	}
}

void AWizardFall::DisableMovement()
{
	if (!GetCharacterMovement())
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			DisableMovement();
		});
		return;
	}
	GetCharacterMovement()->DisableMovement();
	GetCharacterMovement()->SetComponentTickEnabled(false);
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
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetActorEnableCollision(true);
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);
	WizardMesh->SetHiddenInGame(false);
	WizardMesh->SetVisibility(true, true);
	if (!GetCharacterMovement())
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AWizardFall::StartFall);
		return;
	}
	float GravZ = GetCharacterMovement()->GetGravityZ();
	FVector CurrLoc = GetActorLocation();
	float DesiredHeight = FallGravity * FMath::Abs(GravZ) * FallTime;
	FVector NewLoc = CurrLoc + FVector(0, 0, DesiredHeight);
	SetActorLocation(NewLoc);
	bFalling = true;	
	UCharacterMovementComponent* MovComp = GetCharacterMovement();
	MovComp->SetMovementMode(MOVE_Falling);
	MovComp->GravityScale = FallGravity;
	MovComp->SetComponentTickEnabled(true);
	AudioComponent->SetEvent(FallingEvent);
	AudioComponent->Play();
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
	AudioComponent->Stop();
	AudioComponent->SetEvent(LandEvent);
	AudioComponent->Play();
	UE_LOG(LogTemp, Error, TEXT("Landed"));
}

