// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/StatusTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_StatusTypes_generated_h
#error "StatusTypes.generated.h already included, missing '#pragma once' in StatusTypes.h"
#endif
#define GOOBUNGA_StatusTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_StatusTypes_h


#define FOREACH_ENUM_ESTATUSTYPE(op) \
	op(EStatusType::Terror) \
	op(EStatusType::Scorch) \
	op(EStatusType::Pepper) 

enum class EStatusType : uint8;
template<> struct TIsUEnumClass<EStatusType> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EStatusType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
