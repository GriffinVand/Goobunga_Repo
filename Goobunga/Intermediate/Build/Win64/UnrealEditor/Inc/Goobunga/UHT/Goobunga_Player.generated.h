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
struct FWeaponSwayData;
#ifdef GOOBUNGA_Goobunga_Player_generated_h
#error "Goobunga_Player.generated.h already included, missing '#pragma once' in Goobunga_Player.h"
#endif
#define GOOBUNGA_Goobunga_Player_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnServerActor_Implementation(FVector SpawnLocation); \
	virtual void SpawnServerWeapon_Implementation(); \
	DECLARE_FUNCTION(execUnequipCurrent); \
	DECLARE_FUNCTION(execSpawnServerActor); \
	DECLARE_FUNCTION(execSpawnServerActorAction); \
	DECLARE_FUNCTION(execSpawnServerWeapon); \
	DECLARE_FUNCTION(execSpawnServerWeaponAction); \
	DECLARE_FUNCTION(execUpdateAimDownSightTransform); \
	DECLARE_FUNCTION(execCalculateAimDownSightTransform); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execGetWeaponSwayData);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_CALLBACK_WRAPPERS
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoobunga_Player(); \
	friend struct Z_Construct_UClass_AGoobunga_Player_Statics; \
public: \
	DECLARE_CLASS(AGoobunga_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AGoobunga_Player) \
	virtual UObject* _getUObject() const override { return const_cast<AGoobunga_Player*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoobunga_Player(AGoobunga_Player&&); \
	AGoobunga_Player(const AGoobunga_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoobunga_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoobunga_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoobunga_Player) \
	NO_API virtual ~AGoobunga_Player();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_21_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_CALLBACK_WRAPPERS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AGoobunga_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Goobunga_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
