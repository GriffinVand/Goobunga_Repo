#include "MissionEventTrigger.h"

AMissionEventTrigger::AMissionEventTrigger()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMissionEventTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMissionEventTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

