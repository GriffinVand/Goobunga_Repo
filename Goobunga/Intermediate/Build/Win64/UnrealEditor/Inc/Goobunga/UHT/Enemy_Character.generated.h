// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_Enemy_Character_generated_h
#error "Enemy_Character.generated.h already included, missing '#pragma once' in Enemy_Character.h"
#endif
#define GOOBUNGA_Enemy_Character_generated_h

#define FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Character(); \
	friend struct Z_Construct_UClass_AEnemy_Character_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Character)


#define FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_Character(AEnemy_Character&&); \
	AEnemy_Character(const AEnemy_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Character) \
	NO_API virtual ~AEnemy_Character();


#define FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_9_PROLOG
#define FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AEnemy_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGames_Goobunga_Source_Goobunga_Enemy_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
