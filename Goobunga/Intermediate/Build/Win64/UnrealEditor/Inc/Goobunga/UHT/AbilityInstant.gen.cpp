// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/Instants/AbilityInstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityInstant() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityInstant();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityInstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UAbilityInstant
void UAbilityInstant::StaticRegisterNativesUAbilityInstant()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityInstant);
UClass* Z_Construct_UClass_UAbilityInstant_NoRegister()
{
	return UAbilityInstant::StaticClass();
}
struct Z_Construct_UClass_UAbilityInstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/Instants/AbilityInstant.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityInstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUpAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityInstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityInstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartUpAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityInstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityInstant_Statics::NewProp_StartUpAnimation = { "StartUpAnimation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityInstant, StartUpAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUpAnimation_MetaData), NewProp_StartUpAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityInstant_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityInstant, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityInstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInstant_Statics::NewProp_StartUpAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInstant_Statics::NewProp_CooldownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInstant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityInstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityInstant_Statics::ClassParams = {
	&UAbilityInstant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityInstant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInstant_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityInstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityInstant()
{
	if (!Z_Registration_Info_UClass_UAbilityInstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityInstant.OuterSingleton, Z_Construct_UClass_UAbilityInstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityInstant.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityInstant>()
{
	return UAbilityInstant::StaticClass();
}
UAbilityInstant::UAbilityInstant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityInstant);
UAbilityInstant::~UAbilityInstant() {}
// End Class UAbilityInstant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityInstant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityInstant, UAbilityInstant::StaticClass, TEXT("UAbilityInstant"), &Z_Registration_Info_UClass_UAbilityInstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityInstant), 4024025393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityInstant_h_193563863(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityInstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityInstant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
