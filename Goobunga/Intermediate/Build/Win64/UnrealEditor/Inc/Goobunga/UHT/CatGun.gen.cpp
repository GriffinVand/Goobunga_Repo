// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/CatGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatGun() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_ACatGun();
GOOBUNGA_API UClass* Z_Construct_UClass_ACatGun_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AHitScanWeapon();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class ACatGun
void ACatGun::StaticRegisterNativesACatGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACatGun);
UClass* Z_Construct_UClass_ACatGun_NoRegister()
{
	return ACatGun::StaticClass();
}
struct Z_Construct_UClass_ACatGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/CatGun.h" },
		{ "ModuleRelativePath", "Weapons/CatGun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACatGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACatGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACatGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACatGun_Statics::ClassParams = {
	&ACatGun::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACatGun_Statics::Class_MetaDataParams), Z_Construct_UClass_ACatGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACatGun()
{
	if (!Z_Registration_Info_UClass_ACatGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACatGun.OuterSingleton, Z_Construct_UClass_ACatGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACatGun.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ACatGun>()
{
	return ACatGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACatGun);
ACatGun::~ACatGun() {}
// End Class ACatGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_CatGun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACatGun, ACatGun::StaticClass, TEXT("ACatGun"), &Z_Registration_Info_UClass_ACatGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACatGun), 1916399490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_CatGun_h_1991694582(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_CatGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_CatGun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
