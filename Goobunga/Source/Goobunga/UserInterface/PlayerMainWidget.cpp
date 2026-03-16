#include "PlayerMainWidget.h"

#include "Goobunga/Combat/CombatCallables.h"

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
