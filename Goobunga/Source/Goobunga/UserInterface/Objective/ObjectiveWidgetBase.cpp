#include "ObjectiveWidgetBase.h"

#include "CommonLazyImage.h"
#include "CommonTextBlock.h"
#include "Components/Overlay.h"

void UObjectiveWidgetBase::NativeConstruct()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UObjectiveWidgetBase::InitializeUI(const FMissionObjective& Objective)
{
	if (Objective.ObjectiveIcon) { ObjectiveImage->SetBrushFromTexture(Objective.ObjectiveIcon); }
	SetVisibility(ESlateVisibility::HitTestInvisible);
	ObjectiveGoalText->SetText(Objective.ObjectiveDescription);
	if (Objective.bIsProgressive) { ObjectiveProgressText->SetVisibility(ESlateVisibility::HitTestInvisible); ObjectiveProgressText->SetText(FText::FromString(FString::FromInt(Objective.CurrProgress) + FString(" / ") + FString::FromInt(Objective.ReqProgress))); }
	else { ObjectiveProgressText->SetVisibility(ESlateVisibility::Collapsed); }
	PlayAnimation(StartAnim);
}

void UObjectiveWidgetBase::UpdateUI(const FMissionObjective& Objective)
{
	ObjectiveProgressText->SetText(FText::FromString(FString::FromInt(Objective.CurrProgress) + FString(" / ") + FString::FromInt(Objective.ReqProgress)));
}
