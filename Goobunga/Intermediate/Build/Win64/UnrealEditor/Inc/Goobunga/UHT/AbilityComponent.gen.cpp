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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityLoadout();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin ScriptStruct FAbilityLoadout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityLoadout;
class UScriptStruct* FAbilityLoadout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityLoadout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityLoadout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityLoadout, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("AbilityLoadout"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityLoadout.OuterSingleton;
}
template<> GOOBUNGA_API UScriptStruct* StaticStruct<FAbilityLoadout>()
{
	return FAbilityLoadout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityLoadout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAbilityClass_MetaData[] = {
		{ "Category", "AbilityLoadout" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAbilityClass_MetaData[] = {
		{ "Category", "AbilityLoadout" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainAbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryAbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityLoadout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilityLoadout_Statics::NewProp_MainAbilityClass = { "MainAbilityClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityLoadout, MainAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAbilityClass_MetaData), NewProp_MainAbilityClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilityLoadout_Statics::NewProp_SecondaryAbilityClass = { "SecondaryAbilityClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityLoadout, SecondaryAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAbilityClass_MetaData), NewProp_SecondaryAbilityClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityLoadout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityLoadout_Statics::NewProp_MainAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityLoadout_Statics::NewProp_SecondaryAbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityLoadout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityLoadout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	&NewStructOps,
	"AbilityLoadout",
	Z_Construct_UScriptStruct_FAbilityLoadout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityLoadout_Statics::PropPointers),
	sizeof(FAbilityLoadout),
	alignof(FAbilityLoadout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityLoadout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityLoadout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityLoadout()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityLoadout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityLoadout.InnerSingleton, Z_Construct_UScriptStruct_FAbilityLoadout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityLoadout.InnerSingleton;
}
// End ScriptStruct FAbilityLoadout

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLoadout_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAbility_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedAbilities_MetaData[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Abilities/AbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityLoadout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityLoadout = { "AbilityLoadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, AbilityLoadout), Z_Construct_UScriptStruct_FAbilityLoadout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLoadout_MetaData), NewProp_AbilityLoadout_MetaData) }; // 2146623539
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_PrimaryAbility = { "PrimaryAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, PrimaryAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAbility_MetaData), NewProp_PrimaryAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SecondaryAbility = { "SecondaryAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, SecondaryAbility), Z_Construct_UClass_UAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAbility_MetaData), NewProp_SecondaryAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities_Inner = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilitySaveData, METADATA_PARAMS(0, nullptr) }; // 3876655937
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_OwnedAbilities = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, OwnedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedAbilities_MetaData), NewProp_OwnedAbilities_MetaData) }; // 3876655937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityLoadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_PrimaryAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SecondaryAbility,
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
UAbilityComponent::UAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent);
UAbilityComponent::~UAbilityComponent() {}
// End Class UAbilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityLoadout::StaticStruct, Z_Construct_UScriptStruct_FAbilityLoadout_Statics::NewStructOps, TEXT("AbilityLoadout"), &Z_Registration_Info_UScriptStruct_AbilityLoadout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityLoadout), 2146623539U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent, UAbilityComponent::StaticClass, TEXT("UAbilityComponent"), &Z_Registration_Info_UClass_UAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent), 1293663946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_2863492748(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
