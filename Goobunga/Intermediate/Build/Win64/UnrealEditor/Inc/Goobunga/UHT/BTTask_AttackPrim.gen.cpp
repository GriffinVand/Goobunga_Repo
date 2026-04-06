// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTT/BTTask_AttackPrim.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AttackPrim() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackPrim();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackPrim_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTTask_AttackPrim Function OnAttackFinished
struct Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_AttackPrim, nullptr, "OnAttackFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_AttackPrim::execOnAttackFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackFinished();
	P_NATIVE_END;
}
// End Class UBTTask_AttackPrim Function OnAttackFinished

// Begin Class UBTTask_AttackPrim
void UBTTask_AttackPrim::StaticRegisterNativesUBTTask_AttackPrim()
{
	UClass* Class = UBTTask_AttackPrim::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackFinished", &UBTTask_AttackPrim::execOnAttackFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AttackPrim);
UClass* Z_Construct_UClass_UBTTask_AttackPrim_NoRegister()
{
	return UBTTask_AttackPrim::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AttackPrim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForFinish_MetaData[] = {
		{ "Category", "BTTask_AttackPrim" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredOwnerComp_MetaData[] = {
		{ "Category", "BTTask_AttackPrim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackPrim.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWaitForFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForFinish;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoredOwnerComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_AttackPrim_OnAttackFinished, "OnAttackFinished" }, // 1221554192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AttackPrim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_bWaitForFinish_SetBit(void* Obj)
{
	((UBTTask_AttackPrim*)Obj)->bWaitForFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_bWaitForFinish = { "bWaitForFinish", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_AttackPrim), &Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_bWaitForFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForFinish_MetaData), NewProp_bWaitForFinish_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_StoredOwnerComp = { "StoredOwnerComp", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackPrim, StoredOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredOwnerComp_MetaData), NewProp_StoredOwnerComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackPrim, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackPrim, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_AttackPrim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_bWaitForFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_StoredOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackPrim_Statics::NewProp_TargetActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackPrim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_AttackPrim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackPrim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AttackPrim_Statics::ClassParams = {
	&UBTTask_AttackPrim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_AttackPrim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackPrim_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackPrim_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AttackPrim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AttackPrim()
{
	if (!Z_Registration_Info_UClass_UBTTask_AttackPrim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AttackPrim.OuterSingleton, Z_Construct_UClass_UBTTask_AttackPrim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AttackPrim.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTTask_AttackPrim>()
{
	return UBTTask_AttackPrim::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AttackPrim);
UBTTask_AttackPrim::~UBTTask_AttackPrim() {}
// End Class UBTTask_AttackPrim

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AttackPrim, UBTTask_AttackPrim::StaticClass, TEXT("UBTTask_AttackPrim"), &Z_Registration_Info_UClass_UBTTask_AttackPrim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AttackPrim), 1924740511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_128550962(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackPrim_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
