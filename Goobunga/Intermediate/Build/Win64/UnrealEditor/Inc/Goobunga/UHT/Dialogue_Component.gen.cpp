// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Dialogue_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue_Component() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogue_Component();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogue_Component_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UDialogue_Component
void UDialogue_Component::StaticRegisterNativesUDialogue_Component()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogue_Component);
UClass* Z_Construct_UClass_UDialogue_Component_NoRegister()
{
	return UDialogue_Component::StaticClass();
}
struct Z_Construct_UClass_UDialogue_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dialogue_Component.h" },
		{ "ModuleRelativePath", "Dialogue_Component.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogue_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogue_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogue_Component_Statics::ClassParams = {
	&UDialogue_Component::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogue_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogue_Component()
{
	if (!Z_Registration_Info_UClass_UDialogue_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogue_Component.OuterSingleton, Z_Construct_UClass_UDialogue_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogue_Component.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UDialogue_Component>()
{
	return UDialogue_Component::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogue_Component);
UDialogue_Component::~UDialogue_Component() {}
// End Class UDialogue_Component

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Dialogue_Component_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogue_Component, UDialogue_Component::StaticClass, TEXT("UDialogue_Component"), &Z_Registration_Info_UClass_UDialogue_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogue_Component), 2301235720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Dialogue_Component_h_916967195(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Dialogue_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGames_Goobunga_Source_Goobunga_Dialogue_Component_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
