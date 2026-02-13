// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTS/BTS_UpdateEnemyState.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_UpdateEnemyState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateEnemyState();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateEnemyState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTS_UpdateEnemyState
void UBTS_UpdateEnemyState::StaticRegisterNativesUBTS_UpdateEnemyState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_UpdateEnemyState);
UClass* Z_Construct_UClass_UBTS_UpdateEnemyState_NoRegister()
{
	return UBTS_UpdateEnemyState::StaticClass();
}
struct Z_Construct_UClass_UBTS_UpdateEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/AI/BTS/BTS_UpdateEnemyState.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateEnemyState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateEnemyState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorStateKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/AI/BTS/BTS_UpdateEnemyState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorStateKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_UpdateEnemyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateEnemyState, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::NewProp_SelfActorStateKey = { "SelfActorStateKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateEnemyState, SelfActorStateKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorStateKey_MetaData), NewProp_SelfActorStateKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::NewProp_SelfActorStateKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::ClassParams = {
	&UBTS_UpdateEnemyState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_UpdateEnemyState()
{
	if (!Z_Registration_Info_UClass_UBTS_UpdateEnemyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_UpdateEnemyState.OuterSingleton, Z_Construct_UClass_UBTS_UpdateEnemyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_UpdateEnemyState.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTS_UpdateEnemyState>()
{
	return UBTS_UpdateEnemyState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_UpdateEnemyState);
UBTS_UpdateEnemyState::~UBTS_UpdateEnemyState() {}
// End Class UBTS_UpdateEnemyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateEnemyState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_UpdateEnemyState, UBTS_UpdateEnemyState::StaticClass, TEXT("UBTS_UpdateEnemyState"), &Z_Registration_Info_UClass_UBTS_UpdateEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_UpdateEnemyState), 4051454884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateEnemyState_h_244545918(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateEnemyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTS_BTS_UpdateEnemyState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
