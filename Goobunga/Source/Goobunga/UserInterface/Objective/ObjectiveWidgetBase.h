#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Goobunga/Missions/MissionData.h"
#include "ObjectiveWidgetBase.generated.h"

class UOverlay;
struct FMissionObjective;
class UCommonLazyImage;
class UCommonTextBlock;

UCLASS()
class GOOBUNGA_API UObjectiveWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	
	void NativeConstruct() override;
	void InitializeUI(const FMissionObjective& Objective);
	void UpdateUI(const FMissionObjective& Objective);
	
	UPROPERTY(EditAnywhere, meta=(BindWidgetAnim), Transient)
	UWidgetAnimation* CompleteAnim;
	UPROPERTY(EditAnywhere, meta=(BindWidgetAnim), Transient)
	UWidgetAnimation* StartAnim;
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UOverlay* ObjectiveContainer;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* ObjectiveGoalText;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonTextBlock* ObjectiveProgressText;
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UCommonLazyImage* ObjectiveImage;
};
