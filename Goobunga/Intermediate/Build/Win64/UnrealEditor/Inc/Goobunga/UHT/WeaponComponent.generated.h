// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef GOOBUNGA_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define GOOBUNGA_WeaponComponent_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAdsTimelineFinished); \
	DECLARE_FUNCTION(execOnAdsTimelineUpdate); \
	DECLARE_FUNCTION(execGetEquippedWeapon);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponComponent(UWeaponComponent&&); \
	UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_28_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_WeaponComponent_h


#define FOREACH_ENUM_EWEAPONSLOT(op) \
	op(EWeaponSlot::None) \
	op(EWeaponSlot::Primary) \
	op(EWeaponSlot::Secondary) 

enum class EWeaponSlot : uint8;
template<> struct TIsUEnumClass<EWeaponSlot> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EWeaponSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
