// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/ProjectileWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_ProjectileWeapon_generated_h
#error "ProjectileWeapon.generated.h already included, missing '#pragma once' in ProjectileWeapon.h"
#endif
#define GOOBUNGA_ProjectileWeapon_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileWeapon(); \
	friend struct Z_Construct_UClass_AProjectileWeapon_Statics; \
public: \
	DECLARE_CLASS(AProjectileWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AProjectileWeapon)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileWeapon(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectileWeapon(AProjectileWeapon&&); \
	AProjectileWeapon(const AProjectileWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileWeapon) \
	NO_API virtual ~AProjectileWeapon();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_12_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AProjectileWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_ProjectileWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
