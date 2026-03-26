// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/AI/BTD/BTD_CanSecAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTD_CanSecAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTD_CanSecAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTD_CanSecAttack, UBTD_CanSecAttack::StaticClass, TEXT("UBTD_CanSecAttack"), &Z_Registration_Info_UClass_UBTD_CanSecAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTD_CanSecAttack), 1602808971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_1581708521(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_AI_BTD_BTD_CanSecAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
