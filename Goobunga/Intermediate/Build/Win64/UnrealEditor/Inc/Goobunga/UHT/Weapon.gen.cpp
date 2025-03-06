// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireable_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Weapon.h" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Owning actor\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owning actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADS_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ADS information\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ADS information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Default stats\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Recoil effect applied to owner controller\n//Lower values = more control. 0 is perfect\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recoil effect applied to owner controller\nLower values = more control. 0 is perfect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipSpread_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapon random spread leaving barrel\n//Lower accuracy values = more accurate\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon random spread leaving barrel\nLower accuracy values = more accurate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSpread_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpread_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilDirectionMin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Directions of recoil. Final recoil is direction*intensity\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directions of recoil. Final recoil is direction*intensity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilDirectionMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilIntensityMin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilIntensityMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapon may apply physical force when fired\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon may apply physical force when fired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Effect to play when fired\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect to play when fired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound to play when fired\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play when fired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animations are stored in two maps. Uses names to find corresponding animations\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animations are stored in two maps. Uses names to find corresponding animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static void NewProp_ADS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ADS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilDirectionMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilDirectionMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilIntensityMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilIntensityMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAnimations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAnimations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAnimations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerAnimations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OwnerAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
void Z_Construct_UClass_AWeapon_Statics::NewProp_ADS_SetBit(void* Obj)
{
	((AWeapon*)Obj)->ADS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ADS = { "ADS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_ADS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADS_MetaData), NewProp_ADS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ADSTime = { "ADSTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ADSTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSTime_MetaData), NewProp_ADSTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ADSSpeed = { "ADSSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ADSSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSSpeed_MetaData), NewProp_ADSSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCooldown_MetaData), NewProp_FireCooldown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HipControl = { "HipControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, HipControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipControl_MetaData), NewProp_HipControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimControl = { "AimControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AimControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimControl_MetaData), NewProp_AimControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentControl = { "CurrentControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentControl_MetaData), NewProp_CurrentControl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HipSpread = { "HipSpread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, HipSpread), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipSpread_MetaData), NewProp_HipSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimSpread = { "AimSpread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AimSpread), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSpread_MetaData), NewProp_AimSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentSpread = { "CurrentSpread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentSpread), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpread_MetaData), NewProp_CurrentSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilDirectionMin = { "RecoilDirectionMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, RecoilDirectionMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilDirectionMin_MetaData), NewProp_RecoilDirectionMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilDirectionMax = { "RecoilDirectionMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, RecoilDirectionMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilDirectionMax_MetaData), NewProp_RecoilDirectionMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilIntensityMin = { "RecoilIntensityMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, RecoilIntensityMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilIntensityMin_MetaData), NewProp_RecoilIntensityMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilIntensityMax = { "RecoilIntensityMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, RecoilIntensityMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilIntensityMax_MetaData), NewProp_RecoilIntensityMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HitForce = { "HitForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, HitForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitForce_MetaData), NewProp_HitForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireEffect_MetaData), NewProp_FireEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_ValueProp = { "WeaponAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_Key_KeyProp = { "WeaponAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations = { "WeaponAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponAnimations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimations_MetaData), NewProp_WeaponAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_ValueProp = { "OwnerAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_Key_KeyProp = { "OwnerAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations = { "OwnerAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, OwnerAnimations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAnimations_MetaData), NewProp_OwnerAnimations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ADSTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ADSSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HipControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HipSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilDirectionMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilDirectionMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilIntensityMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RecoilIntensityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HitForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFireable_NoRegister, (int32)VTABLE_OFFSET(AWeapon, IFireable), false },  // 2463070664
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> GOOBUNGA_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 424411471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_3650262705(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
