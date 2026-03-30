// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/AbilityComponent.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAbilityBlockFlag();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EAbilityBlockFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityBlockFlag;
static UEnum* EAbilityBlockFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityBlockFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityBlockFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EAbilityBlockFlag, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EAbilityBlockFlag"));
	}
	return Z_Registration_Info_UEnum_EAbilityBlockFlag.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EAbilityBlockFlag>()
{
	return EAbilityBlockFlag_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aim.DisplayName", "Aim" },
		{ "Aim.Name", "EAbilityBlockFlag::Aim" },
		{ "BlueprintType", "true" },
		{ "Fire.DisplayName", "Fire" },
		{ "Fire.Name", "EAbilityBlockFlag::Fire" },
		{ "Grip.DisplayName", "Grip" },
		{ "Grip.Name", "EAbilityBlockFlag::Grip" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "EAbilityBlockFlag::Reload" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "EAbilityBlockFlag::Sprint" },
		{ "Swap.DisplayName", "Swap" },
		{ "Swap.Name", "EAbilityBlockFlag::Swap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityBlockFlag::Fire", (int64)EAbilityBlockFlag::Fire },
		{ "EAbilityBlockFlag::Aim", (int64)EAbilityBlockFlag::Aim },
		{ "EAbilityBlockFlag::Grip", (int64)EAbilityBlockFlag::Grip },
		{ "EAbilityBlockFlag::Reload", (int64)EAbilityBlockFlag::Reload },
		{ "EAbilityBlockFlag::Sprint", (int64)EAbilityBlockFlag::Sprint },
		{ "EAbilityBlockFlag::Swap", (int64)EAbilityBlockFlag::Swap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EAbilityBlockFlag",
	"EAbilityBlockFlag",
	Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EAbilityBlockFlag()
{
	if (!Z_Registration_Info_UEnum_EAbilityBlockFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityBlockFlag.InnerSingleton, Z_Construct_UEnum_Goobunga_EAbilityBlockFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityBlockFlag.InnerSingleton;
}
// End Enum EAbilityBlockFlag

// Begin Class UAbilityComponent
void UAbilityComponent::StaticRegisterNativesUAbilityComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent);
UClass* Z_Construct_UClass_UAbilityComponent_NoRegister()
{
	return UAbilityComponent::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/AbilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedAbilities_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LargeAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_ActiveAbility = { "ActiveAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, ActiveAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAbility_MetaData), NewProp_ActiveAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SmallAbility = { "SmallAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, SmallAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallAbility_MetaData), NewProp_SmallAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_LargeAbility = { "LargeAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, LargeAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeAbility_MetaData), NewProp_LargeAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_HealAbility = { "HealAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, HealAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAbility_MetaData), NewProp_HealAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities_Inner = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(0, nullptr) }; // 3876655937
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, OwnedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedAbilities_MetaData), NewProp_OwnedAbilities_MetaData) }; // 3876655937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_ActiveAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SmallAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_LargeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_HealAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Statics::ClassParams = {
	&UAbilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityComponent>()
{
	return UAbilityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent);
UAbilityComponent::~UAbilityComponent() {}
// End Class UAbilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityBlockFlag_StaticEnum, TEXT("EAbilityBlockFlag"), &Z_Registration_Info_UEnum_EAbilityBlockFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 443050785U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent, UAbilityComponent::StaticClass, TEXT("UAbilityComponent"), &Z_Registration_Info_UClass_UAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent), 1819749232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_2853154432(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
