// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BTS_CanPlayerSeeThis.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_CanPlayerSeeThis() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_CanPlayerSeeThis();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_CanPlayerSeeThis_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTS_CanPlayerSeeThis
void UBTS_CanPlayerSeeThis::StaticRegisterNativesUBTS_CanPlayerSeeThis()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_CanPlayerSeeThis);
UClass* Z_Construct_UClass_UBTS_CanPlayerSeeThis_NoRegister()
{
	return UBTS_CanPlayerSeeThis::StaticClass();
}
struct Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/BTS_CanPlayerSeeThis.h" },
		{ "ModuleRelativePath", "Enemies/BTS_CanPlayerSeeThis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTS_CanPlayerSeeThis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTS_CanPlayerSeeThis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookedAt_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Enemies/BTS_CanPlayerSeeThis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookedAt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_CanPlayerSeeThis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_CanPlayerSeeThis, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_CanPlayerSeeThis, Player), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_LookedAt = { "LookedAt", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_CanPlayerSeeThis, LookedAt), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookedAt_MetaData), NewProp_LookedAt_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::NewProp_LookedAt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::ClassParams = {
	&UBTS_CanPlayerSeeThis::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_CanPlayerSeeThis()
{
	if (!Z_Registration_Info_UClass_UBTS_CanPlayerSeeThis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_CanPlayerSeeThis.OuterSingleton, Z_Construct_UClass_UBTS_CanPlayerSeeThis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_CanPlayerSeeThis.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTS_CanPlayerSeeThis>()
{
	return UBTS_CanPlayerSeeThis::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_CanPlayerSeeThis);
UBTS_CanPlayerSeeThis::~UBTS_CanPlayerSeeThis() {}
// End Class UBTS_CanPlayerSeeThis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_CanPlayerSeeThis_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_CanPlayerSeeThis, UBTS_CanPlayerSeeThis::StaticClass, TEXT("UBTS_CanPlayerSeeThis"), &Z_Registration_Info_UClass_UBTS_CanPlayerSeeThis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_CanPlayerSeeThis), 3763008745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_CanPlayerSeeThis_h_1870530691(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_CanPlayerSeeThis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_CanPlayerSeeThis_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
