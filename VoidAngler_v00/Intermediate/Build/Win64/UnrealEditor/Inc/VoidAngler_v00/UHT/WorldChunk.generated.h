// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldGeneration/WorldChunk.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VOIDANGLER_V00_WorldChunk_generated_h
#error "WorldChunk.generated.h already included, missing '#pragma once' in WorldChunk.h"
#endif
#define VOIDANGLER_V00_WorldChunk_generated_h

#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerOverlap);


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldChunk(); \
	friend struct Z_Construct_UClass_AWorldChunk_Statics; \
public: \
	DECLARE_CLASS(AWorldChunk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(AWorldChunk)


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldChunk(AWorldChunk&&); \
	AWorldChunk(const AWorldChunk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldChunk) \
	NO_API virtual ~AWorldChunk();


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_11_PROLOG
#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class AWorldChunk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
