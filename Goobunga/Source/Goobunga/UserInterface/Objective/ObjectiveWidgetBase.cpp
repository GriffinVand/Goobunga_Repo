#include "ObjectiveWidgetBase.h"

#include "CommonLazyImage.h"
#include "CommonTextBlock.h"
#include "Components/Overlay.h"

void UObjectiveWidgetBase::NativeConstruct()
{
	ObjectiveContainer->SetVisibility(ESlateVisibility::Hidden);
}

void UObjectiveWidgetBase::InitializeUI(const FMissionObjective& Objective)
{
	if (Objective.ObjectiveIcon) { ObjectiveImage->SetBrushFromTexture(Objective.ObjectiveIcon); }
	ObjectiveGoalText->SetText(Objective.ObjectiveDescription);
	ObjectiveProgressText->SetText(FText::FromString(FString::FromInt(Objective.CurrProgress) + FString(" / ") + FString::FromInt(Objective.ReqProgress)));
}

void UObjectiveWidgetBase::UpdateUI(const FMissionObjective& Objective)
{
	ObjectiveProgressText->SetText(FText::FromString(FString::FromInt(Objective.CurrProgress) + FString(" / ") + FString::FromInt(Objective.ReqProgress)));
}
