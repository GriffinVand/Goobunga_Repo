// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/HitScanWeapons/FlintLockGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlintLockGun() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_AFlintLockGun();
GOOBUNGA_API UClass* Z_Construct_UClass_AFlintLockGun_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AHitScanWeapon();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AFlintLockGun
void AFlintLockGun::StaticRegisterNativesAFlintLockGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlintLockGun);
UClass* Z_Construct_UClass_AFlintLockGun_NoRegister()
{
	return AFlintLockGun::StaticClass();
}
struct Z_Construct_UClass_AFlintLockGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/HitScanWeapons/FlintLockGun.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapons/FlintLockGun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlintLockGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFlintLockGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlintLockGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlintLockGun_Statics::ClassParams = {
	&AFlintLockGun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlintLockGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlintLockGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlintLockGun()
{
	if (!Z_Registration_Info_UClass_AFlintLockGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlintLockGun.OuterSingleton, Z_Construct_UClass_AFlintLockGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlintLockGun.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AFlintLockGun>()
{
	return AFlintLockGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlintLockGun);
AFlintLockGun::~AFlintLockGun() {}
// End Class AFlintLockGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapons_FlintLockGun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlintLockGun, AFlintLockGun::StaticClass, TEXT("AFlintLockGun"), &Z_Registration_Info_UClass_AFlintLockGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlintLockGun), 3623134424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapons_FlintLockGun_h_2471365798(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapons_FlintLockGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapons_FlintLockGun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
