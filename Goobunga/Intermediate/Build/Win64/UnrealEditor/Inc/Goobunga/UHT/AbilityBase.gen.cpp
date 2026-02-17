// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/AbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UAbilityBase
void UAbilityBase::StaticRegisterNativesUAbilityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityBase);
UClass* Z_Construct_UClass_UAbilityBase_NoRegister()
{
	return UAbilityBase::StaticClass();
}
struct Z_Construct_UClass_UAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/AbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AbilityID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityID_MetaData), NewProp_AbilityID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityBase_Statics::ClassParams = {
	&UAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityBase()
{
	if (!Z_Registration_Info_UClass_UAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityBase.OuterSingleton, Z_Construct_UClass_UAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityBase.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityBase>()
{
	return UAbilityBase::StaticClass();
}
UAbilityBase::UAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityBase);
UAbilityBase::~UAbilityBase() {}
// End Class UAbilityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityBase, UAbilityBase::StaticClass, TEXT("UAbilityBase"), &Z_Registration_Info_UClass_UAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityBase), 2752095447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_692315647(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
