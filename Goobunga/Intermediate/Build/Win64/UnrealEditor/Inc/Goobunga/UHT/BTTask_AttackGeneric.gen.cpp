// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTT/BTTask_AttackGeneric.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AttackGeneric() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackGeneric();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTTask_AttackGeneric_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTTask_AttackGeneric
void UBTTask_AttackGeneric::StaticRegisterNativesUBTTask_AttackGeneric()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AttackGeneric);
UClass* Z_Construct_UClass_UBTTask_AttackGeneric_NoRegister()
{
	return UBTTask_AttackGeneric::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AttackGeneric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/AI/BTT/BTTask_AttackGeneric.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackGeneric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackGeneric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackNumKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTT/BTTask_AttackGeneric.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackNumKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AttackGeneric>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackGeneric_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackGeneric, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackGeneric_Statics::NewProp_AttackNumKey = { "AttackNumKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackGeneric, AttackNumKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackNumKey_MetaData), NewProp_AttackNumKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_AttackGeneric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackGeneric_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackGeneric_Statics::NewProp_AttackNumKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackGeneric_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_AttackGeneric_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackGeneric_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AttackGeneric_Statics::ClassParams = {
	&UBTTask_AttackGeneric::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_AttackGeneric_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackGeneric_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackGeneric_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AttackGeneric_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AttackGeneric()
{
	if (!Z_Registration_Info_UClass_UBTTask_AttackGeneric.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AttackGeneric.OuterSingleton, Z_Construct_UClass_UBTTask_AttackGeneric_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AttackGeneric.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTTask_AttackGeneric>()
{
	return UBTTask_AttackGeneric::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AttackGeneric);
UBTTask_AttackGeneric::~UBTTask_AttackGeneric() {}
// End Class UBTTask_AttackGeneric

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackGeneric_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AttackGeneric, UBTTask_AttackGeneric::StaticClass, TEXT("UBTTask_AttackGeneric"), &Z_Registration_Info_UClass_UBTTask_AttackGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AttackGeneric), 524455568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackGeneric_h_1565385222(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackGeneric_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTT_BTTask_AttackGeneric_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
