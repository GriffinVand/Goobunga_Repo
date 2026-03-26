// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTD/BTD_CanPrimAttack.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTD_CanPrimAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_CanPrimAttack();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_CanPrimAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTD_CanPrimAttack
void UBTD_CanPrimAttack::StaticRegisterNativesUBTD_CanPrimAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTD_CanPrimAttack);
UClass* Z_Construct_UClass_UBTD_CanPrimAttack_NoRegister()
{
	return UBTD_CanPrimAttack::StaticClass();
}
struct Z_Construct_UClass_UBTD_CanPrimAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/AI/BTD/BTD_CanPrimAttack.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_CanPrimAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "BTD_CanPrimAttack" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_CanPrimAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTD_CanPrimAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTD_CanPrimAttack_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_CanPrimAttack, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTD_CanPrimAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CanPrimAttack_Statics::NewProp_SelfActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanPrimAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTD_CanPrimAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanPrimAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTD_CanPrimAttack_Statics::ClassParams = {
	&UBTD_CanPrimAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTD_CanPrimAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanPrimAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanPrimAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTD_CanPrimAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTD_CanPrimAttack()
{
	if (!Z_Registration_Info_UClass_UBTD_CanPrimAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTD_CanPrimAttack.OuterSingleton, Z_Construct_UClass_UBTD_CanPrimAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTD_CanPrimAttack.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTD_CanPrimAttack>()
{
	return UBTD_CanPrimAttack::StaticClass();
}
UBTD_CanPrimAttack::UBTD_CanPrimAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTD_CanPrimAttack);
UBTD_CanPrimAttack::~UBTD_CanPrimAttack() {}
// End Class UBTD_CanPrimAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanPrimAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTD_CanPrimAttack, UBTD_CanPrimAttack::StaticClass, TEXT("UBTD_CanPrimAttack"), &Z_Registration_Info_UClass_UBTD_CanPrimAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTD_CanPrimAttack), 879983589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanPrimAttack_h_56124509(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanPrimAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanPrimAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
