// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/GoobungaPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobungaPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobungaPlayerState();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobungaPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AGoobungaPlayerState
void AGoobungaPlayerState::StaticRegisterNativesAGoobungaPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoobungaPlayerState);
UClass* Z_Construct_UClass_AGoobungaPlayerState_NoRegister()
{
	return AGoobungaPlayerState::StaticClass();
}
struct Z_Construct_UClass_AGoobungaPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoobungaPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GoobungaPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoobungaPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGoobungaPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobungaPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoobungaPlayerState_Statics::ClassParams = {
	&AGoobungaPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobungaPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoobungaPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoobungaPlayerState()
{
	if (!Z_Registration_Info_UClass_AGoobungaPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoobungaPlayerState.OuterSingleton, Z_Construct_UClass_AGoobungaPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoobungaPlayerState.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AGoobungaPlayerState>()
{
	return AGoobungaPlayerState::StaticClass();
}
AGoobungaPlayerState::AGoobungaPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoobungaPlayerState);
AGoobungaPlayerState::~AGoobungaPlayerState() {}
// End Class AGoobungaPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoobungaPlayerState, AGoobungaPlayerState::StaticClass, TEXT("AGoobungaPlayerState"), &Z_Registration_Info_UClass_AGoobungaPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoobungaPlayerState), 11854631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaPlayerState_h_4059639403(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_GoobungaPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
