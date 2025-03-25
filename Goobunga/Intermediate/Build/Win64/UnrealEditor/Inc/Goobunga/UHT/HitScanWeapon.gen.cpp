// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/HitScanWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitScanWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AHitScanWeapon();
GOOBUNGA_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AHitScanWeapon
void AHitScanWeapon::StaticRegisterNativesAHitScanWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitScanWeapon);
UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister()
{
	return AHitScanWeapon::StaticClass();
}
struct Z_Construct_UClass_AHitScanWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/HitScanWeapon.h" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrailProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitScanWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_TrailProjectileClass = { "TrailProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, TrailProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailProjectileClass_MetaData), NewProp_TrailProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSystem_MetaData), NewProp_TrailSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_TrailProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_TrailSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams = {
	&AHitScanWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitScanWeapon()
{
	if (!Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton, Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AHitScanWeapon>()
{
	return AHitScanWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitScanWeapon);
AHitScanWeapon::~AHitScanWeapon() {}
// End Class AHitScanWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 175873427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapon_h_1509902615(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_HitScanWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
