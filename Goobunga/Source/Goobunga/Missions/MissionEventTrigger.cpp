#include "MissionEventTrigger.h"

#include "MissionSubsystem.h"
#include "Components/BoxComponent.h"
#include "Goobunga/Goobunga_Player.h"

AMissionEventTrigger::AMissionEventTrigger()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(FName("BoxCollider"));
	RootComponent = BoxCollider;
}

void AMissionEventTrigger::BeginPlay()
{
	Super::BeginPlay();
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMissionEventTrigger::OnOverlapBegin);
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMissionEventTrigger::OnOverlapEnd);
	
}

void AMissionEventTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissionEventTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bIsEnterTrigger) return;
	if (bPlayerOnly && Cast<AGoobunga_Player>(OtherActor))
	{
		if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>()) { MS->ReceiveEvent(EnterEvent); }
	}
}

void AMissionEventTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bIsExitTrigger) return;
	if (bPlayerOnly && Cast<AGoobunga_Player>(OtherActor))
	{
		if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>()) { MS->ReceiveEvent(EnterEvent); }
	}
}
