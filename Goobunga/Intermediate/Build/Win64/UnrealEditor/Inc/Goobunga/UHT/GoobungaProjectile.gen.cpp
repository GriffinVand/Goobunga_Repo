// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/Projectiles/GoobungaProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobungaProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobungaProjectile();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobungaProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AGoobungaProjectile
void AGoobungaProjectile::StaticRegisterNativesAGoobungaProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoobungaProjectile);
UClass* Z_Construct_UClass_AGoobungaProjectile_NoRegister()
{
	return AGoobungaProjectile::StaticClass();
}
struct Z_Construct_UClass_AGoobungaProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Projectiles/GoobungaProjectile.h" },
		{ "ModuleRelativePath", "Weapons/Projectiles/GoobungaProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoobungaProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGoobungaProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobungaProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoobungaProjectile_Statics::ClassParams = {
	&AGoobungaProjectile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobungaProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoobungaProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoobungaProjectile()
{
	if (!Z_Registration_Info_UClass_AGoobungaProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoobungaProjectile.OuterSingleton, Z_Construct_UClass_AGoobungaProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoobungaProjectile.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AGoobungaProjectile>()
{
	return AGoobungaProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoobungaProjectile);
AGoobungaProjectile::~AGoobungaProjectile() {}
// End Class AGoobungaProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoobungaProjectile, AGoobungaProjectile::StaticClass, TEXT("AGoobungaProjectile"), &Z_Registration_Info_UClass_AGoobungaProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoobungaProjectile), 3324140552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_2189614618(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
