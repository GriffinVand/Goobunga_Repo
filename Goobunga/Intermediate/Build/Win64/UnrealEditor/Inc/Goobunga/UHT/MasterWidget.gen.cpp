// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/MasterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GOOBUNGA_API UClass* Z_Construct_UClass_UMasterWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UMasterWidget_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_ELayerType();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum ELayerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayerType;
static UEnum* ELayerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELayerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_ELayerType, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("ELayerType"));
	}
	return Z_Registration_Info_UEnum_ELayerType.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<ELayerType>()
{
	return ELayerType_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_ELayerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Game.DisplayName", "Game" },
		{ "Game.Name", "ELayerType::Game" },
		{ "Menu.DisplayName", "Menu" },
		{ "Menu.Name", "ELayerType::Menu" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
		{ "Prompt.DisplayName", "Prompt" },
		{ "Prompt.Name", "ELayerType::Prompt" },
		{ "System.DisplayName", "System" },
		{ "System.Name", "ELayerType::System" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayerType::Game", (int64)ELayerType::Game },
		{ "ELayerType::Menu", (int64)ELayerType::Menu },
		{ "ELayerType::Prompt", (int64)ELayerType::Prompt },
		{ "ELayerType::System", (int64)ELayerType::System },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_ELayerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"ELayerType",
	"ELayerType",
	Z_Construct_UEnum_Goobunga_ELayerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ELayerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ELayerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_ELayerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_ELayerType()
{
	if (!Z_Registration_Info_UEnum_ELayerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayerType.InnerSingleton, Z_Construct_UEnum_Goobunga_ELayerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELayerType.InnerSingleton;
}
// End Enum ELayerType

// Begin Class UMasterWidget Function PushWidget
struct Z_Construct_UFunction_UMasterWidget_PushWidget_Statics
{
	struct MasterWidget_eventPushWidget_Parms
	{
		TSubclassOf<UCommonActivatableWidget> WidgetClass;
		ELayerType Layer;
		UCommonActivatableWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MasterWidget_eventPushWidget_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MasterWidget_eventPushWidget_Parms, Layer), Z_Construct_UEnum_Goobunga_ELayerType, METADATA_PARAMS(0, nullptr) }; // 2628333339
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MasterWidget_eventPushWidget_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_Layer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMasterWidget, nullptr, "PushWidget", nullptr, nullptr, Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::MasterWidget_eventPushWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::MasterWidget_eventPushWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMasterWidget_PushWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMasterWidget_PushWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMasterWidget::execPushWidget)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_GET_ENUM(ELayerType,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonActivatableWidget**)Z_Param__Result=P_THIS->PushWidget(Z_Param_WidgetClass,ELayerType(Z_Param_Layer));
	P_NATIVE_END;
}
// End Class UMasterWidget Function PushWidget

// Begin Class UMasterWidget
void UMasterWidget::StaticRegisterNativesUMasterWidget()
{
	UClass* Class = UMasterWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PushWidget", &UMasterWidget::execPushWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMasterWidget);
UClass* Z_Construct_UClass_UMasterWidget_NoRegister()
{
	return UMasterWidget::StaticClass();
}
struct Z_Construct_UClass_UMasterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserInterface/MasterWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MasterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MasterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MasterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MasterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/MasterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMasterWidget_PushWidget, "PushWidget" }, // 1580677244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMasterWidget_Statics::NewProp_GameStack = { "GameStack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMasterWidget, GameStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStack_MetaData), NewProp_GameStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMasterWidget_Statics::NewProp_MenuStack = { "MenuStack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMasterWidget, MenuStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuStack_MetaData), NewProp_MenuStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMasterWidget_Statics::NewProp_PromptStack = { "PromptStack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMasterWidget, PromptStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptStack_MetaData), NewProp_PromptStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMasterWidget_Statics::NewProp_SystemStack = { "SystemStack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMasterWidget, SystemStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemStack_MetaData), NewProp_SystemStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMasterWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWidget_Statics::NewProp_GameStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWidget_Statics::NewProp_MenuStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWidget_Statics::NewProp_PromptStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterWidget_Statics::NewProp_SystemStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMasterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMasterWidget_Statics::ClassParams = {
	&UMasterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMasterWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMasterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMasterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMasterWidget()
{
	if (!Z_Registration_Info_UClass_UMasterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMasterWidget.OuterSingleton, Z_Construct_UClass_UMasterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMasterWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UMasterWidget>()
{
	return UMasterWidget::StaticClass();
}
UMasterWidget::UMasterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMasterWidget);
UMasterWidget::~UMasterWidget() {}
// End Class UMasterWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELayerType_StaticEnum, TEXT("ELayerType"), &Z_Registration_Info_UEnum_ELayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2628333339U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMasterWidget, UMasterWidget::StaticClass, TEXT("UMasterWidget"), &Z_Registration_Info_UClass_UMasterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMasterWidget), 781681452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_1475021523(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_MasterWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
