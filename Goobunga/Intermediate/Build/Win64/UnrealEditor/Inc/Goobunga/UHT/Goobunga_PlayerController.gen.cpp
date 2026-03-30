// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Goobunga_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobunga_PlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_PlayerController();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_PlayerController_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityWidgetBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UMasterWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerMainWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Delegate FOnMasterWidgetCreated
struct Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnMasterWidgetCreated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMasterWidgetCreated_DelegateWrapper(const FMulticastScriptDelegate& OnMasterWidgetCreated)
{
	OnMasterWidgetCreated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMasterWidgetCreated

// Begin Class AGoobunga_PlayerController
void AGoobunga_PlayerController::StaticRegisterNativesAGoobunga_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoobunga_PlayerController);
UClass* Z_Construct_UClass_AGoobunga_PlayerController_NoRegister()
{
	return AGoobunga_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AGoobunga_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Goobunga_PlayerController.h" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMasterWidgetCreated_MetaData[] = {
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUD_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponUI_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallAbilityUI_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeAbilityUI_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAbilityUI_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterWidget_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterWidgetClass_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDClass_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponUIClass_MetaData[] = {
		{ "Category", "Goobunga_PlayerController" },
		{ "ModuleRelativePath", "Goobunga_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMasterWidgetCreated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallAbilityUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LargeAbilityUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealAbilityUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MasterWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoobunga_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_OnMasterWidgetCreated = { "OnMasterWidgetCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, OnMasterWidgetCreated), Z_Construct_UDelegateFunction_Goobunga_OnMasterWidgetCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMasterWidgetCreated_MetaData), NewProp_OnMasterWidgetCreated_MetaData) }; // 1173233372
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MainHUD = { "MainHUD", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, MainHUD), Z_Construct_UClass_UPlayerMainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUD_MetaData), NewProp_MainHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_WeaponUI = { "WeaponUI", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, WeaponUI), Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponUI_MetaData), NewProp_WeaponUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_SmallAbilityUI = { "SmallAbilityUI", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, SmallAbilityUI), Z_Construct_UClass_UAbilityWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallAbilityUI_MetaData), NewProp_SmallAbilityUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_LargeAbilityUI = { "LargeAbilityUI", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, LargeAbilityUI), Z_Construct_UClass_UAbilityWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeAbilityUI_MetaData), NewProp_LargeAbilityUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_HealAbilityUI = { "HealAbilityUI", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, HealAbilityUI), Z_Construct_UClass_UAbilityWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAbilityUI_MetaData), NewProp_HealAbilityUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MasterWidget = { "MasterWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, MasterWidget), Z_Construct_UClass_UMasterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterWidget_MetaData), NewProp_MasterWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MasterWidgetClass = { "MasterWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, MasterWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMasterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterWidgetClass_MetaData), NewProp_MasterWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MainHUDClass = { "MainHUDClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, MainHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerMainWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDClass_MetaData), NewProp_MainHUDClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_WeaponUIClass = { "WeaponUIClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_PlayerController, WeaponUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponUIClass_MetaData), NewProp_WeaponUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoobunga_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_OnMasterWidgetCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MainHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_WeaponUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_SmallAbilityUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_LargeAbilityUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_HealAbilityUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MasterWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MasterWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_MainHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_PlayerController_Statics::NewProp_WeaponUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoobunga_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoobunga_PlayerController_Statics::ClassParams = {
	&AGoobunga_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGoobunga_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoobunga_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoobunga_PlayerController()
{
	if (!Z_Registration_Info_UClass_AGoobunga_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoobunga_PlayerController.OuterSingleton, Z_Construct_UClass_AGoobunga_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoobunga_PlayerController.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AGoobunga_PlayerController>()
{
	return AGoobunga_PlayerController::StaticClass();
}
AGoobunga_PlayerController::AGoobunga_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoobunga_PlayerController);
AGoobunga_PlayerController::~AGoobunga_PlayerController() {}
// End Class AGoobunga_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoobunga_PlayerController, AGoobunga_PlayerController::StaticClass, TEXT("AGoobunga_PlayerController"), &Z_Registration_Info_UClass_AGoobunga_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoobunga_PlayerController), 2973246796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_3948800953(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
