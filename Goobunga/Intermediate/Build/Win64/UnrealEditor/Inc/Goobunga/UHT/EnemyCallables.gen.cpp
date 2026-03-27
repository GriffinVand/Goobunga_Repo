// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/EnemyCallables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCallables() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UEnemyCallables();
GOOBUNGA_API UClass* Z_Construct_UClass_UEnemyCallables_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UEnemyCallables
void UEnemyCallables::StaticRegisterNativesUEnemyCallables()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCallables);
UClass* Z_Construct_UClass_UEnemyCallables_NoRegister()
{
	return UEnemyCallables::StaticClass();
}
struct Z_Construct_UClass_UEnemyCallables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enemies/EnemyCallables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyCallables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyCallables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCallables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCallables_Statics::ClassParams = {
	&UEnemyCallables::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCallables_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCallables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyCallables()
{
	if (!Z_Registration_Info_UClass_UEnemyCallables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCallables.OuterSingleton, Z_Construct_UClass_UEnemyCallables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyCallables.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UEnemyCallables>()
{
	return UEnemyCallables::StaticClass();
}
UEnemyCallables::UEnemyCallables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCallables);
UEnemyCallables::~UEnemyCallables() {}
// End Interface UEnemyCallables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCallables, UEnemyCallables::StaticClass, TEXT("UEnemyCallables"), &Z_Registration_Info_UClass_UEnemyCallables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCallables), 3217297164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_3351407026(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyCallables_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
