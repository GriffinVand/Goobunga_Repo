// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Projectiles/GoobungaProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GOOBUNGA_GoobungaProjectile_generated_h
#error "GoobungaProjectile.generated.h already included, missing '#pragma once' in GoobungaProjectile.h"
#endif
#define GOOBUNGA_GoobungaProjectile_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoobungaProjectile(); \
	friend struct Z_Construct_UClass_AGoobungaProjectile_Statics; \
public: \
	DECLARE_CLASS(AGoobungaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(AGoobungaProjectile)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoobungaProjectile(AGoobungaProjectile&&); \
	AGoobungaProjectile(const AGoobungaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoobungaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoobungaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoobungaProjectile) \
	NO_API virtual ~AGoobungaProjectile();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_11_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class AGoobungaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Weapons_Projectiles_GoobungaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
