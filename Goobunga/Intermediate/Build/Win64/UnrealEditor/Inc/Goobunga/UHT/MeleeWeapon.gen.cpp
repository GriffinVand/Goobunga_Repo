// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/MeleeWeapons/MeleeWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeapon() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_AMeleeWeapon();
GOOBUNGA_API UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AMeleeWeapon
void AMeleeWeapon::StaticRegisterNativesAMeleeWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeWeapon);
UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister()
{
	return AMeleeWeapon::StaticClass();
}
struct Z_Construct_UClass_AMeleeWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/MeleeWeapons/MeleeWeapon.h" },
		{ "ModuleRelativePath", "Weapons/MeleeWeapons/MeleeWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMeleeWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams = {
	&AMeleeWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMeleeWeapon()
{
	if (!Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton, Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AMeleeWeapon>()
{
	return AMeleeWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeWeapon);
AMeleeWeapon::~AMeleeWeapon() {}
// End Class AMeleeWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapons_MeleeWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeWeapon, AMeleeWeapon::StaticClass, TEXT("AMeleeWeapon"), &Z_Registration_Info_UClass_AMeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeWeapon), 1076704204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapons_MeleeWeapon_h_1935473232(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapons_MeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapons_MeleeWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
