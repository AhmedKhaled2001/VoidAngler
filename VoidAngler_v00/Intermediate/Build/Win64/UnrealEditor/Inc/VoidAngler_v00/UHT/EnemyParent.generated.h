// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyParent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VOIDANGLER_V00_EnemyParent_generated_h
#error "EnemyParent.generated.h already included, missing '#pragma once' in EnemyParent.h"
#endif
#define VOIDANGLER_V00_EnemyParent_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFishFightProfile_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FFishFightProfile>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTarget);


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyParent(); \
	friend struct Z_Construct_UClass_AEnemyParent_Statics; \
public: \
	DECLARE_CLASS(AEnemyParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(AEnemyParent) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyParent*>(this); }


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyParent(AEnemyParent&&); \
	AEnemyParent(const AEnemyParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyParent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyParent) \
	NO_API virtual ~AEnemyParent();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_59_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class AEnemyParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Flowing) \
	op(EEnemyState::Fighting) \
	op(EEnemyState::Exhausted) \
	op(EEnemyState::PullingDrag) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> VOIDANGLER_V00_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
