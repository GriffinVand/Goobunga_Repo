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
	
	if (bRequiresActivate) { bActive = false; }
	
	if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
	{
		MS->RegisterForEvent(this, ActivateEvent);
	}
	
}

void AMissionEventTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissionEventTrigger::ReceiveEvent_Implementation(const FGameplayTag Tag)
{
	if (Tag == ActivateEvent) { bActive = true; }
	BoxCollider->UpdateOverlaps();
}

void AMissionEventTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bActive) { return; }
	if (!bIsEnterTrigger) return;
	if (bHasEnterTriggered && bTriggerOnce) { return; }
	if (bPlayerOnly && Cast<AGoobunga_Player>(OtherActor))
	{
		if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
		{
			for (auto& Event : EnterEvents) { MS->ReceiveEvent(Event); }
			bHasEnterTriggered = true;
		}
	}
}

void AMissionEventTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bActive) { return; }
	if (!bIsExitTrigger) return;
	if (bHasExitTriggered && bTriggerOnce) { return; }
	if (bPlayerOnly && Cast<AGoobunga_Player>(OtherActor))
	{
		if (UMissionSubsystem* MS = GetWorld()->GetSubsystem<UMissionSubsystem>())
		{
			for (auto& Event : ExitEvents) { MS->ReceiveEvent(Event); }
			bHasExitTriggered = true;
		}
	}
}
