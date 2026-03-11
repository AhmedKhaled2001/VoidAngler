// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Components/TetherComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_TetherComponent_generated_h
#error "TetherComponent.generated.h already included, missing '#pragma once' in TetherComponent.h"
#endif
#define VOIDANGLER_V00_TetherComponent_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetherComponent(); \
	friend struct Z_Construct_UClass_UTetherComponent_Statics; \
public: \
	DECLARE_CLASS(UTetherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(UTetherComponent)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTetherComponent(UTetherComponent&&); \
	UTetherComponent(const UTetherComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetherComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetherComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTetherComponent) \
	NO_API virtual ~UTetherComponent();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_20_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class UTetherComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h


#define FOREACH_ENUM_ETETHERSTATE(op) \
	op(ETetherState::Inactive) \
	op(ETetherState::Spooling) \
	op(ETetherState::Locked) \
	op(ETetherState::DragBurn) 

enum class ETetherState : uint8;
template<> struct TIsUEnumClass<ETetherState> { enum { Value = true }; };
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ETetherState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
