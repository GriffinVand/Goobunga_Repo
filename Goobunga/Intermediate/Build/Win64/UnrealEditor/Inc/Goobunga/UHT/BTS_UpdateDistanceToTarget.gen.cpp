// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_UpdateDistanceToTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateDistanceToTarget();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateDistanceToTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTS_UpdateDistanceToTarget
void UBTS_UpdateDistanceToTarget::StaticRegisterNativesUBTS_UpdateDistanceToTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_UpdateDistanceToTarget);
UClass* Z_Construct_UClass_UBTS_UpdateDistanceToTarget_NoRegister()
{
	return UBTS_UpdateDistanceToTarget::StaticClass();
}
struct Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToTargetKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateDistanceToTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceToTargetKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_UpdateDistanceToTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateDistanceToTarget, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateDistanceToTarget, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKey_MetaData), NewProp_TargetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_DistanceToTargetKey = { "DistanceToTargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateDistanceToTarget, DistanceToTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToTargetKey_MetaData), NewProp_DistanceToTargetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_TargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::NewProp_DistanceToTargetKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::ClassParams = {
	&UBTS_UpdateDistanceToTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_UpdateDistanceToTarget()
{
	if (!Z_Registration_Info_UClass_UBTS_UpdateDistanceToTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_UpdateDistanceToTarget.OuterSingleton, Z_Construct_UClass_UBTS_UpdateDistanceToTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_UpdateDistanceToTarget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTS_UpdateDistanceToTarget>()
{
	return UBTS_UpdateDistanceToTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_UpdateDistanceToTarget);
UBTS_UpdateDistanceToTarget::~UBTS_UpdateDistanceToTarget() {}
// End Class UBTS_UpdateDistanceToTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateDistanceToTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_UpdateDistanceToTarget, UBTS_UpdateDistanceToTarget::StaticClass, TEXT("UBTS_UpdateDistanceToTarget"), &Z_Registration_Info_UClass_UBTS_UpdateDistanceToTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_UpdateDistanceToTarget), 1234600969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateDistanceToTarget_h_3457359299(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateDistanceToTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateDistanceToTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
