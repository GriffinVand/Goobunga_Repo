// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTT/BTTask_AttackSec.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AttackSec() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackSec();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackSec_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTTask_AttackSec Function OnAttackFinished
struct Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_AttackSec, nullptr, "OnAttackFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_AttackSec::execOnAttackFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackFinished();
	P_NATIVE_END;
}
// End Class UBTTask_AttackSec Function OnAttackFinished

// Begin Class UBTTask_AttackSec
void UBTTask_AttackSec::StaticRegisterNativesUBTTask_AttackSec()
{
	UClass* Class = UBTTask_AttackSec::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackFinished", &UBTTask_AttackSec::execOnAttackFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AttackSec);
UClass* Z_Construct_UClass_UBTTask_AttackSec_NoRegister()
{
	return UBTTask_AttackSec::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AttackSec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredOwnerComp_MetaData[] = {
		{ "Category", "BTTask_AttackSec" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackSec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoredOwnerComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_AttackSec_OnAttackFinished, "OnAttackFinished" }, // 1829412446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AttackSec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_StoredOwnerComp = { "StoredOwnerComp", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackSec, StoredOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredOwnerComp_MetaData), NewProp_StoredOwnerComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackSec, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackSec, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_AttackSec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_StoredOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackSec_Statics::NewProp_TargetActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSec_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_AttackSec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AttackSec_Statics::ClassParams = {
	&UBTTask_AttackSec::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_AttackSec_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSec_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSec_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AttackSec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AttackSec()
{
	if (!Z_Registration_Info_UClass_UBTTask_AttackSec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AttackSec.OuterSingleton, Z_Construct_UClass_UBTTask_AttackSec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AttackSec.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTTask_AttackSec>()
{
	return UBTTask_AttackSec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AttackSec);
UBTTask_AttackSec::~UBTTask_AttackSec() {}
// End Class UBTTask_AttackSec

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackSec_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AttackSec, UBTTask_AttackSec::StaticClass, TEXT("UBTTask_AttackSec"), &Z_Registration_Info_UClass_UBTTask_AttackSec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AttackSec), 1926196090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackSec_h_2941599873(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackSec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackSec_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
