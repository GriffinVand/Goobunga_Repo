// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BTS_UpdateEnemyCooldowns.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_UpdateEnemyCooldowns() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateEnemyCooldowns();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTS_UpdateEnemyCooldowns
void UBTS_UpdateEnemyCooldowns::StaticRegisterNativesUBTS_UpdateEnemyCooldowns()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_UpdateEnemyCooldowns);
UClass* Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_NoRegister()
{
	return UBTS_UpdateEnemyCooldowns::StaticClass();
}
struct Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/BTS_UpdateEnemyCooldowns.h" },
		{ "ModuleRelativePath", "Enemies/BTS_UpdateEnemyCooldowns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "BTS_UpdateEnemyCooldowns" },
		{ "ModuleRelativePath", "Enemies/BTS_UpdateEnemyCooldowns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanAttackKey_MetaData[] = {
		{ "Category", "BTS_UpdateEnemyCooldowns" },
		{ "ModuleRelativePath", "Enemies/BTS_UpdateEnemyCooldowns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanLaunchKey_MetaData[] = {
		{ "Category", "BTS_UpdateEnemyCooldowns" },
		{ "ModuleRelativePath", "Enemies/BTS_UpdateEnemyCooldowns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanAttackKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanLaunchKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_UpdateEnemyCooldowns>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateEnemyCooldowns, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_CanAttackKey = { "CanAttackKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateEnemyCooldowns, CanAttackKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanAttackKey_MetaData), NewProp_CanAttackKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_CanLaunchKey = { "CanLaunchKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_UpdateEnemyCooldowns, CanLaunchKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanLaunchKey_MetaData), NewProp_CanLaunchKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_SelfActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_CanAttackKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::NewProp_CanLaunchKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::ClassParams = {
	&UBTS_UpdateEnemyCooldowns::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_UpdateEnemyCooldowns()
{
	if (!Z_Registration_Info_UClass_UBTS_UpdateEnemyCooldowns.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_UpdateEnemyCooldowns.OuterSingleton, Z_Construct_UClass_UBTS_UpdateEnemyCooldowns_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_UpdateEnemyCooldowns.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTS_UpdateEnemyCooldowns>()
{
	return UBTS_UpdateEnemyCooldowns::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_UpdateEnemyCooldowns);
UBTS_UpdateEnemyCooldowns::~UBTS_UpdateEnemyCooldowns() {}
// End Class UBTS_UpdateEnemyCooldowns

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_UpdateEnemyCooldowns_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_UpdateEnemyCooldowns, UBTS_UpdateEnemyCooldowns::StaticClass, TEXT("UBTS_UpdateEnemyCooldowns"), &Z_Registration_Info_UClass_UBTS_UpdateEnemyCooldowns, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_UpdateEnemyCooldowns), 3363027317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_UpdateEnemyCooldowns_h_1669443498(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_UpdateEnemyCooldowns_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BTS_UpdateEnemyCooldowns_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
