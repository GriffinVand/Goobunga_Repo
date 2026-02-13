// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobungaSaveFile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaSaveFile();
GOOBUNGA_API UClass* Z_Construct_UClass_UGoobungaSaveFile_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySaveData();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FWeaponSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponSaveData;
class UScriptStruct* FWeaponSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponSaveData, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("WeaponSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponSaveData.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FWeaponSaveData>()
{
	return FWeaponSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "WeaponSaveData" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponSaveData_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponSaveData, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSaveData_Statics::NewProp_WeaponClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"WeaponSaveData",
	Z_Construct_UScriptStruct_FWeaponSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSaveData_Statics::PropPointers),
	sizeof(FWeaponSaveData),
	alignof(FWeaponSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponSaveData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponSaveData.InnerSingleton;
}
// End ScriptStruct FWeaponSaveData

// Begin ScriptStruct FAbilitySaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilitySaveData;
class UScriptStruct* FAbilitySaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilitySaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilitySaveData, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("AbilitySaveData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilitySaveData.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FAbilitySaveData>()
{
	return FAbilitySaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilitySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "AbilitySaveData" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilitySaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilitySaveData_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilitySaveData, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilitySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitySaveData_Statics::NewProp_AbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilitySaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"AbilitySaveData",
	Z_Construct_UScriptStruct_FAbilitySaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySaveData_Statics::PropPointers),
	sizeof(FAbilitySaveData),
	alignof(FAbilitySaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilitySaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilitySaveData()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilitySaveData.InnerSingleton, Z_Construct_UScriptStruct_FAbilitySaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilitySaveData.InnerSingleton;
}
// End ScriptStruct FAbilitySaveData

// Begin Class UGoobungaSaveFile
void UGoobungaSaveFile::StaticRegisterNativesUGoobungaSaveFile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoobungaSaveFile);
UClass* Z_Construct_UClass_UGoobungaSaveFile_NoRegister()
{
	return UGoobungaSaveFile::StaticClass();
}
struct Z_Construct_UClass_UGoobungaSaveFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PersistentData/GoobungaSaveFile.h" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHub_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOwnedWeapons_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPrimaryWeapon_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSecondaryWeapon_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOwnedAbilities_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPrimaryAbility_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSecondaryAbility_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMoney_MetaData[] = {
		{ "Category", "GoobungaSaveFile" },
		{ "ModuleRelativePath", "PersistentData/GoobungaSaveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentHub;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerOwnedWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerOwnedWeapons;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerPrimaryWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSecondaryWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerOwnedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerOwnedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerPrimaryAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSecondaryAbility;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMoney;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoobungaSaveFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_CurrentHub = { "CurrentHub", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, CurrentHub), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHub_MetaData), NewProp_CurrentHub_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedWeapons_Inner = { "PlayerOwnedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(0, nullptr) }; // 1263523386
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedWeapons = { "PlayerOwnedWeapons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerOwnedWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOwnedWeapons_MetaData), NewProp_PlayerOwnedWeapons_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerPrimaryWeapon = { "PlayerPrimaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerPrimaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPrimaryWeapon_MetaData), NewProp_PlayerPrimaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerSecondaryWeapon = { "PlayerSecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerSecondaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSecondaryWeapon_MetaData), NewProp_PlayerSecondaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedAbilities_Inner = { "PlayerOwnedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(0, nullptr) }; // 3876655937
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedAbilities = { "PlayerOwnedAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerOwnedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOwnedAbilities_MetaData), NewProp_PlayerOwnedAbilities_MetaData) }; // 3876655937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerPrimaryAbility = { "PlayerPrimaryAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerPrimaryAbility), Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPrimaryAbility_MetaData), NewProp_PlayerPrimaryAbility_MetaData) }; // 3876655937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerSecondaryAbility = { "PlayerSecondaryAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerSecondaryAbility), Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSecondaryAbility_MetaData), NewProp_PlayerSecondaryAbility_MetaData) }; // 3876655937
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerMoney = { "PlayerMoney", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaSaveFile, PlayerMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMoney_MetaData), NewProp_PlayerMoney_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoobungaSaveFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_CurrentHub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerPrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerSecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerOwnedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerPrimaryAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerSecondaryAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaSaveFile_Statics::NewProp_PlayerMoney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaSaveFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGoobungaSaveFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaSaveFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoobungaSaveFile_Statics::ClassParams = {
	&UGoobungaSaveFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGoobungaSaveFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaSaveFile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoobungaSaveFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoobungaSaveFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGoobungaSaveFile()
{
	if (!Z_Registration_Info_UClass_UGoobungaSaveFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoobungaSaveFile.OuterSingleton, Z_Construct_UClass_UGoobungaSaveFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoobungaSaveFile.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UGoobungaSaveFile>()
{
	return UGoobungaSaveFile::StaticClass();
}
UGoobungaSaveFile::UGoobungaSaveFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGoobungaSaveFile);
UGoobungaSaveFile::~UGoobungaSaveFile() {}
// End Class UGoobungaSaveFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponSaveData::StaticStruct, Z_Construct_UScriptStruct_FWeaponSaveData_Statics::NewStructOps, TEXT("WeaponSaveData"), &Z_Registration_Info_UScriptStruct_WeaponSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponSaveData), 1263523386U) },
		{ FAbilitySaveData::StaticStruct, Z_Construct_UScriptStruct_FAbilitySaveData_Statics::NewStructOps, TEXT("AbilitySaveData"), &Z_Registration_Info_UScriptStruct_AbilitySaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilitySaveData), 3876655937U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoobungaSaveFile, UGoobungaSaveFile::StaticClass, TEXT("UGoobungaSaveFile"), &Z_Registration_Info_UClass_UGoobungaSaveFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoobungaSaveFile), 1395625278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_3939341462(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_PersistentData_GoobungaSaveFile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
