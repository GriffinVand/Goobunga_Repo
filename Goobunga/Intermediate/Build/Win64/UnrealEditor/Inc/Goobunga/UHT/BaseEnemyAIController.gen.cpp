// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Enemies/BaseEnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemyAIController();
GOOBUNGA_API UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class ABaseEnemyAIController
void ABaseEnemyAIController::StaticRegisterNativesABaseEnemyAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemyAIController);
UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister()
{
	return ABaseEnemyAIController::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemies/BaseEnemyAIController.h" },
		{ "ModuleRelativePath", "Enemies/BaseEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams = {
	&ABaseEnemyAIController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemyAIController()
{
	if (!Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton, Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ABaseEnemyAIController>()
{
	return ABaseEnemyAIController::StaticClass();
}
ABaseEnemyAIController::ABaseEnemyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyAIController);
ABaseEnemyAIController::~ABaseEnemyAIController() {}
// End Class ABaseEnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyAIController, ABaseEnemyAIController::StaticClass, TEXT("ABaseEnemyAIController"), &Z_Registration_Info_UClass_ABaseEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyAIController), 2787153725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_3392654639(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
