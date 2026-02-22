// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/LoadMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadMenu() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GOOBUNGA_API UClass* Z_Construct_UClass_ULoadMenu();
GOOBUNGA_API UClass* Z_Construct_UClass_ULoadMenu_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_ULoadSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class ULoadMenu
void ULoadMenu::StaticRegisterNativesULoadMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadMenu);
UClass* Z_Construct_UClass_ULoadMenu_NoRegister()
{
	return ULoadMenu::StaticClass();
}
struct Z_Construct_UClass_ULoadMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserInterface/LoadMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlotClass_MetaData[] = {
		{ "Category", "LoadMenu" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlotContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlot1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlot2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSlot3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/LoadMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadSlotClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadSlotContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadSlot1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadSlot2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadSlot3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlotClass = { "LoadSlotClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadMenu, LoadSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlotClass_MetaData), NewProp_LoadSlotClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlotContainer = { "LoadSlotContainer", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadMenu, LoadSlotContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlotContainer_MetaData), NewProp_LoadSlotContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot1 = { "LoadSlot1", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadMenu, LoadSlot1), Z_Construct_UClass_ULoadSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlot1_MetaData), NewProp_LoadSlot1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot2 = { "LoadSlot2", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadMenu, LoadSlot2), Z_Construct_UClass_ULoadSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlot2_MetaData), NewProp_LoadSlot2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot3 = { "LoadSlot3", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadMenu, LoadSlot3), Z_Construct_UClass_ULoadSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSlot3_MetaData), NewProp_LoadSlot3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlotContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadMenu_Statics::NewProp_LoadSlot3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadMenu_Statics::ClassParams = {
	&ULoadMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULoadMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadMenu()
{
	if (!Z_Registration_Info_UClass_ULoadMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadMenu.OuterSingleton, Z_Construct_UClass_ULoadMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadMenu.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<ULoadMenu>()
{
	return ULoadMenu::StaticClass();
}
ULoadMenu::ULoadMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadMenu);
ULoadMenu::~ULoadMenu() {}
// End Class ULoadMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadMenu, ULoadMenu::StaticClass, TEXT("ULoadMenu"), &Z_Registration_Info_UClass_ULoadMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadMenu), 4067652142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadMenu_h_3643930057(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_LoadMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
