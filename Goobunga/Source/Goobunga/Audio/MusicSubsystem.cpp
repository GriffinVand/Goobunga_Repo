#include "MusicSubsystem.h"

#include "MusicActor.h"

void UMusicSubsystem::PlayMusic(UFMODEvent* Event, int32 Priority)
{
	if (CurrMusicActor != nullptr) { CurrMusicActor->PlayMusic(Event, Priority); }
}

void UMusicSubsystem::StopMusic()
{
	if (CurrMusicActor != nullptr) { CurrMusicActor->StopMusic(); }
}

void UMusicSubsystem::PlayDefault()
{
	if (CurrMusicActor != nullptr) { CurrMusicActor->PlayMusic(CurrMusicActor->DefaultWorldMusic, 0); }
}
