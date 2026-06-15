#include "BananaGun.h"

void ABananaGun::BeginPlay()
{
	Super::BeginPlay();
	BananaMat = UMaterialInstanceDynamic::Create(WeaponMesh->GetMaterial(0), this);
	if (BananaMat) { WeaponMesh->SetMaterial(0, BananaMat); }
}

void ABananaGun::HandleReloadPhaseStart(int32 Phase)
{
	Super::HandleReloadPhaseStart(Phase);
	UpdateBananaVisibility(Phase);
}

void ABananaGun::HandleReloadPhaseFinish(int32 Phase)
{
	Super::HandleReloadPhaseFinish(Phase);
	UpdateBananaVisibility(Phase);
}

void ABananaGun::UpdateBananaVisibility(int32 Phase)
{
	if (BananaVisibilityMap.Contains(Phase) && BananaMat)
	{
		BananaMat->SetScalarParameterValue("MaskAlpha", BananaVisibilityMap[Phase]);
	}
}

void ABananaGun::HandleReloadFinished()
{
	BananaMat->SetScalarParameterValue("MaskAlpha", 100);
}
