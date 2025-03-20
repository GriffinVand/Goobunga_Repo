// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Goobunga_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoobunga_Player() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player();
GOOBUNGA_API UClass* Z_Construct_UClass_AGoobunga_Player_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UCombatCallables_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFacialAnimationComponent_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerCallables_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UReloadManagerComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AGoobunga_Player
void AGoobunga_Player::StaticRegisterNativesAGoobunga_Player()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Default Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMeshOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Offsets FPMesh from FPCamera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offsets FPMesh from FPCamera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueLookDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Maintains camera location but inherits mesh offset\n//Used to calculate where player is truly aiming(not always center screen)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maintains camera location but inherits mesh offset\nUsed to calculate where player is truly aiming(not always center screen)" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoWidgetClass_MetaData[] = {
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "EditInline", "true" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAimAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0 to 1, 1 being full ads, 0 being full hip\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 to 1, 1 being full ads, 0 being full hip" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTiltX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hand rotation matching movement direction\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand rotation matching movement direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTiltY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Goobunga_Player" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Input\n//\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveLeftAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveFwdAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltFireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current equipped item, can be a weapon or an item\n" },
#endif
		{ "ModuleRelativePath", "Goobunga_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current equipped item, can be a weapon or an item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Goobunga_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMeshOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrueLookDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacialAnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadManagerComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAmmoWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerFaceMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAimAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandTiltX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandTiltY;
	static void NewProp_Sprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Sprinting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveLeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveFwdAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveBackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltFireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoobunga_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh = { "FPMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPMesh_MetaData), NewProp_FPMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPCamera = { "FPCamera", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPCamera_MetaData), NewProp_FPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CameraMeshOffset = { "CameraMeshOffset", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CameraMeshOffset), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMeshOffset_MetaData), NewProp_CameraMeshOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueLookDirection = { "TrueLookDirection", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, TrueLookDirection), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueLookDirection_MetaData), NewProp_TrueLookDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FacialAnimationComponent = { "FacialAnimationComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FacialAnimationComponent), Z_Construct_UClass_UFacialAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacialAnimationComponent_MetaData), NewProp_FacialAnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadManagerComponent = { "ReloadManagerComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, ReloadManagerComponent), Z_Construct_UClass_UReloadManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadManagerComponent_MetaData), NewProp_ReloadManagerComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponAmmoWidgetClass = { "WeaponAmmoWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, WeaponAmmoWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoWidgetClass_MetaData), NewProp_WeaponAmmoWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponAmmoWidget = { "WeaponAmmoWidget", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, WeaponAmmoWidget), Z_Construct_UClass_UPlayerWeaponAmmoWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoWidget_MetaData), NewProp_WeaponAmmoWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrHealth = { "CurrHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrHealth_MetaData), NewProp_CurrHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerFaceMaterial = { "PlayerFaceMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, PlayerFaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerFaceMaterial_MetaData), NewProp_PlayerFaceMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MeshLag = { "MeshLag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MeshLag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshLag_MetaData), NewProp_MeshLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAimAlpha = { "CurrentAimAlpha", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, CurrentAimAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAimAlpha_MetaData), NewProp_CurrentAimAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookRotationOffset = { "LookRotationOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, LookRotationOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookRotationOffset_MetaData), NewProp_LookRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffset_MetaData), NewProp_AimOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HandTiltX = { "HandTiltX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, HandTiltX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTiltX_MetaData), NewProp_HandTiltX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HandTiltY = { "HandTiltY", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, HandTiltY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTiltY_MetaData), NewProp_HandTiltY_MetaData) };
void Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting_SetBit(void* Obj)
{
	((AGoobunga_Player*)Obj)->Sprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting = { "Sprinting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGoobunga_Player), &Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprinting_MetaData), NewProp_Sprinting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveRightAction = { "MoveRightAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MoveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightAction_MetaData), NewProp_MoveRightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveLeftAction = { "MoveLeftAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MoveLeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveLeftAction_MetaData), NewProp_MoveLeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveFwdAction = { "MoveFwdAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MoveFwdAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveFwdAction_MetaData), NewProp_MoveFwdAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveBackAction = { "MoveBackAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, MoveBackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveBackAction_MetaData), NewProp_MoveBackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AltFireAction = { "AltFireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, AltFireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltFireAction_MetaData), NewProp_AltFireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAction_MetaData), NewProp_ReloadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, EquippedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItem_MetaData), NewProp_EquippedItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoobunga_Player, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CameraMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_TrueLookDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FacialAnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponAmmoWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_WeaponAmmoWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_PlayerFaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MeshLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_CurrentAimAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HandTiltX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_HandTiltY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_Sprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveRightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveLeftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveFwdAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_MoveBackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_AltFireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_ReloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_EquippedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoobunga_Player_Statics::NewProp_EquippedWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoobunga_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoobunga_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGoobunga_Player_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerCallables_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, IPlayerCallables), false },  // 4286987948
	{ Z_Construct_UClass_UCombatCallables_NoRegister, (int32)VTABLE_OFFSET(AGoobunga_Player, ICombatCallables), false },  // 1814843369
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoobunga_Player_Statics::ClassParams = {
	&AGoobunga_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGoobunga_Player_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoobunga_Player, AGoobunga_Player::StaticClass, TEXT("AGoobunga_Player"), &Z_Registration_Info_UClass_AGoobunga_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoobunga_Player), 82889219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_3253494685(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
