// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Traversal/Obstacle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VOIDANGLER_V00_Obstacle_generated_h
#error "Obstacle.generated.h already included, missing '#pragma once' in Obstacle.h"
#endif
#define VOIDANGLER_V00_Obstacle_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOverlap); \
	DECLARE_FUNCTION(execOnPlayerHit);


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AObstacle(AObstacle&&); \
	AObstacle(const AObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacle) \
	NO_API virtual ~AObstacle();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_9_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class AObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
