// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Quests/QuestManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UQuestManagerComponent
void UQuestManagerComponent::StaticRegisterNativesUQuestManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestManagerComponent);
UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister()
{
	return UQuestManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UQuestManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Quests/QuestManagerComponent.h" },
		{ "ModuleRelativePath", "Quests/QuestManagerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams = {
	&UQuestManagerComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestManagerComponent()
{
	if (!Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton, Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UQuestManagerComponent>()
{
	return UQuestManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManagerComponent);
UQuestManagerComponent::~UQuestManagerComponent() {}
// End Class UQuestManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManagerComponent, UQuestManagerComponent::StaticClass, TEXT("UQuestManagerComponent"), &Z_Registration_Info_UClass_UQuestManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManagerComponent), 3743087012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_759608836(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Quests_QuestManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
