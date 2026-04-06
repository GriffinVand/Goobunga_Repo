// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/AbilityChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityChannel() {}

// Begin Cross Module References
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityChannel();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UAbilityChannel
void UAbilityChannel::StaticRegisterNativesUAbilityChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityChannel);
UClass* Z_Construct_UClass_UAbilityChannel_NoRegister()
{
	return UAbilityChannel::StaticClass();
}
struct Z_Construct_UClass_UAbilityChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/AbilityChannel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityChannel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityChannel_Statics::ClassParams = {
	&UAbilityChannel::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityChannel()
{
	if (!Z_Registration_Info_UClass_UAbilityChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityChannel.OuterSingleton, Z_Construct_UClass_UAbilityChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityChannel.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityChannel>()
{
	return UAbilityChannel::StaticClass();
}
UAbilityChannel::UAbilityChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityChannel);
UAbilityChannel::~UAbilityChannel() {}
// End Class UAbilityChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityChannel, UAbilityChannel::StaticClass, TEXT("UAbilityChannel"), &Z_Registration_Info_UClass_UAbilityChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityChannel), 3643970862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityChannel_h_1857022142(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
