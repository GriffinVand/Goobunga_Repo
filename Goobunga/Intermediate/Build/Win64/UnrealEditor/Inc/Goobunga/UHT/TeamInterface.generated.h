// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/TeamInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_TeamInterface_generated_h
#error "TeamInterface.generated.h already included, missing '#pragma once' in TeamInterface.h"
#endif
#define GOOBUNGA_TeamInterface_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeamInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTeamInterface(UTeamInterface&&); \
	UTeamInterface(const UTeamInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeamInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeamInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeamInterface) \
	NO_API virtual ~UTeamInterface();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTeamInterface(); \
	friend struct Z_Construct_UClass_UTeamInterface_Statics; \
public: \
	DECLARE_CLASS(UTeamInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UTeamInterface)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITeamInterface() {} \
public: \
	typedef UTeamInterface UClassType; \
	typedef ITeamInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_14_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UTeamInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_TeamInterface_h


#define FOREACH_ENUM_EALLEGIANCE(op) \
	op(EAllegiance::Enemy) \
	op(EAllegiance::Friendly) 

enum class EAllegiance : uint8;
template<> struct TIsUEnumClass<EAllegiance> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EAllegiance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
