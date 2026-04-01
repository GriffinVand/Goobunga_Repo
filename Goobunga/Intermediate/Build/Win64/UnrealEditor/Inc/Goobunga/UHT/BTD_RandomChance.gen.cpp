// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTD/BTD_RandomChance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTD_RandomChance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_RandomChance();
GOOBUNGA_API UClass* Z_Construct_UClass_UBTD_RandomChance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UBTD_RandomChance
void UBTD_RandomChance::StaticRegisterNativesUBTD_RandomChance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTD_RandomChance);
UClass* Z_Construct_UClass_UBTD_RandomChance_NoRegister()
{
	return UBTD_RandomChance::StaticClass();
}
struct Z_Construct_UClass_UBTD_RandomChance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/AI/BTD/BTD_RandomChance.h" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_RandomChance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "Category", "BTD_RandomChance" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_RandomChance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "Category", "BTD_RandomChance" },
		{ "ModuleRelativePath", "Enemies/AI/BTD/BTD_RandomChance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTD_RandomChance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTD_RandomChance_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_RandomChance, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTD_RandomChance_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_RandomChance, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTD_RandomChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_RandomChance_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_RandomChance_Statics::NewProp_RangeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_RandomChance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTD_RandomChance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_RandomChance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTD_RandomChance_Statics::ClassParams = {
	&UBTD_RandomChance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTD_RandomChance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_RandomChance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_RandomChance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTD_RandomChance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTD_RandomChance()
{
	if (!Z_Registration_Info_UClass_UBTD_RandomChance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTD_RandomChance.OuterSingleton, Z_Construct_UClass_UBTD_RandomChance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTD_RandomChance.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UBTD_RandomChance>()
{
	return UBTD_RandomChance::StaticClass();
}
UBTD_RandomChance::UBTD_RandomChance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTD_RandomChance);
UBTD_RandomChance::~UBTD_RandomChance() {}
// End Class UBTD_RandomChance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_RandomChance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTD_RandomChance, UBTD_RandomChance::StaticClass, TEXT("UBTD_RandomChance"), &Z_Registration_Info_UClass_UBTD_RandomChance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTD_RandomChance), 3798786236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_RandomChance_h_3801757654(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_RandomChance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_RandomChance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
