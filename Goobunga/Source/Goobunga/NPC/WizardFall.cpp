#include "WizardFall.h"

#include "AIController.h"
#include "FMODAudioComponent.h"
#include "FMODBlueprintStatics.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Goobunga/Audio/MusicActor.h"
#include "Goobunga/Audio/MusicSubsystem.h"
#include "Goobunga/Missions/MissionSubsystem.h"
#include "Goobunga/Weapons/Special/SeismicExplosion.h"
#include "Navigation/PathFollowingComponent.h"

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
	CurrentState = ENonCombatantState::Busy;
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
	if (ExplosionClass)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		ASeismicExplosion* NewExplosion = GetWorld()->SpawnActor<ASeismicExplosion>(ExplosionClass, GetActorLocation(), GetActorRotation(), SpawnInfo);
		if (NewExplosion)
		{
			NewExplosion->Activate(EAllegiance::Friendly);
		}
	}
	if (UMusicSubsystem* MS = GetGameInstance()->GetSubsystem<UMusicSubsystem>())
	{
		MS->PlayDefault();
	}
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	{
		OpenPortal();
	}, TimeToOpenPortal, false);
	UE_LOG(LogTemp, Error, TEXT("Landed"));
}

void AWizardFall::OpenPortal()
{
	CurrentState = ENonCombatantState::Idle;
	if (!PortalLocation) { return; }
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->ReceiveEvent(PortalEvent);
	}
	if (AAIController* AIController = Cast<AAIController>(GetController()))
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &AWizardFall::EnterPortal);
		AIController->MoveToLocation(PortalLocation->GetActorLocation(), 50.f);
	}
	if (FollowEvent) { AudioComponent->SetEvent(FollowEvent); AudioComponent->Play(); }
}

void AWizardFall::EnterPortal(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (EnterPortalEvent) { UFMODBlueprintStatics::PlayEventAtLocation(this, EnterPortalEvent, GetActorTransform(), true); }
	if (EnterPortalSystem) { UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, EnterPortalSystem, GetActorLocation(), GetActorRotation()); }
	Destroy();
}

