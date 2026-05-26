// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameBackend/Targetable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDANGLER_V00_Targetable_generated_h
#error "Targetable.generated.h already included, missing '#pragma once' in Targetable.h"
#endif
#define VOIDANGLER_V00_Targetable_generated_h

#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VOIDANGLER_V00_API UTargetable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetable(UTargetable&&); \
	UTargetable(const UTargetable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VOIDANGLER_V00_API, UTargetable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetable) \
	VOIDANGLER_V00_API virtual ~UTargetable();


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetable(); \
	friend struct Z_Construct_UClass_UTargetable_Statics; \
public: \
	DECLARE_CLASS(UTargetable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VoidAngler_v00"), VOIDANGLER_V00_API) \
	DECLARE_SERIALIZER(UTargetable)


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_GENERATED_UINTERFACE_BODY() \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetable() {} \
public: \
	typedef UTargetable UClassType; \
	typedef ITargetable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_16_PROLOG
#define FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDANGLER_V00_API UClass* StaticClass<class UTargetable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h


#define FOREACH_ENUM_ETARGETWEIGHTCLASS(op) \
	op(ETargetWeightClass::StaticAnchor) \
	op(ETargetWeightClass::Lightweight) 

enum class ETargetWeightClass : uint8;
template<> struct TIsUEnumClass<ETargetWeightClass> { enum { Value = true }; };
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ETargetWeightClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
