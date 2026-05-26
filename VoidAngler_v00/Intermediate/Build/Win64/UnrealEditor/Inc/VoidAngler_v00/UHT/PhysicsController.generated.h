// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Components/PhysicsController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_PhysicsController_generated_h
#error "PhysicsController.generated.h already included, missing '#pragma once' in PhysicsController.h"
#endif
#define VOIDANGLER_V00_PhysicsController_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSprintInput); \
	DECLARE_FUNCTION(execSetSkidInput); \
	DECLARE_FUNCTION(execSetSteeringInput);


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsController(); \
	friend struct Z_Construct_UClass_UPhysicsController_Statics; \
public: \
	DECLARE_CLASS(UPhysicsController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsController)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsController(UPhysicsController&&); \
	UPhysicsController(const UPhysicsController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsController) \
	NO_API virtual ~UPhysicsController();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_12_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_INCLASS_NO_PURE_DECLS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class UPhysicsController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
