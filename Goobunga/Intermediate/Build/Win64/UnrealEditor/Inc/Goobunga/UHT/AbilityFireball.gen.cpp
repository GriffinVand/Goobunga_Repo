// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/Instants/AbilityFireball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityFireball() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityFireball();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityFireball_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityInstant();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UAbilityFireball
void UAbilityFireball::StaticRegisterNativesUAbilityFireball()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityFireball);
UClass* Z_Construct_UClass_UAbilityFireball_NoRegister()
{
	return UAbilityFireball::StaticClass();
}
struct Z_Construct_UClass_UAbilityFireball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/Instants/AbilityFireball.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityFireball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireballClass_MetaData[] = {
		{ "Category", "AbilityFireball" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityFireball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireballSocket_MetaData[] = {
		{ "Category", "AbilityFireball" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityFireball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchNotifyName_MetaData[] = {
		{ "Category", "AbilityFireball" },
		{ "ModuleRelativePath", "Abilities/Instants/AbilityFireball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FireballClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FireballSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LaunchNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityFireball>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityFireball_Statics::NewProp_FireballClass = { "FireballClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFireball, FireballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireballClass_MetaData), NewProp_FireballClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityFireball_Statics::NewProp_FireballSocket = { "FireballSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFireball, FireballSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireballSocket_MetaData), NewProp_FireballSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityFireball_Statics::NewProp_LaunchNotifyName = { "LaunchNotifyName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFireball, LaunchNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchNotifyName_MetaData), NewProp_LaunchNotifyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityFireball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFireball_Statics::NewProp_FireballClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFireball_Statics::NewProp_FireballSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFireball_Statics::NewProp_LaunchNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFireball_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityFireball_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityInstant,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFireball_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityFireball_Statics::ClassParams = {
	&UAbilityFireball::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityFireball_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFireball_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFireball_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityFireball_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityFireball()
{
	if (!Z_Registration_Info_UClass_UAbilityFireball.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityFireball.OuterSingleton, Z_Construct_UClass_UAbilityFireball_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityFireball.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityFireball>()
{
	return UAbilityFireball::StaticClass();
}
UAbilityFireball::UAbilityFireball(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityFireball);
UAbilityFireball::~UAbilityFireball() {}
// End Class UAbilityFireball

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityFireball_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityFireball, UAbilityFireball::StaticClass, TEXT("UAbilityFireball"), &Z_Registration_Info_UClass_UAbilityFireball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityFireball), 2268635076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityFireball_h_2107871689(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityFireball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_Instants_AbilityFireball_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
