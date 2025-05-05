// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/WeaponUITypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_WeaponUITypes_generated_h
#error "WeaponUITypes.generated.h already included, missing '#pragma once' in WeaponUITypes.h"
#endif
#define GOOBUNGA_WeaponUITypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_WeaponUITypes_h


#define FOREACH_ENUM_EWEAPONUITYPE(op) \
	op(EWeaponUItype::Thin) \
	op(EWeaponUItype::Thick) \
	op(EWeaponUItype::Barrage) 

enum class EWeaponUItype : uint8;
template<> struct TIsUEnumClass<EWeaponUItype> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EWeaponUItype>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
