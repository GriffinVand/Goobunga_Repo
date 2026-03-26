// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/UserInterface/PlayerWeaponAmmoWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWeaponAmmoWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EWeaponUItype();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class UPlayerWeaponAmmoWidget Function OnAmmoChanged
struct Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponAmmoWidget, nullptr, "OnAmmoChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWeaponAmmoWidget::execOnAmmoChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAmmoChanged();
	P_NATIVE_END;
}
// End Class UPlayerWeaponAmmoWidget Function OnAmmoChanged

// Begin Class UPlayerWeaponAmmoWidget
void UPlayerWeaponAmmoWidget::StaticRegisterNativesUPlayerWeaponAmmoWidget()
{
	UClass* Class = UPlayerWeaponAmmoWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAmmoChanged", &UPlayerWeaponAmmoWidget::execOnAmmoChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWeaponAmmoWidget);
UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister()
{
	return UPlayerWeaponAmmoWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIconTexture_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWidgetClass_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWidgets_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIconMaterial_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIconMaterialParent_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColor_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveColor_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWidthValues_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHeightValues_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMaxRowValues_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPaddingsLeft_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPaddingsUp_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainer1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainer2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainer3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainer4_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainer5_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletContainers_MetaData[] = {
		{ "Category", "PlayerWeaponAmmoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserInterface/PlayerWeaponAmmoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIconTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoTextBlock;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BulletWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIconMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIconMaterialParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletWidthValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletWidthValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletWidthValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletWidthValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletHeightValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletHeightValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletHeightValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletHeightValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletMaxRowValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletMaxRowValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletMaxRowValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletMaxRowValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletPaddingsLeft_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletPaddingsLeft_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletPaddingsLeft_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletPaddingsLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletPaddingsUp_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletPaddingsUp_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletPaddingsUp_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletPaddingsUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainer1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainer2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainer3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainer4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainer5;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BulletContainers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWeaponAmmoWidget_OnAmmoChanged, "OnAmmoChanged" }, // 3003161147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWeaponAmmoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconTexture = { "WeaponIconTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIconTexture_MetaData), NewProp_WeaponIconTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconImage = { "WeaponIconImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponIconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIconImage_MetaData), NewProp_WeaponIconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponAmmoTextBlock = { "WeaponAmmoTextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponAmmoTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoTextBlock_MetaData), NewProp_WeaponAmmoTextBlock_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgetClass = { "BulletWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWidgetClass_MetaData), NewProp_BulletWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets_Inner = { "BulletWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets = { "BulletWidgets", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWidgets_MetaData), NewProp_BulletWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconMaterial = { "WeaponIconMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponIconMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIconMaterial_MetaData), NewProp_WeaponIconMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconMaterialParent = { "WeaponIconMaterialParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, WeaponIconMaterialParent), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIconMaterialParent_MetaData), NewProp_WeaponIconMaterialParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_ActiveColor = { "ActiveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, ActiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveColor_MetaData), NewProp_ActiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_InactiveColor = { "InactiveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, InactiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveColor_MetaData), NewProp_InactiveColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_ValueProp = { "BulletWidthValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_Key_KeyProp = { "BulletWidthValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(0, nullptr) }; // 105456784
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues = { "BulletWidthValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletWidthValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWidthValues_MetaData), NewProp_BulletWidthValues_MetaData) }; // 105456784
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_ValueProp = { "BulletHeightValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_Key_KeyProp = { "BulletHeightValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(0, nullptr) }; // 105456784
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues = { "BulletHeightValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletHeightValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHeightValues_MetaData), NewProp_BulletHeightValues_MetaData) }; // 105456784
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_ValueProp = { "BulletMaxRowValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_Key_KeyProp = { "BulletMaxRowValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(0, nullptr) }; // 105456784
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues = { "BulletMaxRowValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletMaxRowValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMaxRowValues_MetaData), NewProp_BulletMaxRowValues_MetaData) }; // 105456784
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_ValueProp = { "BulletPaddingsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_Key_KeyProp = { "BulletPaddingsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(0, nullptr) }; // 105456784
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft = { "BulletPaddingsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletPaddingsLeft), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPaddingsLeft_MetaData), NewProp_BulletPaddingsLeft_MetaData) }; // 105456784
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_ValueProp = { "BulletPaddingsUp", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_Key_KeyProp = { "BulletPaddingsUp_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(0, nullptr) }; // 105456784
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp = { "BulletPaddingsUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletPaddingsUp), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPaddingsUp_MetaData), NewProp_BulletPaddingsUp_MetaData) }; // 105456784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer1 = { "BulletContainer1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainer1), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainer1_MetaData), NewProp_BulletContainer1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer2 = { "BulletContainer2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainer2), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainer2_MetaData), NewProp_BulletContainer2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer3 = { "BulletContainer3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainer3), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainer3_MetaData), NewProp_BulletContainer3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer4 = { "BulletContainer4", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainer4), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainer4_MetaData), NewProp_BulletContainer4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer5 = { "BulletContainer5", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainer5), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainer5_MetaData), NewProp_BulletContainer5_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainers_Inner = { "BulletContainers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainers = { "BulletContainers", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWeaponAmmoWidget, BulletContainers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletContainers_MetaData), NewProp_BulletContainers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponAmmoTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_WeaponIconMaterialParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_ActiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_InactiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletWidthValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletHeightValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletMaxRowValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletPaddingsUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainer5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::NewProp_BulletContainers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::ClassParams = {
	&UPlayerWeaponAmmoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton, Z_Construct_UClass_UPlayerWeaponAmmoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UPlayerWeaponAmmoWidget>()
{
	return UPlayerWeaponAmmoWidget::StaticClass();
}
UPlayerWeaponAmmoWidget::UPlayerWeaponAmmoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWeaponAmmoWidget);
UPlayerWeaponAmmoWidget::~UPlayerWeaponAmmoWidget() {}
// End Class UPlayerWeaponAmmoWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWeaponAmmoWidget, UPlayerWeaponAmmoWidget::StaticClass, TEXT("UPlayerWeaponAmmoWidget"), &Z_Registration_Info_UClass_UPlayerWeaponAmmoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWeaponAmmoWidget), 2492118854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_3898041280(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_UserInterface_PlayerWeaponAmmoWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
