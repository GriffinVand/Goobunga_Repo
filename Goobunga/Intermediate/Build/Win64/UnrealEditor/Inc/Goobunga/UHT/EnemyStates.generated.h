// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/EnemyStates.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_EnemyStates_generated_h
#error "EnemyStates.generated.h already included, missing '#pragma once' in EnemyStates.h"
#endif
#define GOOBUNGA_EnemyStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_EnemyStates_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(Default) \
	op(Walking) \
	op(Chasing) \
	op(Attacking) \
	op(Launching) \
	op(Busy) \
	op(Death) 

enum EEnemyState : uint8;
template<> GOOBUNGA_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
