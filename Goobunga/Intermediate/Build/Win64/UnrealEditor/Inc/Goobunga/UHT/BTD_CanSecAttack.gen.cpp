// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTD/BTD_CanSecAttack.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTD_CanSecAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_CanSecAttack();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_CanSecAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTD_CanSecAttack
void UBTD_CanSecAttack::StaticRegisterNativesUBTD_CanSecAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTD_CanSecAttack);
UClass* Z_Construct_UClass_UBTD_CanSecAttack_NoRegister()
{
	return UBTD_CanSecAttack::StaticClass();
}
struct Z_Construct_UClass_UBTD_CanSecAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/AI/BTD/BTD_CanSecAttack.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_CanSecAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActorKey_MetaData[] = {
		{ "Category", "BTD_CanSecAttack" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_CanSecAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTD_CanSecAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTD_CanSecAttack_Statics::NewProp_SelfActorKey = { "SelfActorKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_CanSecAttack, SelfActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActorKey_MetaData), NewProp_SelfActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTD_CanSecAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CanSecAttack_Statics::NewProp_SelfActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanSecAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTD_CanSecAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanSecAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTD_CanSecAttack_Statics::ClassParams = {
	&UBTD_CanSecAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTD_CanSecAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanSecAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CanSecAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTD_CanSecAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTD_CanSecAttack()
{
	if (!Z_Registration_Info_UClass_UBTD_CanSecAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTD_CanSecAttack.OuterSingleton, Z_Construct_UClass_UBTD_CanSecAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTD_CanSecAttack.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTD_CanSecAttack>()
{
	return UBTD_CanSecAttack::StaticClass();
}
UBTD_CanSecAttack::UBTD_CanSecAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTD_CanSecAttack);
UBTD_CanSecAttack::~UBTD_CanSecAttack() {}
// End Class UBTD_CanSecAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTD_CanSecAttack, UBTD_CanSecAttack::StaticClass, TEXT("UBTD_CanSecAttack"), &Z_Registration_Info_UClass_UBTD_CanSecAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTD_CanSecAttack), 951733830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_3698957882(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
