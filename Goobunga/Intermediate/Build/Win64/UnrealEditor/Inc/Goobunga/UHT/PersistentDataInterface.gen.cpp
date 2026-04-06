// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/PersistentData/PersistentDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UPersistentDataInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UPersistentDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UPersistentDataInterface
void UPersistentDataInterface::StaticRegisterNativesUPersistentDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentDataInterface);
UClass* Z_Construct_UClass_UPersistentDataInterface_NoRegister()
{
	return UPersistentDataInterface::StaticClass();
}
struct Z_Construct_UClass_UPersistentDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PersistentData/PersistentDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPersistentDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPersistentDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentDataInterface_Statics::ClassParams = {
	&UPersistentDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersistentDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPersistentDataInterface()
{
	if (!Z_Registration_Info_UClass_UPersistentDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentDataInterface.OuterSingleton, Z_Construct_UClass_UPersistentDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPersistentDataInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPersistentDataInterface>()
{
	return UPersistentDataInterface::StaticClass();
}
UPersistentDataInterface::UPersistentDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentDataInterface);
UPersistentDataInterface::~UPersistentDataInterface() {}
// End Interface UPersistentDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentDataInterface, UPersistentDataInterface::StaticClass, TEXT("UPersistentDataInterface"), &Z_Registration_Info_UClass_UPersistentDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentDataInterface), 772352636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_4164889454(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
