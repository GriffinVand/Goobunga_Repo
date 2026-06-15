#include "GenericButton.h"

#include "FMODBlueprintStatics.h"

void UGenericButton::NativeConstruct()
{
	OnClicked().RemoveAll(this);
	OnHovered().RemoveAll(this);
	OnClicked().AddUObject(this, &UGenericButton::HandleClicked);
	OnHovered().AddUObject(this, &UGenericButton::HandleHovered);
}

void UGenericButton::HandleClicked()
{
	if (!ClickSound) { return; }
	UFMODBlueprintStatics::PlayEvent2D(this, ClickSound, true);
}

void UGenericButton::HandleHovered()
{
	if (!HoverSound) { return; }
	UFMODBlueprintStatics::PlayEvent2D(this, HoverSound, true);
}
