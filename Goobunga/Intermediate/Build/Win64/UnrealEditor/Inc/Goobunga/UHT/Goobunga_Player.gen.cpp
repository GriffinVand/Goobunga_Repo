// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Goobunga_Player.h"
#include "Goobunga/Weapons/WeaponSwayData.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobunga_Player() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UDialogueManagerComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPersistentDataInterface_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerCallables_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UTeamInterface_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EAllegiance();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_ECombatAction();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSwayData();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum ECombatAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatAction;
static UEnum* ECombatAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_ECombatAction, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("ECombatAction"));
	}
	return Z_Registration_Info_UEnum_ECombatAction.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<ECombatAction>()
{
	return ECombatAction_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_ECombatAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aim.DisplayName", "Aim" },
		{ "Aim.Name", "ECombatAction::Aim" },
		{ "BlueprintType", "true" },
		{ "HealAbility.DisplayName", "HealAbility" },
		{ "HealAbility.Name", "ECombatAction::HealAbility" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "ECombatAction::Interact" },
		{ "LargeAbility.DisplayName", "LargeAbility" },
		{ "LargeAbility.Name", "ECombatAction::LargeAbility" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
		{ "PrimFire.DisplayName", "PrimFire" },
		{ "PrimFire.Name", "ECombatAction::PrimFire" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "ECombatAction::Reload" },
		{ "SecFire.DisplayName", "SecFire" },
		{ "SecFire.Name", "ECombatAction::SecFire" },
		{ "SmallAbility.DisplayName", "SmallAbility" },
		{ "SmallAbility.Name", "ECombatAction::SmallAbility" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "ECombatAction::Sprint" },
		{ "Swap.DisplayName", "Swap" },
		{ "Swap.Name", "ECombatAction::Swap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatAction::PrimFire", (int64)ECombatAction::PrimFire },
		{ "ECombatAction::SecFire", (int64)ECombatAction::SecFire },
		{ "ECombatAction::Aim", (int64)ECombatAction::Aim },
		{ "ECombatAction::SmallAbility", (int64)ECombatAction::SmallAbility },
		{ "ECombatAction::LargeAbility", (int64)ECombatAction::LargeAbility },
		{ "ECombatAction::HealAbility", (int64)ECombatAction::HealAbility },
		{ "ECombatAction::Sprint", (int64)ECombatAction::Sprint },
		{ "ECombatAction::Reload", (int64)ECombatAction::Reload },
		{ "ECombatAction::Swap", (int64)ECombatAction::Swap },
		{ "ECombatAction::Interact", (int64)ECombatAction::Interact },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_ECombatAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"ECombatAction",
	"ECombatAction",
	Z_Construct_UEnum_Goobunga_ECombatAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ECombatAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_ECombatAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_ECombatAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_ECombatAction()
{
	if (!Z_Registration_Info_UEnum_ECombatAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatAction.InnerSingleton, Z_Construct_UEnum_Goobunga_ECombatAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatAction.InnerSingleton;
}
// End Enum ECombatAction

// Begin Class AGoobunga_Player Function EquipWeapon
struct Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics
{
	struct Goobunga_Player_eventEquipWeapon_Parms
	{
		AWeapon* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goobunga_Player_eventEquipWeapon_Parms, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoobunga_Player, nullptr, "EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::Goobunga_Player_eventEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::Goobunga_Player_eventEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoobunga_Player_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoobunga_Player_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoobunga_Player::execEquipWeapon)
{
	P_GET_OBJECT(AWeapon,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipWeapon(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class AGoobunga_Player Function EquipWeapon

// Begin Class AGoobunga_Player Function OnMontageNotifyBegin
struct Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics
{
	struct Goobunga_Player_eventOnMontageNotifyBegin_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goobunga_Player_eventOnMontageNotifyBegin_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goobunga_Player_eventOnMontageNotifyBegin_Parms, Payload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoobunga_Player, nullptr, "OnMontageNotifyBegin", nullptr, nullptr, Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::Goobunga_Player_eventOnMontageNotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::Goobunga_Player_eventOnMontageNotifyBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoobunga_Player::execOnMontageNotifyBegin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyBegin(Z_Param_NotifyName,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class AGoobunga_Player Function OnMontageNotifyBegin

// Begin Class AGoobunga_Player Function ShouldGrip
struct Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics
{
	struct Goobunga_Player_eventShouldGrip_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Goobunga_Player_eventShouldGrip_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Goobunga_Player_eventShouldGrip_Parms), &Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoobunga_Player, nullptr, "ShouldGrip", nullptr, nullptr, Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::Goobunga_Player_eventShouldGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::Goobunga_Player_eventShouldGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoobunga_Player_ShouldGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoobunga_Player_ShouldGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoobunga_Player::execShouldGrip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldGrip();
	P_NATIVE_END;
}
// End Class AGoobunga_Player Function ShouldGrip

// Begin Class AGoobunga_Player
void AGoobunga_Player::StaticRegisterNativesAGoobunga_Player()
{
	UClass* Class = AGoobunga_Player::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipWeapon", &AGoobunga_Player::execEquipWeapon },
		{ "OnMontageNotifyBegin", &AGoobunga_Player::execOnMontageNotifyBegin },
		{ "ShouldGrip", &AGoobunga_Player::execShouldGrip },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoobunga_Player);
UClass* Z_Construct_UClass_AGoobunga_Player_NoRegister()
{
	return AGoobunga_Player::StaticClass();
}
struct Z_Construct_UClass_AGoobunga_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Goobunga_Player.h" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAllegiance_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPMesh_Static_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPEquipped_Static_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPMesh_Align_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacialAnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAlpha_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reloading_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripAlpha_MetaData[] = {
		{ "Category", "Grip" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueWeaponSwayData_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponKickDir_MetaData[] = {
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for weapon recoil visually in hand\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for weapon recoil visually in hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponKickRot_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueWeaponKickDir_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAdsLoc_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAdsRot_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundComponent_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularHitSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stats\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideWeaponMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerFaceMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//2D Animation\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2D Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshLag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Lag amount of spring arm\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lag amount of spring arm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprinting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Movement\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWeaponSwayData_MetaData[] = {
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwayAmounts_MetaData[] = {
		{ "Category", "WeaponSway" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for actual controller look offset\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for actual controller look offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltFireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAbilityAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAbilityAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallAbilityAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeAbilityAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerAllegiance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerAllegiance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPMesh_Static;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPEquipped_Static;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPMesh_Align;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacialAnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimAlpha;
	static void NewProp_Reloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reloading;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GripAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrueWeaponSwayData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWeaponKickDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWeaponKickRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrueWeaponKickDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAdsLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAdsRot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CriticalHitSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegularHitSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideWeaponMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerFaceMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshLag;
	static void NewProp_Sprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Sprinting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetWeaponSwayData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSwayAmounts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltFireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainAbilityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryAbilityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwapAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallAbilityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LargeAbilityAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoobunga_Player_EquipWeapon, "EquipWeapon" }, // 3884177173
		{ &Z_Construct_UFunction_AGoobunga_Player_OnMontageNotifyBegin, "OnMontageNotifyBegin" }, // 344017325
		{ &Z_Construct_UFunction_AGoobunga_Player_ShouldGrip, "ShouldGrip" }, // 1242178523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoobunga_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerAllegiance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerAllegiance = { "PlayerAllegiance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, PlayerAllegiance), Z_Construct_UEnum_Goobunga_EAllegiance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAllegiance_MetaData), NewProp_PlayerAllegiance_MetaData) }; // 3647989624
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh = { "FPMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPMesh_MetaData), NewProp_FPMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPCamera = { "FPCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPCamera_MetaData), NewProp_FPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh_Static = { "FPMesh_Static", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPMesh_Static), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPMesh_Static_MetaData), NewProp_FPMesh_Static_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPEquipped_Static = { "FPEquipped_Static", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPEquipped_Static), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPEquipped_Static_MetaData), NewProp_FPEquipped_Static_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh_Align = { "FPMesh_Align", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPMesh_Align), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPMesh_Align_MetaData), NewProp_FPMesh_Align_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FacialAnimationComponent = { "FacialAnimationComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FacialAnimationComponent), Z_Construct_UClass_UFacialAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacialAnimationComponent_MetaData), NewProp_FacialAnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadManagerComponent = { "ReloadManagerComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, ReloadManagerComponent), Z_Construct_UClass_UReloadManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadManagerComponent_MetaData), NewProp_ReloadManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_QuestManagerComponent = { "QuestManagerComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, QuestManagerComponent), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestManagerComponent_MetaData), NewProp_QuestManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DialogueManagerComponent = { "DialogueManagerComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, DialogueManagerComponent), Z_Construct_UClass_UDialogueManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManagerComponent_MetaData), NewProp_DialogueManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, WeaponComponent), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponComponent_MetaData), NewProp_WeaponComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AbilityComponent), Z_Construct_UClass_UAbilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimAlpha = { "AimAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AimAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAlpha_MetaData), NewProp_AimAlpha_MetaData) };
void Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Reloading_SetBit(void* Obj)
{
	((AGoobunga_Player*)Obj)->Reloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Reloading = { "Reloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGoobunga_Player), &Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Reloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reloading_MetaData), NewProp_Reloading_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_GripAlpha = { "GripAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, GripAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripAlpha_MetaData), NewProp_GripAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueWeaponSwayData = { "TrueWeaponSwayData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, TrueWeaponSwayData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueWeaponSwayData_MetaData), NewProp_TrueWeaponSwayData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentWeaponKickDir = { "CurrentWeaponKickDir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrentWeaponKickDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponKickDir_MetaData), NewProp_CurrentWeaponKickDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentWeaponKickRot = { "CurrentWeaponKickRot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrentWeaponKickRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponKickRot_MetaData), NewProp_CurrentWeaponKickRot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueWeaponKickDir = { "TrueWeaponKickDir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, TrueWeaponKickDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueWeaponKickDir_MetaData), NewProp_TrueWeaponKickDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAdsLoc = { "CurrentAdsLoc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrentAdsLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAdsLoc_MetaData), NewProp_CurrentAdsLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAdsRot = { "CurrentAdsRot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrentAdsRot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAdsRot_MetaData), NewProp_CurrentAdsRot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HitSoundComponent = { "HitSoundComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, HitSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSoundComponent_MetaData), NewProp_HitSoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CriticalHitSound = { "CriticalHitSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CriticalHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitSound_MetaData), NewProp_CriticalHitSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_RegularHitSound = { "RegularHitSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, RegularHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularHitSound_MetaData), NewProp_RegularHitSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrHealth = { "CurrHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrHealth_MetaData), NewProp_CurrHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HideWeaponMontage = { "HideWeaponMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, HideWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideWeaponMontage_MetaData), NewProp_HideWeaponMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerFaceMaterial = { "PlayerFaceMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, PlayerFaceMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerFaceMaterial_MetaData), NewProp_PlayerFaceMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MeshLag = { "MeshLag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MeshLag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshLag_MetaData), NewProp_MeshLag_MetaData) };
void Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting_SetBit(void* Obj)
{
	((AGoobunga_Player*)Obj)->Sprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting = { "Sprinting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGoobunga_Player), &Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprinting_MetaData), NewProp_Sprinting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TargetWeaponSwayData = { "TargetWeaponSwayData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, TargetWeaponSwayData), Z_Construct_UScriptStruct_FWeaponSwayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWeaponSwayData_MetaData), NewProp_TargetWeaponSwayData_MetaData) }; // 1978455684
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponSwayAmounts = { "WeaponSwayAmounts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, WeaponSwayAmounts), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwayAmounts_MetaData), NewProp_WeaponSwayAmounts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookRotationOffset = { "LookRotationOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, LookRotationOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookRotationOffset_MetaData), NewProp_LookRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffset_MetaData), NewProp_AimOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AltFireAction = { "AltFireAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AltFireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltFireAction_MetaData), NewProp_AltFireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAction_MetaData), NewProp_ReloadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MainAbilityAction = { "MainAbilityAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MainAbilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAbilityAction_MetaData), NewProp_MainAbilityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SecondaryAbilityAction = { "SecondaryAbilityAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SecondaryAbilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAbilityAction_MetaData), NewProp_SecondaryAbilityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SwapAction = { "SwapAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SwapAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapAction_MetaData), NewProp_SwapAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HealAction = { "HealAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, HealAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAction_MetaData), NewProp_HealAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SmallAbilityAction = { "SmallAbilityAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SmallAbilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallAbilityAction_MetaData), NewProp_SmallAbilityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LargeAbilityAction = { "LargeAbilityAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, LargeAbilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeAbilityAction_MetaData), NewProp_LargeAbilityAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerAllegiance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerAllegiance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh_Static,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPEquipped_Static,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh_Align,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FacialAnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_QuestManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DialogueManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Reloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_GripAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueWeaponSwayData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentWeaponKickDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentWeaponKickRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueWeaponKickDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAdsLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAdsRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HitSoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CriticalHitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_RegularHitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HideWeaponMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerFaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MeshLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TargetWeaponSwayData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponSwayAmounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AltFireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MainAbilityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SecondaryAbilityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SwapAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HealAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SmallAbilityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LargeAbilityAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoobunga_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGoobunga_Player_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerCallables_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, IPlayerCallables), false },  // 4286987948
	{ Z_Construct_UClass_UCombatCallables_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, ICombatCallables), false },  // 2659563511
	{ Z_Construct_UClass_UPersistentDataInterface_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, IPersistentDataInterface), false },  // 772352636
	{ Z_Construct_UClass_UTeamInterface_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, ITeamInterface), false },  // 2642082427
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoobunga_Player_Statics::ClassParams = {
	&AGoobunga_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoobunga_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoobunga_Player()
{
	if (!Z_Registration_Info_UClass_AGoobunga_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoobunga_Player.OuterSingleton, Z_Construct_UClass_AGoobunga_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoobunga_Player.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AGoobunga_Player>()
{
	return AGoobunga_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoobunga_Player);
AGoobunga_Player::~AGoobunga_Player() {}
// End Class AGoobunga_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatAction_StaticEnum, TEXT("ECombatAction"), &Z_Registration_Info_UEnum_ECombatAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3393684221U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoobunga_Player, AGoobunga_Player::StaticClass, TEXT("AGoobunga_Player"), &Z_Registration_Info_UClass_AGoobunga_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoobunga_Player), 291238309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_765255012(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
