// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/InDamageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInDamageInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UInDamageInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UInDamageInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UInDamageInterface
void UInDamageInterface::StaticRegisterNativesUInDamageInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInDamageInterface);
UClass* Z_Construct_UClass_UInDamageInterface_NoRegister()
{
	return UInDamageInterface::StaticClass();
}
struct Z_Construct_UClass_UInDamageInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/InDamageInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInDamageInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInDamageInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInDamageInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInDamageInterface_Statics::ClassParams = {
	&UInDamageInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInDamageInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInDamageInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInDamageInterface()
{
	if (!Z_Registration_Info_UClass_UInDamageInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInDamageInterface.OuterSingleton, Z_Construct_UClass_UInDamageInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInDamageInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UInDamageInterface>()
{
	return UInDamageInterface::StaticClass();
}
UInDamageInterface::UInDamageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInDamageInterface);
UInDamageInterface::~UInDamageInterface() {}
// End Interface UInDamageInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInDamageInterface, UInDamageInterface::StaticClass, TEXT("UInDamageInterface"), &Z_Registration_Info_UClass_UInDamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInDamageInterface), 3360075539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_1578693757(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
