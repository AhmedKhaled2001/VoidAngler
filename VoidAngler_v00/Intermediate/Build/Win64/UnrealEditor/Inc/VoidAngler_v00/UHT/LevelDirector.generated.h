// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldGeneration/LevelDirector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_LevelDirector_generated_h
#error "LevelDirector.generated.h already included, missing '#pragma once' in LevelDirector.h"
#endif
#define VOIDANGLER_V00_LevelDirector_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingSpawn_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FPendingSpawn>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveAsset_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FActiveAsset>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshActivePool);


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelDirector(); \
	friend struct Z_Construct_UClass_ALevelDirector_Statics; \
public: \
	DECLARE_CLASS(ALevelDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(ALevelDirector)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelDirector(ALevelDirector&&); \
	ALevelDirector(const ALevelDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelDirector) \
	NO_API virtual ~ALevelDirector();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_40_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class ALevelDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
