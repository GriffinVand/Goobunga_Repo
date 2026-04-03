// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/BaseEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDamageType : uint8;
enum class EDeathType : uint8;
#ifdef GOOBUNGA_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define GOOBUNGA_BaseEnemy_generated_h

#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_20_DELEGATE \
GOOBUNGA_API void FOnAttackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAttackFinished);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackDamageTrace); \
	DECLARE_FUNCTION(execRagdoll); \
	DECLARE_FUNCTION(execDismember); \
	DECLARE_FUNCTION(execDeath);


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Goobunga"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseEnemy*>(this); }


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseEnemy(ABaseEnemy&&); \
	ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_22_PROLOG
#define FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_INCLASS_NO_PURE_DECLS \
	FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOBUNGA_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Goobunga_Repo_Goobunga_Source_Goobunga_Enemies_BaseEnemy_h


#define FOREACH_ENUM_EDEATHTYPE(op) \
	op(EDeathType::Default) \
	op(EDeathType::Explosion) 

enum class EDeathType : uint8;
template<> struct TIsUEnumClass<EDeathType> { enum { Value = true }; };
template<> GOOBUNGA_API UEnum* StaticEnum<EDeathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
