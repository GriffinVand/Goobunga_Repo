#include "LoadMenu.h"

#include "Goobunga/PersistentData/PersistentDataSubsystem.h"

void ULoadMenu::NativeConstruct()
{
	Super::NativeConstruct();
	
	LoadSlot1->InitializeLoadSlot(1);
	LoadSlot2->InitializeLoadSlot(2);
	LoadSlot3->InitializeLoadSlot(3);
}
