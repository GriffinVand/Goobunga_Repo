#include "PlayerMainWidget.h"

#include "CommonLazyImage.h"
#include "PlayerReticleWidget.h"
#include "Goobunga/Combat/CombatCallables.h"

void UPlayerMainWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ReticleWidget->SetVisibility(ESlateVisibility::Hidden);
}

TOptional<FUIInputConfig> UPlayerMainWidget::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::Game, EMouseCaptureMode::NoCapture, EMouseLockMode::LockOnCapture);
}

void UPlayerMainWidget::HandleDamageEffect(EDamageType DamageType)
{
	switch (DamageType)
	{
	case EDamageType::Goo:
		if (GooFade && GooScreen) { PlayAnimation(GooFade); }
		break;
	default:
		if (BloodFade && BloodScreen) { PlayAnimation(BloodFade); }
		break;
	}
}

void UPlayerMainWidget::HandleHitEffect(EDamageResult DamageResult)
{
	switch (DamageResult)
	{
	case EDamageResult::None:
		return;
	case EDamageResult::Critical:
		HitImage->SetBrushFromTexture(CritHitTexture, true);
		PlayAnimation(HitAnimation);
		break;
	case EDamageResult::Default:
		HitImage->SetBrushFromTexture(RegHitTexture, true);
		PlayAnimation(HitAnimation);
		break;
	case EDamageResult::Kill:
		HitImage->SetBrushFromTexture(KillHitTexture, true);
		PlayAnimation(HitAnimation);
		break;
	default:
		return;
	}
}

void UPlayerMainWidget::InitializeReticle(UTexture2D* Texture)
{
	if (!Texture) { UE_LOG(LogTemp, Error, TEXT("Invalid texture PMW::InitializeReticle")); return; }
	UE_LOG(LogTemp, Error, TEXT("Set texture PMW::InitializeReticle"));
	ReticleWidget->MainReticle->SetBrushFromTexture(Texture);
}

void UPlayerMainWidget::UpdateReticle(bool bVisible, float Scale)
{
	//UE_LOG(LogTemp, Error, TEXT("Update reticle %s"), bVisible ? TEXT("Visible") : TEXT("Hidden"));
	ReticleWidget->SetRenderScale(FVector2D(Scale));
	if (bVisible) { ReticleWidget->SetVisibility(ESlateVisibility::Visible); return; }
	ReticleWidget->SetVisibility(ESlateVisibility::Hidden);
}
