// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/LaunchInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_ULaunchInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_ULaunchInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface ULaunchInterface
void ULaunchInterface::StaticRegisterNativesULaunchInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULaunchInterface);
UClass* Z_Construct_UClass_ULaunchInterface_NoRegister()
{
	return ULaunchInterface::StaticClass();
}
struct Z_Construct_UClass_ULaunchInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/LaunchInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILaunchInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULaunchInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULaunchInterface_Statics::ClassParams = {
	&ULaunchInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULaunchInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULaunchInterface()
{
	if (!Z_Registration_Info_UClass_ULaunchInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULaunchInterface.OuterSingleton, Z_Construct_UClass_ULaunchInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULaunchInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ULaunchInterface>()
{
	return ULaunchInterface::StaticClass();
}
ULaunchInterface::ULaunchInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULaunchInterface);
ULaunchInterface::~ULaunchInterface() {}
// End Interface ULaunchInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULaunchInterface, ULaunchInterface::StaticClass, TEXT("ULaunchInterface"), &Z_Registration_Info_UClass_ULaunchInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULaunchInterface), 3748280936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_3024269340(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_LaunchInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
