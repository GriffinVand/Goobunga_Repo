// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/CombatCallables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCallables() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UCombatCallables
void UCombatCallables::StaticRegisterNativesUCombatCallables()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatCallables);
UClass* Z_Construct_UClass_UCombatCallables_NoRegister()
{
	return UCombatCallables::StaticClass();
}
struct Z_Construct_UClass_UCombatCallables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Combat/CombatCallables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatCallables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatCallables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCallables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatCallables_Statics::ClassParams = {
	&UCombatCallables::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCallables_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatCallables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatCallables()
{
	if (!Z_Registration_Info_UClass_UCombatCallables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatCallables.OuterSingleton, Z_Construct_UClass_UCombatCallables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatCallables.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UCombatCallables>()
{
	return UCombatCallables::StaticClass();
}
UCombatCallables::UCombatCallables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCallables);
UCombatCallables::~UCombatCallables() {}
// End Interface UCombatCallables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatCallables, UCombatCallables::StaticClass, TEXT("UCombatCallables"), &Z_Registration_Info_UClass_UCombatCallables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatCallables), 1814843369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_868850643(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
