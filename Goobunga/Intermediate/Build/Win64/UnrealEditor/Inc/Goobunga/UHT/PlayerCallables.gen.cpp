// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/PlayerCallables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCallables() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerCallables();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerCallables_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UPlayerCallables
void UPlayerCallables::StaticRegisterNativesUPlayerCallables()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCallables);
UClass* Z_Construct_UClass_UPlayerCallables_NoRegister()
{
	return UPlayerCallables::StaticClass();
}
struct Z_Construct_UClass_UPlayerCallables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerCallables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerCallables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerCallables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCallables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCallables_Statics::ClassParams = {
	&UPlayerCallables::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCallables_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCallables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerCallables()
{
	if (!Z_Registration_Info_UClass_UPlayerCallables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCallables.OuterSingleton, Z_Construct_UClass_UPlayerCallables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerCallables.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerCallables>()
{
	return UPlayerCallables::StaticClass();
}
UPlayerCallables::UPlayerCallables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCallables);
UPlayerCallables::~UPlayerCallables() {}
// End Interface UPlayerCallables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerCallables_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCallables, UPlayerCallables::StaticClass, TEXT("UPlayerCallables"), &Z_Registration_Info_UClass_UPlayerCallables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCallables), 4286987948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerCallables_h_3069184612(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerCallables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerCallables_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
