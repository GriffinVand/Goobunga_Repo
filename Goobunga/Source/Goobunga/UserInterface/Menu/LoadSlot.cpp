#include "LoadSlot.h"

#include "CommonButtonBase.h"
#include "CommonTextBlock.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Goobunga/PersistentData/PersistentDataSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "./GenericButton.h"

void ULoadSlot::InitializeLoadSlot(int32 ID)
{
	LoadSlotID = FString::FromInt(ID);
	if (UGameplayStatics::DoesSaveGameExist(FString::FromInt(ID), 0))
	{
		LoadSlotButton->ButtonText->SetText(FText::FromString("Load"));
		LoadSlotButton->OnClicked().AddUObject(this, &ULoadSlot::LoadSlot);
		return;
	}
	LoadSlotButton->ButtonText->SetText(FText::FromString("New"));
	LoadSlotButton->OnClicked().AddUObject(this, &ULoadSlot::LoadNewSlot);
}

void ULoadSlot::LoadSlot()
{
	if (UPersistentDataSubsystem* PDS = GetGameInstance()->GetSubsystem<UPersistentDataSubsystem>())
	{
		PDS->LoadGame(LoadSlotID);
	}
}

void ULoadSlot::LoadNewSlot()
{
	if (UPersistentDataSubsystem* PDS = GetGameInstance()->GetSubsystem<UPersistentDataSubsystem>())
	{
		PDS->NewSaveGame(LoadSlotID);
	}
	
}
