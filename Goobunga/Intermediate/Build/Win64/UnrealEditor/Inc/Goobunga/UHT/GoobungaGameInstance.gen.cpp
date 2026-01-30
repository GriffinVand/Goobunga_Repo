// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/GoobungaGameInstance.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobungaGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaGameInstance();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaGameInstance_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UGoobungaGameInstance
void UGoobungaGameInstance::StaticRegisterNativesUGoobungaGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoobungaGameInstance);
UClass* Z_Construct_UClass_UGoobungaGameInstance_NoRegister()
{
	return UGoobungaGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGoobungaGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GoobungaGameInstance.h" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefPrimaryWeapon_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefSecondaryWeapon_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefPrimaryWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefSecondaryWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoobungaGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefPrimaryWeapon = { "DefPrimaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefPrimaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefPrimaryWeapon_MetaData), NewProp_DefPrimaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSecondaryWeapon = { "DefSecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefSecondaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefSecondaryWeapon_MetaData), NewProp_DefSecondaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefPrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSecondaryWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGoobungaGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoobungaGameInstance_Statics::ClassParams = {
	&UGoobungaGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoobungaGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGoobungaGameInstance()
{
	if (!Z_Registration_Info_UClass_UGoobungaGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoobungaGameInstance.OuterSingleton, Z_Construct_UClass_UGoobungaGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoobungaGameInstance.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UGoobungaGameInstance>()
{
	return UGoobungaGameInstance::StaticClass();
}
UGoobungaGameInstance::UGoobungaGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGoobungaGameInstance);
UGoobungaGameInstance::~UGoobungaGameInstance() {}
// End Class UGoobungaGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoobungaGameInstance, UGoobungaGameInstance::StaticClass, TEXT("UGoobungaGameInstance"), &Z_Registration_Info_UClass_UGoobungaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoobungaGameInstance), 1963947395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_4096137216(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
