// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue/DialogueInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOBUNGA_DialogueInterface_generated_h
#error "DialogueInterface.generated.h already included, missing '#pragma once' in DialogueInterface.h"
#endif
#define GOOBUNGA_DialogueInterface_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueInterface(UDialogueInterface&&); \
	UDialogueInterface(const UDialogueInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueInterface) \
	NO_API virtual ~UDialogueInterface();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDialogueInterface(); \
	friend struct Z_Construct_UClass_UDialogueInterface_Statics; \
public: \
	DECLARE_CLASS(UDialogueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(UDialogueInterface)


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDialogueInterface() {} \
public: \
	typedef UDialogueInterface UClassType; \
	typedef IDialogueInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_9_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class UDialogueInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Dialogue_DialogueInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
