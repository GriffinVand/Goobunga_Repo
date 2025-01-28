// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats_Component.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_Stats_Component_generated_h
#error "Stats_Component.generated.h already included, missing '#pragma once' in Stats_Component.h"
#endif
#define GOOBUNGA_Stats_Component_generated_h

#define FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStats_Component(); \
	friend struct Z_Construct_UClass_UStats_Component_Statics; \
public: \
	DECLARE_CLASS(UStats_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UStats_Component)


#define FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStats_Component(UStats_Component&&); \
	UStats_Component(const UStats_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStats_Component); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStats_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStats_Component) \
	NO_API virtual ~UStats_Component();


#define FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_10_PROLOG
#define FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UStats_Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGames_Goobunga_Source_Goobunga_Stats_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
