#include "MusicActor.h"

#include "MusicSubsystem.h"

AMusicActor::AMusicActor()
{
	PrimaryActorTick.bCanEverTick = true;
	AudioComp = CreateDefaultSubobject<UFMODAudioComponent>(FName("AudioComp"));
}

void AMusicActor::BeginPlay()
{
	Super::BeginPlay();
	SetMusicActor();
	
}

void AMusicActor::SetMusicActor()
{
	if (UMusicSubsystem* MS = GetGameInstance()->GetSubsystem<UMusicSubsystem>())
	{
		MS->SetMusicActor(this);
		PlayMusic(DefaultWorldMusic, 0);
	} 
	else
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AMusicActor::SetMusicActor);
	}
}

void AMusicActor::PlayMusic(UFMODEvent* Event, int32 Priority)
{
	if (Priority < CurrentPriority) { return; }
	AudioComp->Stop();
	AudioComp->OnEventStopped.RemoveAll(this);
	AudioComp->OnEventStopped.AddDynamic(this, &AMusicActor::OnEventEnded);
	AudioComp->SetEvent(Event);
	AudioComp->Play();
	CurrentPriority = Priority;
}

void AMusicActor::StopMusic()
{
	AudioComp->Stop();
}

void AMusicActor::OnEventEnded()
{
	CurrentPriority = 0;
}

void AMusicActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

