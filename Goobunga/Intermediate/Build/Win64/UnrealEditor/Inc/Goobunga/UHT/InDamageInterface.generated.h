// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/InDamageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_InDamageInterface_generated_h
#error "InDamageInterface.generated.h already included, missing '#pragma once' in InDamageInterface.h"
#endif
#define GOOBUNGA_InDamageInterface_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInDamageInterface(UInDamageInterface&&); \
	UInDamageInterface(const UInDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInDamageInterface) \
	NO_API virtual ~UInDamageInterface();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInDamageInterface(); \
	friend struct Z_Construct_UClass_UInDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UInDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UInDamageInterface)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInDamageInterface() {} \
public: \
	typedef UInDamageInterface UClassType; \
	typedef IInDamageInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_7_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UInDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Combat_InDamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
