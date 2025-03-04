// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/ReloadPatterns.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_ReloadPatterns_generated_h
#error "ReloadPatterns.generated.h already included, missing '#pragma once' in ReloadPatterns.h"
#endif
#define GOOBUNGA_ReloadPatterns_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_ReloadPatterns_h


#define FOREACH_ENUM_ERELOADPATTERN(op) \
	op(EReloadPattern::Left) \
	op(EReloadPattern::Right) \
	op(EReloadPattern::Up) \
	op(EReloadPattern::Down) \
	op(EReloadPattern::Circle) 

enum class EReloadPattern : uint8;
template<> struct TIsUEnumClass<EReloadPattern> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EReloadPattern>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
