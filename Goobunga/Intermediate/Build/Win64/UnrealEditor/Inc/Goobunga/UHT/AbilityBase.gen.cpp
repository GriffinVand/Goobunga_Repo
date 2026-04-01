// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Abilities/AbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityWidgetBase_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAbilityState();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAbilityType();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EAbilityType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityType;
static UEnum* EAbilityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EAbilityType, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EAbilityType"));
	}
	return Z_Registration_Info_UEnum_EAbilityType.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EAbilityType>()
{
	return EAbilityType_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EAbilityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Heal.DisplayName", "Heal" },
		{ "Heal.Name", "EAbilityType::Heal" },
		{ "Large.DisplayName", "Large" },
		{ "Large.Name", "EAbilityType::Large" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "EAbilityType::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityType::Small", (int64)EAbilityType::Small },
		{ "EAbilityType::Large", (int64)EAbilityType::Large },
		{ "EAbilityType::Heal", (int64)EAbilityType::Heal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EAbilityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EAbilityType",
	"EAbilityType",
	Z_Construct_UEnum_Goobunga_EAbilityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EAbilityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EAbilityType()
{
	if (!Z_Registration_Info_UEnum_EAbilityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityType.InnerSingleton, Z_Construct_UEnum_Goobunga_EAbilityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityType.InnerSingleton;
}
// End Enum EAbilityType

// Begin Enum EAbilityState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityState;
static UEnum* EAbilityState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EAbilityState, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EAbilityState"));
	}
	return Z_Registration_Info_UEnum_EAbilityState.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EAbilityState>()
{
	return EAbilityState_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EAbilityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EAbilityState::Active" },
		{ "BlueprintType", "true" },
		{ "Charging.DisplayName", "Charging" },
		{ "Charging.Name", "EAbilityState::Charging" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EAbilityState::Idle" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
		{ "Recovering.DisplayName", "Recovering" },
		{ "Recovering.Name", "EAbilityState::Recovering" },
		{ "Releasing.DisplayName", "Releasing" },
		{ "Releasing.Name", "EAbilityState::Releasing" },
		{ "WaitingForPlayer.DisplayName", "WaitingForPlayer" },
		{ "WaitingForPlayer.Name", "EAbilityState::WaitingForPlayer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityState::Idle", (int64)EAbilityState::Idle },
		{ "EAbilityState::WaitingForPlayer", (int64)EAbilityState::WaitingForPlayer },
		{ "EAbilityState::Charging", (int64)EAbilityState::Charging },
		{ "EAbilityState::Active", (int64)EAbilityState::Active },
		{ "EAbilityState::Releasing", (int64)EAbilityState::Releasing },
		{ "EAbilityState::Recovering", (int64)EAbilityState::Recovering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EAbilityState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EAbilityState",
	"EAbilityState",
	Z_Construct_UEnum_Goobunga_EAbilityState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EAbilityState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EAbilityState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EAbilityState()
{
	if (!Z_Registration_Info_UEnum_EAbilityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityState.InnerSingleton, Z_Construct_UEnum_Goobunga_EAbilityState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityState.InnerSingleton;
}
// End Enum EAbilityState

// Begin Delegate FOnCooldownChanged
struct Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics
{
	struct _Script_Goobunga_eventOnCooldownChanged_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Goobunga_eventOnCooldownChanged_Parms, Percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnCooldownChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::_Script_Goobunga_eventOnCooldownChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::_Script_Goobunga_eventOnCooldownChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnCooldownChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, float Percent)
{
	struct _Script_Goobunga_eventOnCooldownChanged_Parms
	{
		float Percent;
	};
	_Script_Goobunga_eventOnCooldownChanged_Parms Parms;
	Parms.Percent=Percent;
	OnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCooldownChanged

// Begin Delegate FOnStateChanged
struct Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics
{
	struct _Script_Goobunga_eventOnStateChanged_Parms
	{
		EAbilityState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Goobunga_eventOnStateChanged_Parms, State), Z_Construct_UEnum_Goobunga_EAbilityState, METADATA_PARAMS(0, nullptr) }; // 3671422150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Goobunga, nullptr, "OnStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::_Script_Goobunga_eventOnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::_Script_Goobunga_eventOnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Goobunga_OnStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStateChanged, EAbilityState State)
{
	struct _Script_Goobunga_eventOnStateChanged_Parms
	{
		EAbilityState State;
	};
	_Script_Goobunga_eventOnStateChanged_Parms Parms;
	Parms.State=State;
	OnStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStateChanged

// Begin Class UAbilityBase
void UAbilityBase::StaticRegisterNativesUAbilityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityBase);
UClass* Z_Construct_UClass_UAbilityBase_NoRegister()
{
	return UAbilityBase::StaticClass();
}
struct Z_Construct_UClass_UAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/AbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityIcon_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityWidgetClass_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldown_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlocksADS_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlocksFire_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablesGrip_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsToggle_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresActiveStart_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassive_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlocksWeapon_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrActiveMontage_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/AbilityBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AbilityID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityIcon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityCooldown;
	static void NewProp_bBlocksADS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocksADS;
	static void NewProp_bBlocksFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocksFire;
	static void NewProp_bDisablesGrip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablesGrip;
	static void NewProp_bIsToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToggle;
	static void NewProp_bRequiresActiveStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresActiveStart;
	static void NewProp_bIsPassive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassive;
	static void NewProp_bBlocksWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocksWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrActiveMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityType), Z_Construct_UEnum_Goobunga_EAbilityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityType_MetaData), NewProp_AbilityType_MetaData) }; // 2187558570
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityID_MetaData), NewProp_AbilityID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityIcon = { "AbilityIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityIcon_MetaData), NewProp_AbilityIcon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityWidgetClass = { "AbilityWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityWidgetClass_MetaData), NewProp_AbilityWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityCooldown = { "AbilityCooldown", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCooldown_MetaData), NewProp_AbilityCooldown_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksADS_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bBlocksADS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksADS = { "bBlocksADS", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksADS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlocksADS_MetaData), NewProp_bBlocksADS_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksFire_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bBlocksFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksFire = { "bBlocksFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlocksFire_MetaData), NewProp_bBlocksFire_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bDisablesGrip_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bDisablesGrip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bDisablesGrip = { "bDisablesGrip", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bDisablesGrip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablesGrip_MetaData), NewProp_bDisablesGrip_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsToggle_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bIsToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsToggle = { "bIsToggle", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsToggle_MetaData), NewProp_bIsToggle_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bRequiresActiveStart_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bRequiresActiveStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bRequiresActiveStart = { "bRequiresActiveStart", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bRequiresActiveStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresActiveStart_MetaData), NewProp_bRequiresActiveStart_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsPassive_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bIsPassive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsPassive = { "bIsPassive", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsPassive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPassive_MetaData), NewProp_bIsPassive_MetaData) };
void Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksWeapon_SetBit(void* Obj)
{
	((UAbilityBase*)Obj)->bBlocksWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksWeapon = { "bBlocksWeapon", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityBase), &Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlocksWeapon_MetaData), NewProp_bBlocksWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrActiveMontage = { "CurrActiveMontage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, CurrActiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrActiveMontage_MetaData), NewProp_CurrActiveMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, Player), Z_Construct_UClass_AGoobunga_Player_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, AbilityComponent), Z_Construct_UClass_UAbilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bDisablesGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bRequiresActiveStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bIsPassive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_bBlocksWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrActiveMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_AbilityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityBase_Statics::ClassParams = {
	&UAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityBase()
{
	if (!Z_Registration_Info_UClass_UAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityBase.OuterSingleton, Z_Construct_UClass_UAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityBase.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<UAbilityBase>()
{
	return UAbilityBase::StaticClass();
}
UAbilityBase::UAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityBase);
UAbilityBase::~UAbilityBase() {}
// End Class UAbilityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityType_StaticEnum, TEXT("EAbilityType"), &Z_Registration_Info_UEnum_EAbilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2187558570U) },
		{ EAbilityState_StaticEnum, TEXT("EAbilityState"), &Z_Registration_Info_UEnum_EAbilityState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3671422150U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityBase, UAbilityBase::StaticClass, TEXT("UAbilityBase"), &Z_Registration_Info_UClass_UAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityBase), 3904458140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_2443032388(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Abilities_AbilityBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
