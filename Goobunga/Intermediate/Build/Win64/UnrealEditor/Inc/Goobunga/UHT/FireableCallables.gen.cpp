// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/FireableCallables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireableCallables() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireableCallables();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireableCallables_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UFireableCallables
void UFireableCallables::StaticRegisterNativesUFireableCallables()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireableCallables);
UClass* Z_Construct_UClass_UFireableCallables_NoRegister()
{
	return UFireableCallables::StaticClass();
}
struct Z_Construct_UClass_UFireableCallables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FireableCallables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireableCallables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFireableCallables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireableCallables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireableCallables_Statics::ClassParams = {
	&UFireableCallables::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireableCallables_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireableCallables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireableCallables()
{
	if (!Z_Registration_Info_UClass_UFireableCallables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireableCallables.OuterSingleton, Z_Construct_UClass_UFireableCallables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireableCallables.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UFireableCallables>()
{
	return UFireableCallables::StaticClass();
}
UFireableCallables::UFireableCallables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireableCallables);
UFireableCallables::~UFireableCallables() {}
// End Interface UFireableCallables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireableCallables, UFireableCallables::StaticClass, TEXT("UFireableCallables"), &Z_Registration_Info_UClass_UFireableCallables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireableCallables), 1019109838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_2868095281(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_FireableCallables_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
