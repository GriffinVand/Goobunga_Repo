// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/WeaponComponent.h"
#include "Goobunga/PersistentData/GoobungaSaveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UWeaponComponent();
GOOBUNGA_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EWeaponSlot();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSaveData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EWeaponSlot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponSlot;
static UEnum* EWeaponSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EWeaponSlot, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EWeaponSlot"));
	}
	return Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EWeaponSlot>()
{
	return EWeaponSlot_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWeaponSlot::None" },
		{ "Primary.DisplayName", "Primary" },
		{ "Primary.Name", "EWeaponSlot::Primary" },
		{ "Secondary.DisplayName", "Secondary" },
		{ "Secondary.Name", "EWeaponSlot::Secondary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponSlot::None", (int64)EWeaponSlot::None },
		{ "EWeaponSlot::Primary", (int64)EWeaponSlot::Primary },
		{ "EWeaponSlot::Secondary", (int64)EWeaponSlot::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EWeaponSlot",
	"EWeaponSlot",
	Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EWeaponSlot()
{
	if (!Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton, Z_Construct_UEnum_Goobunga_EWeaponSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton;
}
// End Enum EWeaponSlot

// Begin Class UWeaponComponent Function GetEquippedWeapon
struct Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics
{
	struct WeaponComponent_eventGetEquippedWeapon_Parms
	{
		AWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::WeaponComponent_eventGetEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::WeaponComponent_eventGetEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeapon**)Z_Param__Result=P_THIS->GetEquippedWeapon();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function GetEquippedWeapon

// Begin Class UWeaponComponent Function OnAdsTimelineFinished
struct Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "OnAdsTimelineFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execOnAdsTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAdsTimelineFinished();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function OnAdsTimelineFinished

// Begin Class UWeaponComponent Function OnAdsTimelineUpdate
struct Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics
{
	struct WeaponComponent_eventOnAdsTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventOnAdsTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "OnAdsTimelineUpdate", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::WeaponComponent_eventOnAdsTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::WeaponComponent_eventOnAdsTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execOnAdsTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAdsTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function OnAdsTimelineUpdate

// Begin Class UWeaponComponent
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquippedWeapon", &UWeaponComponent::execGetEquippedWeapon },
		{ "OnAdsTimelineFinished", &UWeaponComponent::execOnAdsTimelineFinished },
		{ "OnAdsTimelineUpdate", &UWeaponComponent::execOnAdsTimelineUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapons/WeaponComponent.h" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultWeapons_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapons_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponInstance_MetaData[] = {
		{ "Category", "WeaponComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WEAPONS\n" },
#endif
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPONS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponInstance_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedWeapons_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdsTimeline_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRelativeTransform_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdsTime_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAds_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdsCurve_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOwner_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Weapons/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseDefaultWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultWeapons;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeapons_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultWeapons_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultWeapons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultWeapons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeaponInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeaponInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedWeapons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdsTimeline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimRelativeTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdsTime;
	static void NewProp_bAds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdsCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_GetEquippedWeapon, "GetEquippedWeapon" }, // 355784691
		{ &Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineFinished, "OnAdsTimelineFinished" }, // 3782582534
		{ &Z_Construct_UFunction_UWeaponComponent_OnAdsTimelineUpdate, "OnAdsTimelineUpdate" }, // 3201718562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bUseDefaultWeapons_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bUseDefaultWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bUseDefaultWeapons = { "bUseDefaultWeapons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bUseDefaultWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultWeapons_MetaData), NewProp_bUseDefaultWeapons_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_ValueProp = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(0, nullptr) }; // 1263523386
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_Key_KeyProp = { "DefaultWeapons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Goobunga_EWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3924171126
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, DefaultWeapons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeapons_MetaData), NewProp_DefaultWeapons_MetaData) }; // 3924171126 1263523386
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeaponInstance = { "PrimaryWeaponInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, PrimaryWeaponInstance), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeaponInstance_MetaData), NewProp_PrimaryWeaponInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeaponInstance = { "SecondaryWeaponInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, SecondaryWeaponInstance), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeaponInstance_MetaData), NewProp_SecondaryWeaponInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnedWeapons_Inner = { "OwnedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponSaveData, METADATA_PARAMS(0, nullptr) }; // 1263523386
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnedWeapons = { "OwnedWeapons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, OwnedWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedWeapons_MetaData), NewProp_OwnedWeapons_MetaData) }; // 1263523386
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsTimeline = { "AdsTimeline", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AdsTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdsTimeline_MetaData), NewProp_AdsTimeline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimRelativeTransform = { "AimRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AimRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRelativeTransform_MetaData), NewProp_AimRelativeTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsTime = { "AdsTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AdsTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdsTime_MetaData), NewProp_AdsTime_MetaData) };
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bAds_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bAds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bAds = { "bAds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bAds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAds_MetaData), NewProp_bAds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsCurve = { "AdsCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, AdsCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdsCurve_MetaData), NewProp_AdsCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PlayerOwner = { "PlayerOwner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, PlayerOwner), Z_Construct_UClass_AGoobunga_Player_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOwner_MetaData), NewProp_PlayerOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bUseDefaultWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnedWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnedWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AimRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bAds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AdsCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PlayerOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UWeaponComponent>()
{
	return UWeaponComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// End Class UWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponSlot_StaticEnum, TEXT("EWeaponSlot"), &Z_Registration_Info_UEnum_EWeaponSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924171126U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 1537930007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_1514321188(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
