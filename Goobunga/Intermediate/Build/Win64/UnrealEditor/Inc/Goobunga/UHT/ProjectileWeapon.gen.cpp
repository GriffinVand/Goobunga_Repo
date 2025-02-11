// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/ProjectileWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileWeapon() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_AProjectileWeapon();
GOOBUNGA_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AProjectileWeapon
void AProjectileWeapon::StaticRegisterNativesAProjectileWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileWeapon);
UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister()
{
	return AProjectileWeapon::StaticClass();
}
struct Z_Construct_UClass_AProjectileWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/ProjectileWeapon.h" },
		{ "ModuleRelativePath", "Weapons/ProjectileWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams = {
	&AProjectileWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileWeapon()
{
	if (!Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton, Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AProjectileWeapon>()
{
	return AProjectileWeapon::StaticClass();
}
AProjectileWeapon::AProjectileWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileWeapon);
AProjectileWeapon::~AProjectileWeapon() {}
// End Class AProjectileWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileWeapon, AProjectileWeapon::StaticClass, TEXT("AProjectileWeapon"), &Z_Registration_Info_UClass_AProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileWeapon), 1038786552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_1861228432(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
