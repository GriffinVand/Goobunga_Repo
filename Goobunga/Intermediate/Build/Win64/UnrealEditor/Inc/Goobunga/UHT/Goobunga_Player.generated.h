// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Goobunga_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
struct FBranchingPointNotifyPayload;
struct FWeaponSwayData;
#ifdef GOOBUNGA_Goobunga_Player_generated_h
#error "Goobunga_Player.generated.h already included, missing '#pragma once' in Goobunga_Player.h"
#endif
#define GOOBUNGA_Goobunga_Player_generated_h

#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageNotifyBegin); \
	DECLARE_FUNCTION(execGetWeaponSwayData); \
	DECLARE_FUNCTION(execEquipWeapon);


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoobunga_Player(); \
	friend struct Z_Construct_UClass_AGoobunga_Player_Statics; \
public: \
	DECLARE_CLASS(AGoobunga_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AGoobunga_Player) \
	virtual UObject* _getUObject() const override { return const_cast<AGoobunga_Player*>(this); }


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoobunga_Player(AGoobunga_Player&&); \
	AGoobunga_Player(const AGoobunga_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoobunga_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoobunga_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoobunga_Player) \
	NO_API virtual ~AGoobunga_Player();


#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_40_PROLOG
#define FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AGoobunga_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_griff_Documents_GitHub_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h


#define FOREACH_ENUM_ECOMBATACTION(op) \
	op(ECombatAction::PrimFire) \
	op(ECombatAction::SecFire) \
	op(ECombatAction::Aim) \
	op(ECombatAction::SmallAbility) \
	op(ECombatAction::LargeAbility) \
	op(ECombatAction::HealAbility) \
	op(ECombatAction::Sprint) \
	op(ECombatAction::Reload) \
	op(ECombatAction::Swap) \
	op(ECombatAction::Interact) 

enum class ECombatAction : uint8;
template<> struct TIsUEnumClass<ECombatAction> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<ECombatAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
