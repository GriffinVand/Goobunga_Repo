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
GOOBUNGA_API UClass* Z_Construct_UClass_UMissionData_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySaveData();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UGoobungaGameInstance Function SelectMission
struct Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics
{
	struct GoobungaGameInstance_eventSelectMission_Parms
	{
		UMissionData* MissionData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::NewProp_MissionData = { "MissionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoobungaGameInstance_eventSelectMission_Parms, MissionData), Z_Construct_UClass_UMissionData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::NewProp_MissionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoobungaGameInstance, nullptr, "SelectMission", nullptr, nullptr, Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::GoobungaGameInstance_eventSelectMission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::GoobungaGameInstance_eventSelectMission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoobungaGameInstance_SelectMission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoobungaGameInstance_SelectMission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoobungaGameInstance::execSelectMission)
{
	P_GET_OBJECT(UMissionData,Z_Param_MissionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectMission(Z_Param_MissionData);
	P_NATIVE_END;
}
// End Class UGoobungaGameInstance Function SelectMission

// Begin Class UGoobungaGameInstance
void UGoobungaGameInstance::StaticRegisterNativesUGoobungaGameInstance()
{
	UClass* Class = UGoobungaGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectMission", &UGoobungaGameInstance::execSelectMission },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefHealAbility_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefSmallAbility_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefLargeAbility_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMission_MetaData[] = {
		{ "Category", "GoobungaGameInstance" },
		{ "ModuleRelativePath", "GoobungaGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefPrimaryWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefSecondaryWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefHealAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefSmallAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefLargeAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMission;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoobungaGameInstance_SelectMission, "SelectMission" }, // 108552809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoobungaGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefPrimaryWeapon = { "DefPrimaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefPrimaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefPrimaryWeapon_MetaData), NewProp_DefPrimaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSecondaryWeapon = { "DefSecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefSecondaryWeapon), Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefSecondaryWeapon_MetaData), NewProp_DefSecondaryWeapon_MetaData) }; // 1263523386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefHealAbility = { "DefHealAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefHealAbility), Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefHealAbility_MetaData), NewProp_DefHealAbility_MetaData) }; // 3876655937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSmallAbility = { "DefSmallAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefSmallAbility), Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefSmallAbility_MetaData), NewProp_DefSmallAbility_MetaData) }; // 3876655937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefLargeAbility = { "DefLargeAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, DefLargeAbility), Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefLargeAbility_MetaData), NewProp_DefLargeAbility_MetaData) }; // 3876655937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_SelectedMission = { "SelectedMission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoobungaGameInstance, SelectedMission), Z_Construct_UClass_UMissionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMission_MetaData), NewProp_SelectedMission_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefPrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefHealAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefSmallAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_DefLargeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoobungaGameInstance_Statics::NewProp_SelectedMission,
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
	FuncInfo,
	Z_Construct_UClass_UGoobungaGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UGoobungaGameInstance, UGoobungaGameInstance::StaticClass, TEXT("UGoobungaGameInstance"), &Z_Registration_Info_UClass_UGoobungaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoobungaGameInstance), 1146649896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_745488824(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
