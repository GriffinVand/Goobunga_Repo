// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Combat/TeamInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UTeamInterface();
GOOBUNGA_API UClass* Z_Construct_UClass_UTeamInterface_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAllegiance();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EAllegiance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllegiance;
static UEnum* EAllegiance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAllegiance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAllegiance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EAllegiance, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EAllegiance"));
	}
	return Z_Registration_Info_UEnum_EAllegiance.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EAllegiance>()
{
	return EAllegiance_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EAllegiance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Enemy.DisplayName", "Enemy" },
		{ "Enemy.Name", "EAllegiance::Enemy" },
		{ "Friendly.DisplayName", "Friendly" },
		{ "Friendly.Name", "EAllegiance::Friendly" },
		{ "ModuleRelativePath", "Combat/TeamInterface.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAllegiance::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAllegiance::None", (int64)EAllegiance::None },
		{ "EAllegiance::Enemy", (int64)EAllegiance::Enemy },
		{ "EAllegiance::Friendly", (int64)EAllegiance::Friendly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EAllegiance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EAllegiance",
	"EAllegiance",
	Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EAllegiance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EAllegiance()
{
	if (!Z_Registration_Info_UEnum_EAllegiance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllegiance.InnerSingleton, Z_Construct_UEnum_Goobunga_EAllegiance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAllegiance.InnerSingleton;
}
// End Enum EAllegiance

// Begin Interface UTeamInterface Function GetAllegiance
struct Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics
{
	struct TeamInterface_eventGetAllegiance_Parms
	{
		EAllegiance ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/TeamInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamInterface_eventGetAllegiance_Parms, ReturnValue), Z_Construct_UEnum_Goobunga_EAllegiance, METADATA_PARAMS(0, nullptr) }; // 3647989624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamInterface, nullptr, "GetAllegiance", nullptr, nullptr, Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::TeamInterface_eventGetAllegiance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::TeamInterface_eventGetAllegiance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamInterface_GetAllegiance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamInterface_GetAllegiance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITeamInterface::execGetAllegiance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAllegiance*)Z_Param__Result=P_THIS->GetAllegiance();
	P_NATIVE_END;
}
// End Interface UTeamInterface Function GetAllegiance

// Begin Interface UTeamInterface
void UTeamInterface::StaticRegisterNativesUTeamInterface()
{
	UClass* Class = UTeamInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllegiance", &ITeamInterface::execGetAllegiance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeamInterface);
UClass* Z_Construct_UClass_UTeamInterface_NoRegister()
{
	return UTeamInterface::StaticClass();
}
struct Z_Construct_UClass_UTeamInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Combat/TeamInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTeamInterface_GetAllegiance, "GetAllegiance" }, // 2818960505
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITeamInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTeamInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeamInterface_Statics::ClassParams = {
	&UTeamInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeamInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTeamInterface()
{
	if (!Z_Registration_Info_UClass_UTeamInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeamInterface.OuterSingleton, Z_Construct_UClass_UTeamInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTeamInterface.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UTeamInterface>()
{
	return UTeamInterface::StaticClass();
}
UTeamInterface::UTeamInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeamInterface);
UTeamInterface::~UTeamInterface() {}
// End Interface UTeamInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAllegiance_StaticEnum, TEXT("EAllegiance"), &Z_Registration_Info_UEnum_EAllegiance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3647989624U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeamInterface, UTeamInterface::StaticClass, TEXT("UTeamInterface"), &Z_Registration_Info_UClass_UTeamInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeamInterface), 2642082427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_805182170(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_TeamInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
