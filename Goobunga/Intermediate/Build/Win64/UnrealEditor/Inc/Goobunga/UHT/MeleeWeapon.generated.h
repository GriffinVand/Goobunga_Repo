// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/MeleeWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_MeleeWeapon_generated_h
#error "MeleeWeapon.generated.h already included, missing '#pragma once' in MeleeWeapon.h"
#endif
#define GOOBUNGA_MeleeWeapon_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeWeapon(); \
	friend struct Z_Construct_UClass_AMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(AMeleeWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AMeleeWeapon)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMeleeWeapon(AMeleeWeapon&&); \
	AMeleeWeapon(const AMeleeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeleeWeapon) \
	NO_API virtual ~AMeleeWeapon();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_12_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AMeleeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_MeleeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
