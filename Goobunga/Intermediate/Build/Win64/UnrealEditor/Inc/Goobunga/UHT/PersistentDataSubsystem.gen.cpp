// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/PersistentData/PersistentDataSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentDataSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaSaveFile_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPersistentDataSubsystem();
GOOBUNGA_API UClass* Z_Construct_UClass_UPersistentDataSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPersistentDataSubsystem
void UPersistentDataSubsystem::StaticRegisterNativesUPersistentDataSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentDataSubsystem);
UClass* Z_Construct_UClass_UPersistentDataSubsystem_NoRegister()
{
	return UPersistentDataSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPersistentDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PersistentData/PersistentDataSubsystem.h" },
		{ "ModuleRelativePath", "PersistentData/PersistentDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveFile_MetaData[] = {
		{ "Category", "PersistentDataSubsystem" },
		{ "ModuleRelativePath", "PersistentData/PersistentDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSaves_MetaData[] = {
		{ "Category", "PersistentDataSubsystem" },
		{ "ModuleRelativePath", "PersistentData/PersistentDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveFile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistentDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentDataSubsystem_Statics::NewProp_CurrentSaveFile = { "CurrentSaveFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentDataSubsystem, CurrentSaveFile), Z_Construct_UClass_UGoobungaSaveFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveFile_MetaData), NewProp_CurrentSaveFile_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentDataSubsystem_Statics::NewProp_MaxSaves = { "MaxSaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentDataSubsystem, MaxSaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSaves_MetaData), NewProp_MaxSaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersistentDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentDataSubsystem_Statics::NewProp_CurrentSaveFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentDataSubsystem_Statics::NewProp_MaxSaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPersistentDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentDataSubsystem_Statics::ClassParams = {
	&UPersistentDataSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPersistentDataSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersistentDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPersistentDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UPersistentDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentDataSubsystem.OuterSingleton, Z_Construct_UClass_UPersistentDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPersistentDataSubsystem.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPersistentDataSubsystem>()
{
	return UPersistentDataSubsystem::StaticClass();
}
UPersistentDataSubsystem::UPersistentDataSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentDataSubsystem);
UPersistentDataSubsystem::~UPersistentDataSubsystem() {}
// End Class UPersistentDataSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentDataSubsystem, UPersistentDataSubsystem::StaticClass, TEXT("UPersistentDataSubsystem"), &Z_Registration_Info_UClass_UPersistentDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentDataSubsystem), 646927799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataSubsystem_h_1463445023(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_PersistentDataSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
