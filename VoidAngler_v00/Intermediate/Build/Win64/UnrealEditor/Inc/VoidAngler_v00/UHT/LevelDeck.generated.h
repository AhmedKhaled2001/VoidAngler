// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameBackend/LevelDeck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_LevelDeck_generated_h
#error "LevelDeck.generated.h already included, missing '#pragma once' in LevelDeck.h"
#endif
#define VOIDANGLER_V00_LevelDeck_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnableAsset_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FSpawnableAsset>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatternItem_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FPatternItem>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnPattern_Statics; \
	VOIDANGLER_V00_API static class UScriptStruct* StaticStruct();


template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<struct FSpawnPattern>();

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelDeck(); \
	friend struct Z_Construct_UClass_ULevelDeck_Statics; \
public: \
	DECLARE_CLASS(ULevelDeck, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(ULevelDeck)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelDeck(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelDeck(ULevelDeck&&); \
	ULevelDeck(const ULevelDeck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelDeck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelDeck); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelDeck) \
	NO_API virtual ~ULevelDeck();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_70_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_73_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class ULevelDeck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h


#define FOREACH_ENUM_ESPAWNTYPE(op) \
	op(ESpawnType::Anchor) \
	op(ESpawnType::LevelBorder) \
	op(ESpawnType::Hazard) 

enum class ESpawnType : uint8;
template<> struct TIsUEnumClass<ESpawnType> { enum { Value = true }; };
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ESpawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
