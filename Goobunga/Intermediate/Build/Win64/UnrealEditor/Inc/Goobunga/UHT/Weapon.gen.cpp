// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Goobunga/Weapons/Weapon.h"
#include "Goobunga/ReloadManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon();
GOOBUNGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
GOOBUNGA_API UClass* Z_Construct_UClass_UFireableCallables_NoRegister();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EWeapon();
GOOBUNGA_API UEnum* Z_Construct_UEnum_Goobunga_EWeaponUItype();
GOOBUNGA_API UFunction* Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature();
GOOBUNGA_API UScriptStruct* Z_Construct_UScriptStruct_FReloadPhase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Goobunga();
// End Cross Module References

// Begin Enum EWeapon
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeapon;
static UEnum* EWeapon_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeapon.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeapon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Goobunga_EWeapon, (UObject*)Z_Construct_UPackage__Script_Goobunga(), TEXT("EWeapon"));
	}
	return Z_Registration_Info_UEnum_EWeapon.OuterSingleton;
}
template<> GOOBUNGA_API UEnum* StaticEnum<EWeapon>()
{
	return EWeapon_StaticEnum();
}
struct Z_Construct_UEnum_Goobunga_EWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CatGun.DisplayName", "CatGun" },
		{ "CatGun.Name", "EWeapon::CatGun" },
		{ "GooGun.DisplayName", "GooGun" },
		{ "GooGun.Name", "EWeapon::GooGun" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWeapon::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeapon::None", (int64)EWeapon::None },
		{ "EWeapon::CatGun", (int64)EWeapon::CatGun },
		{ "EWeapon::GooGun", (int64)EWeapon::GooGun },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Goobunga_EWeapon_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Goobunga,
	nullptr,
	"EWeapon",
	"EWeapon",
	Z_Construct_UEnum_Goobunga_EWeapon_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeapon_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Goobunga_EWeapon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Goobunga_EWeapon_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Goobunga_EWeapon()
{
	if (!Z_Registration_Info_UEnum_EWeapon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeapon.InnerSingleton, Z_Construct_UEnum_Goobunga_EWeapon_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeapon.InnerSingleton;
}
// End Enum EWeapon

// Begin Delegate FOnAmmoChanged
struct Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnAmmoChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AWeapon::FOnAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoChanged)
{
	OnAmmoChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAmmoChanged

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmmoChanged_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEnum_MetaData[] = {
		{ "Category", "Weapon" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseAnim_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Pose to use for bADS\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose to use for bADS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attaching socket name\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaching socket name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponUIType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGrips_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bADS_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bADS information\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bADS information" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimTransform_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponReloadPattern_MetaData[] = {
		{ "Category", "Reload" },
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
		{ "Category", "Stats|Recoil" },
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
		{ "Category", "Stats|Recoil" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilIntensityMin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Recoil" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilIntensityMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Recoil" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickDirection_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickRotation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKickDirection_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKickRotation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ammo\n" },
#endif
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAltAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAltAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAltMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAltMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Ammo" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icons_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icons" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSoundComponent_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound to play when fired\n" },
#endif
		{ "EditInline", "true" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStaticAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerStaticAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoChanged;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponEnum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseAnim;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponUIType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponUIType;
	static void NewProp_bGrips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGrips;
	static void NewProp_bADS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bADS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponReloadPattern_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponReloadPattern;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_KickDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KickRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxKickDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxKickRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAltAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAltAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAltMag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAltMag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icons_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Icons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAnimations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAnimations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAnimations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerAnimations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OwnerAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponStaticAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerStaticAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature, "OnAmmoChanged__DelegateSignature" }, // 2966140232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OnAmmoChanged = { "OnAmmoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, OnAmmoChanged), Z_Construct_UDelegateFunction_AWeapon_OnAmmoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmmoChanged_MetaData), NewProp_OnAmmoChanged_MetaData) }; // 2966140232
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponID_MetaData), NewProp_WeaponID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponEnum = { "WeaponEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponEnum), Z_Construct_UEnum_Goobunga_EWeapon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponEnum_MetaData), NewProp_WeaponEnum_MetaData) }; // 3441461499
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_PoseAnim = { "PoseAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, PoseAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseAnim_MetaData), NewProp_PoseAnim_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponUIType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponUIType = { "WeaponUIType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponUIType), Z_Construct_UEnum_Goobunga_EWeaponUItype, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponUIType_MetaData), NewProp_WeaponUIType_MetaData) }; // 105456784
void Z_Construct_UClass_AWeapon_Statics::NewProp_bGrips_SetBit(void* Obj)
{
	((AWeapon*)Obj)->bGrips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bGrips = { "bGrips", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bGrips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGrips_MetaData), NewProp_bGrips_MetaData) };
void Z_Construct_UClass_AWeapon_Statics::NewProp_bADS_SetBit(void* Obj)
{
	((AWeapon*)Obj)->bADS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bADS = { "bADS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bADS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bADS_MetaData), NewProp_bADS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ADSTime = { "ADSTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ADSTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSTime_MetaData), NewProp_ADSTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ADSSpeed = { "ADSSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ADSSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSSpeed_MetaData), NewProp_ADSSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimTransform = { "AimTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimTransform_MetaData), NewProp_AimTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponReloadPattern_Inner = { "WeaponReloadPattern", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReloadPhase, METADATA_PARAMS(0, nullptr) }; // 2585317397
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponReloadPattern = { "WeaponReloadPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponReloadPattern), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponReloadPattern_MetaData), NewProp_WeaponReloadPattern_MetaData) }; // 2585317397
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_KickDirection = { "KickDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, KickDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickDirection_MetaData), NewProp_KickDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_KickRotation = { "KickRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, KickRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickRotation_MetaData), NewProp_KickRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxKickDirection = { "MaxKickDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxKickDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxKickDirection_MetaData), NewProp_MaxKickDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxKickRotation = { "MaxKickRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxKickRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxKickRotation_MetaData), NewProp_MaxKickRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxMag = { "MaxMag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxMag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMag_MetaData), NewProp_MaxMag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentMag = { "CurrentMag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentMag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMag_MetaData), NewProp_CurrentMag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAltAmmo = { "MaxAltAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxAltAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAltAmmo_MetaData), NewProp_MaxAltAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAltAmmo = { "CurrentAltAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentAltAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAltAmmo_MetaData), NewProp_CurrentAltAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAltMag = { "MaxAltMag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxAltMag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAltMag_MetaData), NewProp_MaxAltMag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAltMag = { "CurrentAltMag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurrentAltMag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAltMag_MetaData), NewProp_CurrentAltMag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Icons_ValueProp = { "Icons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Icons_Key_KeyProp = { "Icons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Icons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icons_MetaData), NewProp_Icons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HitForce = { "HitForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, HitForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitForce_MetaData), NewProp_HitForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireEffect_MetaData), NewProp_FireEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireSoundComponent = { "FireSoundComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSoundComponent_MetaData), NewProp_FireSoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_ValueProp = { "WeaponAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_Key_KeyProp = { "WeaponAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations = { "WeaponAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponAnimations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimations_MetaData), NewProp_WeaponAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_ValueProp = { "OwnerAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_Key_KeyProp = { "OwnerAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations = { "OwnerAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, OwnerAnimations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAnimations_MetaData), NewProp_OwnerAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponStaticAnim = { "WeaponStaticAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponStaticAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponStaticAnim_MetaData), NewProp_WeaponStaticAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerStaticAnim = { "OwnerStaticAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, OwnerStaticAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerStaticAnim_MetaData), NewProp_OwnerStaticAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OnAmmoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_PoseAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponUIType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponUIType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bGrips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ADSTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ADSSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponReloadPattern_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponReloadPattern,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_KickDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_KickRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxKickDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxKickRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAltAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAltAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAltMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurrentAltMag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Icons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Icons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Icons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HitForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireSoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponStaticAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwnerStaticAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Goobunga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFireableCallables_NoRegister, (int32)VTABLE_OFFSET(AWeapon, IFireableCallables), false },  // 1019109838
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeapon_StaticEnum, TEXT("EWeapon"), &Z_Registration_Info_UEnum_EWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3441461499U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 1511227168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_1265449036(TEXT("/Script/Goobunga"),
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Weapon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
