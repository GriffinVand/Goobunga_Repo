// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue/DialogueInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Interface UDialogueInterface
void UDialogueInterface::StaticRegisterNativesUDialogueInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueInterface);
UClass* Z_Construct_UClass_UDialogueInterface_NoRegister()
{
	return UDialogueInterface::StaticClass();
}
struct Z_Construct_UClass_UDialogueInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dialogue/DialogueInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDialogueInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueInterface_Statics::ClassParams = {
	&UDialogueInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueInterface()
{
	if (!Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton, Z_Construct_UClass_UDialogueInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogueInterface>()
{
	return UDialogueInterface::StaticClass();
}
UDialogueInterface::UDialogueInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueInterface);
UDialogueInterface::~UDialogueInterface() {}
// End Interface UDialogueInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueInterface, UDialogueInterface::StaticClass, TEXT("UDialogueInterface"), &Z_Registration_Info_UClass_UDialogueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueInterface), 3683499489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_334842833(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
