// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldGeneration/ChunkManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_ChunkManager_generated_h
#error "ChunkManager.generated.h already included, missing '#pragma once' in ChunkManager.h"
#endif
#define VOIDANGLER_V00_ChunkManager_generated_h

#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnNextChunk);


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunkManager(); \
	friend struct Z_Construct_UClass_AChunkManager_Statics; \
public: \
	DECLARE_CLASS(AChunkManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(AChunkManager)


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChunkManager(AChunkManager&&); \
	AChunkManager(const AChunkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunkManager) \
	NO_API virtual ~AChunkManager();


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_11_PROLOG
#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class AChunkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
