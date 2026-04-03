// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/JoshEnemy.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoshEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AJoshEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AJoshEnemy_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_ULaunchInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AJoshEnemy Function OnMontageNotifyBegin
struct Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics
{
	struct JoshEnemy_eventOnMontageNotifyBegin_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoshEnemy_eventOnMontageNotifyBegin_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoshEnemy_eventOnMontageNotifyBegin_Parms, Payload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoshEnemy, nullptr, "OnMontageNotifyBegin", nullptr, nullptr, Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::JoshEnemy_eventOnMontageNotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::JoshEnemy_eventOnMontageNotifyBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJoshEnemy::execOnMontageNotifyBegin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyBegin(Z_Param_NotifyName,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class AJoshEnemy Function OnMontageNotifyBegin

// Begin Class AJoshEnemy
void AJoshEnemy::StaticRegisterNativesAJoshEnemy()
{
	UClass* Class = AJoshEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageNotifyBegin", &AJoshEnemy::execOnMontageNotifyBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJoshEnemy);
UClass* Z_Construct_UClass_AJoshEnemy_NoRegister()
{
	return AJoshEnemy::StaticClass();
}
struct Z_Construct_UClass_AJoshEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/JoshEnemy.h" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StabMontage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindUpMontage_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallingStabMontage_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedStabNotifyName_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSocketName_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacialAnimationComponent_MetaData[] = {
		{ "Category", "JoshEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Launching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JoshEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaunchSplineTime_MetaData[] = {
		{ "Category", "Launch" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedLaunchRange_MetaData[] = {
		{ "Category", "Launch" },
		{ "ModuleRelativePath", "Enemies/JoshEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StabMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindUpMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallingStabMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExpectedStabNotifyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacialAnimationComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static void NewProp_Launching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Launching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLaunchSplineTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedLaunchRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJoshEnemy_OnMontageNotifyBegin, "OnMontageNotifyBegin" }, // 2192989732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJoshEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_StabMontage = { "StabMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, StabMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StabMontage_MetaData), NewProp_StabMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_WindUpMontage = { "WindUpMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, WindUpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindUpMontage_MetaData), NewProp_WindUpMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_FallingStabMontage = { "FallingStabMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, FallingStabMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallingStabMontage_MetaData), NewProp_FallingStabMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_ExpectedStabNotifyName = { "ExpectedStabNotifyName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, ExpectedStabNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedStabNotifyName_MetaData), NewProp_ExpectedStabNotifyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackSocketName = { "AttackSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, AttackSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSocketName_MetaData), NewProp_AttackSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_FacialAnimationComponent = { "FacialAnimationComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, FacialAnimationComponent), Z_Construct_UClass_UFacialAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacialAnimationComponent_MetaData), NewProp_FacialAnimationComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, AttackRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRate_MetaData), NewProp_AttackRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
void Z_Construct_UClass_AJoshEnemy_Statics::NewProp_Launching_SetBit(void* Obj)
{
	((AJoshEnemy*)Obj)->Launching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_Launching = { "Launching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AJoshEnemy), &Z_Construct_UClass_AJoshEnemy_Statics::NewProp_Launching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Launching_MetaData), NewProp_Launching_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_LaunchSpline = { "LaunchSpline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, LaunchSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSpline_MetaData), NewProp_LaunchSpline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_MaxLaunchSplineTime = { "MaxLaunchSplineTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, MaxLaunchSplineTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLaunchSplineTime_MetaData), NewProp_MaxLaunchSplineTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoshEnemy_Statics::NewProp_ExpectedLaunchRange = { "ExpectedLaunchRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJoshEnemy, ExpectedLaunchRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedLaunchRange_MetaData), NewProp_ExpectedLaunchRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJoshEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_StabMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_WindUpMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_FallingStabMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_ExpectedStabNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_FacialAnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_Launching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_LaunchSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_MaxLaunchSplineTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoshEnemy_Statics::NewProp_ExpectedLaunchRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJoshEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AJoshEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULaunchInterface_NoRegister, (int32)VTABLE_OFFSET(AJoshEnemy, ILaunchInterface), false },  // 3748280936
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJoshEnemy_Statics::ClassParams = {
	&AJoshEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJoshEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJoshEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AJoshEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJoshEnemy()
{
	if (!Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton, Z_Construct_UClass_AJoshEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJoshEnemy.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AJoshEnemy>()
{
	return AJoshEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJoshEnemy);
AJoshEnemy::~AJoshEnemy() {}
// End Class AJoshEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJoshEnemy, AJoshEnemy::StaticClass, TEXT("AJoshEnemy"), &Z_Registration_Info_UClass_AJoshEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJoshEnemy), 2081964177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_2404608867(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_JoshEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
