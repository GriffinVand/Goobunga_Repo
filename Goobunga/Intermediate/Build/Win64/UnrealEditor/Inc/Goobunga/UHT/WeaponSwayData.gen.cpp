// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/WeaponSwayData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSwayData() {}

// Begin Cross Module References
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSwayData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FWeaponSwayData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponSwayData;
class UScriptStruct* FWeaponSwayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponSwayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponSwayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponSwayData, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("WeaponSwayData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponSwayData.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FWeaponSwayData>()
{
	return FWeaponSwayData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponSwayData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponSwayData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideMovement_MetaData[] = {
		{ "Category", "WeaponSwayData" },
		{ "ModuleRelativePath", "Weapons/WeaponSwayData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookX_MetaData[] = {
		{ "Category", "WeaponSwayData" },
		{ "ModuleRelativePath", "Weapons/WeaponSwayData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookY_MetaData[] = {
		{ "Category", "WeaponSwayData" },
		{ "ModuleRelativePath", "Weapons/WeaponSwayData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponSwayData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_SideMovement = { "SideMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponSwayData, SideMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideMovement_MetaData), NewProp_SideMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_LookX = { "LookX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponSwayData, LookX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookX_MetaData), NewProp_LookX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_LookY = { "LookY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponSwayData, LookY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookY_MetaData), NewProp_LookY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponSwayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_SideMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_LookX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewProp_LookY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSwayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponSwayData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"WeaponSwayData",
	Z_Construct_UScriptStruct_FWeaponSwayData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSwayData_Statics::PropPointers),
	sizeof(FWeaponSwayData),
	alignof(FWeaponSwayData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSwayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponSwayData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponSwayData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponSwayData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponSwayData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponSwayData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponSwayData.InnerSingleton;
}
// End ScriptStruct FWeaponSwayData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponSwayData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponSwayData::StaticStruct, Z_Construct_UScriptStruct_FWeaponSwayData_Statics::NewStructOps, TEXT("WeaponSwayData"), &Z_Registration_Info_UScriptStruct_WeaponSwayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponSwayData), 391608324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponSwayData_h_3758415071(TEXT("/Script/Goobunga"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponSwayData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponSwayData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
