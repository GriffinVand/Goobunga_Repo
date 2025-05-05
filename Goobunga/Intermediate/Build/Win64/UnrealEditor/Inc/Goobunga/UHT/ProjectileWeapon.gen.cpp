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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapons/ProjectileWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileWeapon, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileWeapon);
AProjectileWeapon::~AProjectileWeapon() {}
// End Class AProjectileWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileWeapon, AProjectileWeapon::StaticClass, TEXT("AProjectileWeapon"), &Z_Registration_Info_UClass_AProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileWeapon), 2027446077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_2602247426(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
