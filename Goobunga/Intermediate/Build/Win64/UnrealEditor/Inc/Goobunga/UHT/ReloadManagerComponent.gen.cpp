// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/ReloadManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UReloadManagerComponent
void UReloadManagerComponent::StaticRegisterNativesUReloadManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReloadManagerComponent);
UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister()
{
	return UReloadManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UReloadManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReloadManagerComponent.h" },
		{ "ModuleRelativePath", "ReloadManagerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReloadManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReloadManagerComponent_Statics::ClassParams = {
	&UReloadManagerComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReloadManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReloadManagerComponent()
{
	if (!Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton, Z_Construct_UClass_UReloadManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReloadManagerComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UReloadManagerComponent>()
{
	return UReloadManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadManagerComponent);
UReloadManagerComponent::~UReloadManagerComponent() {}
// End Class UReloadManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReloadManagerComponent, UReloadManagerComponent::StaticClass, TEXT("UReloadManagerComponent"), &Z_Registration_Info_UClass_UReloadManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReloadManagerComponent), 2853576153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_3950427914(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_ReloadManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
