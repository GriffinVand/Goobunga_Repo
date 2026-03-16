// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/DamageTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_DamageTypes_generated_h
#error "DamageTypes.generated.h already included, missing '#pragma once' in DamageTypes.h"
#endif
#define GOOBUNGA_DamageTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_DamageTypes_h


#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::Default) \
	op(EDamageType::Explosion) \
	op(EDamageType::Goo) 

enum class EDamageType : uint8;
template<> struct TIsUEnumClass<EDamageType> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
