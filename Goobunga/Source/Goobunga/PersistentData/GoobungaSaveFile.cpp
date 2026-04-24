#include "GoobungaSaveFile.h"
#include "Goobunga/PlayerCallables.h"

void UItemData::OnPurchased(AActor* Purchaser)
{
	UE_LOG(LogTemp, Display, TEXT("Purchased Item"));
	if (IPlayerCallables* PCI = Cast<IPlayerCallables>(Purchaser))
	{
			PCI->RecieveItem(ItemType, this);
	}
}
