// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/GavinEnemy.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGavinEnemy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AGavinEnemy();
GOOBUNGA_API UClass* Z_Construct_UClass_AGavinEnemy_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobungaProjectile_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AGavinEnemy Function OnMontageNotifyBegin
struct Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics
{
	struct GavinEnemy_eventOnMontageNotifyBegin_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GavinEnemy_eventOnMontageNotifyBegin_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GavinEnemy_eventOnMontageNotifyBegin_Parms, Payload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGavinEnemy, nullptr, "OnMontageNotifyBegin", nullptr, nullptr, Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::GavinEnemy_eventOnMontageNotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::GavinEnemy_eventOnMontageNotifyBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGavinEnemy::execOnMontageNotifyBegin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyBegin(Z_Param_NotifyName,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class AGavinEnemy Function OnMontageNotifyBegin

// Begin Class AGavinEnemy
void AGavinEnemy::StaticRegisterNativesAGavinEnemy()
{
	UClass* Class = AGavinEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageNotifyBegin", &AGavinEnemy::execOnMontageNotifyBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGavinEnemy);
UClass* Z_Construct_UClass_AGavinEnemy_NoRegister()
{
	return AGavinEnemy::StaticClass();
}
struct Z_Construct_UClass_AGavinEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/GavinEnemy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacialAnimationComponent_MetaData[] = {
		{ "Category", "GavinEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSpitNotifyName_MetaData[] = {
		{ "Category", "GavinEnemy" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpitMontage_MetaData[] = {
		{ "Category", "GavinEnemy" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopMontage_MetaData[] = {
		{ "Category", "GavinEnemy" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "GavinEnemy" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopDamage_MetaData[] = {
		{ "Category", "Pop" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopRadius_MetaData[] = {
		{ "Category", "Pop" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopEffect_MetaData[] = {
		{ "Category", "Pop" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpitAttackCooldown_MetaData[] = {
		{ "Category", "Spit" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpitProjectileClass_MetaData[] = {
		{ "Category", "Spit" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpitSocketName_MetaData[] = {
		{ "Category", "Spit" },
		{ "ModuleRelativePath", "Enemies/GavinEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacialAnimationComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExpectedSpitNotifyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpitMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PopMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PopDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PopRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PopEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpitAttackCooldown;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpitProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpitSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGavinEnemy_OnMontageNotifyBegin, "OnMontageNotifyBegin" }, // 467824454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGavinEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_FacialAnimationComponent = { "FacialAnimationComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, FacialAnimationComponent), Z_Construct_UClass_UFacialAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacialAnimationComponent_MetaData), NewProp_FacialAnimationComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_ExpectedSpitNotifyName = { "ExpectedSpitNotifyName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, ExpectedSpitNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedSpitNotifyName_MetaData), NewProp_ExpectedSpitNotifyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitMontage = { "SpitMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, SpitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpitMontage_MetaData), NewProp_SpitMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopMontage = { "PopMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, PopMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopMontage_MetaData), NewProp_PopMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopDamage = { "PopDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, PopDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopDamage_MetaData), NewProp_PopDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopRadius = { "PopRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, PopRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopRadius_MetaData), NewProp_PopRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopEffect = { "PopEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, PopEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopEffect_MetaData), NewProp_PopEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitAttackCooldown = { "SpitAttackCooldown", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, SpitAttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpitAttackCooldown_MetaData), NewProp_SpitAttackCooldown_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitProjectileClass = { "SpitProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, SpitProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGoobungaProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpitProjectileClass_MetaData), NewProp_SpitProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitSocketName = { "SpitSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGavinEnemy, SpitSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpitSocketName_MetaData), NewProp_SpitSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGavinEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_FacialAnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_ExpectedSpitNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_PopEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitAttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGavinEnemy_Statics::NewProp_SpitSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGavinEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGavinEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGavinEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGavinEnemy_Statics::ClassParams = {
	&AGavinEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGavinEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGavinEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGavinEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AGavinEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGavinEnemy()
{
	if (!Z_Registration_Info_UClass_AGavinEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGavinEnemy.OuterSingleton, Z_Construct_UClass_AGavinEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGavinEnemy.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AGavinEnemy>()
{
	return AGavinEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGavinEnemy);
AGavinEnemy::~AGavinEnemy() {}
// End Class AGavinEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGavinEnemy, AGavinEnemy::StaticClass, TEXT("AGavinEnemy"), &Z_Registration_Info_UClass_AGavinEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGavinEnemy), 2703259390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_2643368997(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_GavinEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
