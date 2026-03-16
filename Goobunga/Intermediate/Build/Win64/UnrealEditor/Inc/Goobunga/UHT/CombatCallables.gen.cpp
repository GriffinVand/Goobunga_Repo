// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/CombatCallables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCallables() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAllegiance();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EDamageResult();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EDamageType();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EDamageResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageResult;
static UEnum* EDamageResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EDamageResult, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EDamageResult"));
	}
	return Z_Registration_Info_UEnum_EDamageResult.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EDamageResult>()
{
	return EDamageResult_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EDamageResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Critical.DisplayName", "Critical" },
		{ "Critical.Name", "EDamageResult::Critical" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EDamageResult::Default" },
		{ "Kill.DisplayName", "Kill" },
		{ "Kill.Name", "EDamageResult::Kill" },
		{ "ModuleRelativePath", "Combat/CombatCallables.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDamageResult::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageResult::None", (int64)EDamageResult::None },
		{ "EDamageResult::Default", (int64)EDamageResult::Default },
		{ "EDamageResult::Critical", (int64)EDamageResult::Critical },
		{ "EDamageResult::Kill", (int64)EDamageResult::Kill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EDamageResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EDamageResult",
	"EDamageResult",
	Z_Construct_UEnum_Goobunga_EDamageResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EDamageResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EDamageResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EDamageResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EDamageResult()
{
	if (!Z_Registration_Info_UEnum_EDamageResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageResult.InnerSingleton, Z_Construct_UEnum_Goobunga_EDamageResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageResult.InnerSingleton;
}
// End Enum EDamageResult

// Begin Interface UCombatCallables Function CombatDamage
struct Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics
{
	struct CombatCallables_eventCombatDamage_Parms
	{
		AActor* DamageDealer;
		float Damage;
		EDamageType DamageType;
		EAllegiance Allegiance;
		EDamageResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/CombatCallables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageDealer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Allegiance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Allegiance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageDealer = { "DamageDealer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCallables_eventCombatDamage_Parms, DamageDealer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCallables_eventCombatDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCallables_eventCombatDamage_Parms, DamageType), Z_Construct_UEnum_Goobunga_EDamageType, METADATA_PARAMS(0, nullptr) }; // 2919233219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Allegiance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Allegiance = { "Allegiance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCallables_eventCombatDamage_Parms, Allegiance), Z_Construct_UEnum_Goobunga_EAllegiance, METADATA_PARAMS(0, nullptr) }; // 3680310722
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCallables_eventCombatDamage_Parms, ReturnValue), Z_Construct_UEnum_Goobunga_EDamageResult, METADATA_PARAMS(0, nullptr) }; // 352128526
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageDealer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Allegiance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_Allegiance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCallables, nullptr, "CombatDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::CombatCallables_eventCombatDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::CombatCallables_eventCombatDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatCallables_CombatDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCallables_CombatDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCallables::execCombatDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamageDealer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_ENUM(EDamageType,Z_Param_DamageType);
	P_GET_ENUM(EAllegiance,Z_Param_Allegiance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDamageResult*)Z_Param__Result=P_THIS->CombatDamage(Z_Param_DamageDealer,Z_Param_Damage,EDamageType(Z_Param_DamageType),EAllegiance(Z_Param_Allegiance));
	P_NATIVE_END;
}
// End Interface UCombatCallables Function CombatDamage

// Begin Interface UCombatCallables
void UCombatCallables::StaticRegisterNativesUCombatCallables()
{
	UClass* Class = UCombatCallables::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CombatDamage", &ICombatCallables::execCombatDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatCallables);
UClass* Z_Construct_UClass_UCombatCallables_NoRegister()
{
	return UCombatCallables::StaticClass();
}
struct Z_Construct_UClass_UCombatCallables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Combat/CombatCallables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatCallables_CombatDamage, "CombatDamage" }, // 2726991629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatCallables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatCallables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCallables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatCallables_Statics::ClassParams = {
	&UCombatCallables::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCallables_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatCallables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatCallables()
{
	if (!Z_Registration_Info_UClass_UCombatCallables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatCallables.OuterSingleton, Z_Construct_UClass_UCombatCallables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatCallables.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UCombatCallables>()
{
	return UCombatCallables::StaticClass();
}
UCombatCallables::UCombatCallables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCallables);
UCombatCallables::~UCombatCallables() {}
// End Interface UCombatCallables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageResult_StaticEnum, TEXT("EDamageResult"), &Z_Registration_Info_UEnum_EDamageResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 352128526U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatCallables, UCombatCallables::StaticClass, TEXT("UCombatCallables"), &Z_Registration_Info_UClass_UCombatCallables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatCallables), 838025782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_2458123420(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_CombatCallables_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
