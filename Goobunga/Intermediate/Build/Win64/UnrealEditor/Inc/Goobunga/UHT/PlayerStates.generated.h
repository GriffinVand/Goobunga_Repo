// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStates.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_PlayerStates_generated_h
#error "PlayerStates.generated.h already included, missing '#pragma once' in PlayerStates.h"
#endif
#define GOOBUNGA_PlayerStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Desktop_GoobungaBaby_Goobunga_Repo_Goobunga_Source_Goobunga_PlayerStates_h


#define FOREACH_ENUM_EPLAYERMOVEMENTSTATE(op) \
	op(EPlayerMovementState::Idle) \
	op(EPlayerMovementState::Walking) \
	op(EPlayerMovementState::Sprinting) 

enum class EPlayerMovementState : uint8;
template<> struct TIsUEnumClass<EPlayerMovementState> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EPlayerMovementState>();

#define FOREACH_ENUM_EPLAYERCOMBATSTATE(op) \
	op(EPlayerCombatState::Idle) \
	op(EPlayerCombatState::Firing) \
	op(EPlayerCombatState::Reloading) 

enum class EPlayerCombatState : uint8;
template<> struct TIsUEnumClass<EPlayerCombatState> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EPlayerCombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
