// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameBackend/VoidAnglerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_VoidAnglerGameMode_generated_h
#error "VoidAnglerGameMode.generated.h already included, missing '#pragma once' in VoidAnglerGameMode.h"
#endif
#define VOIDANGLER_V00_VoidAnglerGameMode_generated_h

#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoidAnglerGameMode(); \
	friend struct Z_Construct_UClass_AVoidAnglerGameMode_Statics; \
public: \
	DECLARE_CLASS(AVoidAnglerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(AVoidAnglerGameMode)


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoidAnglerGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVoidAnglerGameMode(AVoidAnglerGameMode&&); \
	AVoidAnglerGameMode(const AVoidAnglerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoidAnglerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoidAnglerGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoidAnglerGameMode) \
	NO_API virtual ~AVoidAnglerGameMode();


#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_12_PROLOG
#define FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class AVoidAnglerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
