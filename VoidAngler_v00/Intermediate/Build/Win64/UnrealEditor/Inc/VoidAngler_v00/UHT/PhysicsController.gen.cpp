// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Character/Components/PhysicsController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UPhysicsController();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UPhysicsController_NoRegister();
// End Cross Module References

// Begin Class UPhysicsController Function DisableTether
struct Z_Construct_UFunction_UPhysicsController_DisableTether_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsController_DisableTether_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsController, nullptr, "DisableTether", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_DisableTether_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsController_DisableTether_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPhysicsController_DisableTether()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsController_DisableTether_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsController::execDisableTether)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableTether();
	P_NATIVE_END;
}
// End Class UPhysicsController Function DisableTether

// Begin Class UPhysicsController Function SetCanAttach
struct Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics
{
	struct PhysicsController_eventSetCanAttach_Parms
	{
		bool bNewCanAttach;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewCanAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCanAttach;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::NewProp_bNewCanAttach_SetBit(void* Obj)
{
	((PhysicsController_eventSetCanAttach_Parms*)Obj)->bNewCanAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::NewProp_bNewCanAttach = { "bNewCanAttach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsController_eventSetCanAttach_Parms), &Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::NewProp_bNewCanAttach_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::NewProp_bNewCanAttach,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsController, nullptr, "SetCanAttach", nullptr, nullptr, Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PhysicsController_eventSetCanAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::PhysicsController_eventSetCanAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsController_SetCanAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsController_SetCanAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsController::execSetCanAttach)
{
	P_GET_UBOOL(Z_Param_bNewCanAttach);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanAttach(Z_Param_bNewCanAttach);
	P_NATIVE_END;
}
// End Class UPhysicsController Function SetCanAttach

// Begin Class UPhysicsController Function SetSkidInput
struct Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics
{
	struct PhysicsController_eventSetSkidInput_Parms
	{
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Arcade Physics" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((PhysicsController_eventSetSkidInput_Parms*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsController_eventSetSkidInput_Parms), &Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsController, nullptr, "SetSkidInput", nullptr, nullptr, Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PhysicsController_eventSetSkidInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::PhysicsController_eventSetSkidInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsController_SetSkidInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsController_SetSkidInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsController::execSetSkidInput)
{
	P_GET_UBOOL(Z_Param_bIsPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkidInput(Z_Param_bIsPressed);
	P_NATIVE_END;
}
// End Class UPhysicsController Function SetSkidInput

// Begin Class UPhysicsController Function SetSprintInput
struct Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics
{
	struct PhysicsController_eventSetSprintInput_Parms
	{
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Arcade Physics" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((PhysicsController_eventSetSprintInput_Parms*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsController_eventSetSprintInput_Parms), &Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsController, nullptr, "SetSprintInput", nullptr, nullptr, Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PhysicsController_eventSetSprintInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::PhysicsController_eventSetSprintInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsController_SetSprintInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsController_SetSprintInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsController::execSetSprintInput)
{
	P_GET_UBOOL(Z_Param_bIsPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSprintInput(Z_Param_bIsPressed);
	P_NATIVE_END;
}
// End Class UPhysicsController Function SetSprintInput

// Begin Class UPhysicsController Function SetSteeringInput
struct Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics
{
	struct PhysicsController_eventSetSteeringInput_Parms
	{
		float RawInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Arcade Physics" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::NewProp_RawInput = { "RawInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsController_eventSetSteeringInput_Parms, RawInput), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::NewProp_RawInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsController, nullptr, "SetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PhysicsController_eventSetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::PhysicsController_eventSetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsController_SetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsController_SetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsController::execSetSteeringInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RawInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSteeringInput(Z_Param_RawInput);
	P_NATIVE_END;
}
// End Class UPhysicsController Function SetSteeringInput

// Begin Class UPhysicsController
void UPhysicsController::StaticRegisterNativesUPhysicsController()
{
	UClass* Class = UPhysicsController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableTether", &UPhysicsController::execDisableTether },
		{ "SetCanAttach", &UPhysicsController::execSetCanAttach },
		{ "SetSkidInput", &UPhysicsController::execSetSkidInput },
		{ "SetSprintInput", &UPhysicsController::execSetSprintInput },
		{ "SetSteeringInput", &UPhysicsController::execSetSteeringInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsController);
UClass* Z_Construct_UClass_UPhysicsController_NoRegister()
{
	return UPhysicsController::StaticClass();
}
struct Z_Construct_UClass_UPhysicsController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Components/PhysicsController.h" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BungeeStiffness_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTensionBurstMultiplier_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoReelSpeed_MetaData[] = {
		{ "Category", "Tether|Reel" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRopeLength_MetaData[] = {
		{ "Category", "Tether|Reel" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyStiffness_MetaData[] = {
		{ "Category", "Physics|Buoyancy" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterDamping_MetaData[] = {
		{ "Category", "Physics|Buoyancy" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollInterpSpeed_MetaData[] = {
		{ "Category", "Physics|Carving" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawInterpSpeed_MetaData[] = {
		{ "Category", "Physics|Carving" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVisualRoll_MetaData[] = {
		{ "Category", "Physics|Carving" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterStiffness_MetaData[] = {
		{ "Category", "Physics|Carving" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTetherCounterLean_MetaData[] = {
		{ "Category", "Board|Global" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeTransitionSpeed_MetaData[] = {
		{ "Category", "Board|Global" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StdStiffness_MetaData[] = {
		{ "Category", "Board|Standard" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StdFriction_MetaData[] = {
		{ "Category", "Board|Standard" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StdMaxYaw_MetaData[] = {
		{ "Category", "Board|Standard" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintStiffness_MetaData[] = {
		{ "Category", "Board|Sprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SPRINT MODE (Shift) ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SPRINT MODE (Shift) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFriction_MetaData[] = {
		{ "Category", "Board|Sprint" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintMaxYaw_MetaData[] = {
		{ "Category", "Board|Sprint" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkidStiffness_MetaData[] = {
		{ "Category", "Board|Skid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SKID MODE (Space) ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SKID MODE (Space) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkidFriction_MetaData[] = {
		{ "Category", "Board|Skid" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkidMaxYaw_MetaData[] = {
		{ "Category", "Board|Skid" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimalTetherAngle_MetaData[] = {
		{ "Category", "Board|Slingshot" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweetSpotTolerance_MetaData[] = {
		{ "Category", "Board|Slingshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How forgiving the sweet spot is. (e.g., 20 means anywhere from 80 to 120 gives some boost)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How forgiving the sweet spot is. (e.g., 20 means anywhere from 80 to 120 gives some boost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlingshotBoostPower_MetaData[] = {
		{ "Category", "Board|Slingshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The massive forward push you get when hitting the sweet spot\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The massive forward push you get when hitting the sweet spot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSpeedCap_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AeroDragMultiplier_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How massive the invisible wall becomes. Higher = harder soft cap.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How massive the invisible wall becomes. Higher = harder soft cap." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinReelSpeed_MetaData[] = {
		{ "Category", "Tether|Reel" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelTensionBonus_MetaData[] = {
		{ "Category", "Tether|Reel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The 'X' factor: How much faster the rope shrinks than your approach speed.\n// This keeps the line \"Taut\" (tight).\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The 'X' factor: How much faster the rope shrinks than your approach speed.\nThis keeps the line \"Taut\" (tight)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCurveExponent_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTension_MetaData[] = {
		{ "Category", "Tether|Reeling" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineReelSpeed_MetaData[] = {
		{ "Category", "Tether|Motor" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumTautSpeed_MetaData[] = {
		{ "Category", "Tether|Motor" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoastingDragMultiplier_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1.0 = normal drag, 0.2 = keep 80% of your momentum when detached!\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1.0 = normal drag, 0.2 = keep 80% of your momentum when detached!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineDistancePowerCurve_MetaData[] = {
		{ "Category", "Tether|Motor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X: Distance Progress (0.0 = Just attached, 1.0 = Arrived at Anchor)\n// Y: Engine Power Multiplier (e.g., 0.0 to 1.0)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X: Distance Progress (0.0 = Just attached, 1.0 = Arrived at Anchor)\nY: Engine Power Multiplier (e.g., 0.0 to 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineSpeedMultiplierCurve_MetaData[] = {
		{ "Category", "Tether|Motor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X: Speed Ratio (CurrentSpeed / SoftSpeedCap). 0.0 = Stopped, 1.0 = At Speed Cap.\n// Y: Engine Power Multiplier. (e.g., 1.0 at slow speeds, 0.2 at max speed).\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X: Speed Ratio (CurrentSpeed / SoftSpeedCap). 0.0 = Stopped, 1.0 = At Speed Cap.\nY: Engine Power Multiplier. (e.g., 1.0 at slow speeds, 0.2 at max speed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostCurve_MetaData[] = {
		{ "Category", "Board|Slingshot" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGainCurve_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeCurve_MetaData[] = {
		{ "Category", "Board|Speed Regulation" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensionCurve_MetaData[] = {
		{ "Category", "Tether|Reeling" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurve_MetaData[] = {
		{ "Category", "Tether|Reeling" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeedRatio_MetaData[] = {
		{ "Category", "PhysicsController" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnchor_MetaData[] = {
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/PhysicsController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BungeeStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTensionBurstMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoReelSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRopeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVisualRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTetherCounterLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModeTransitionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdMaxYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintMaxYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidMaxYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalTetherAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweetSpotTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlingshotBoostPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSpeedCap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AeroDragMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinReelSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReelTensionBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCurveExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineReelSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumTautSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoastingDragMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineDistancePowerCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineSpeedMultiplierCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedGainCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TensionCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StiffnessCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeedRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsController_DisableTether, "DisableTether" }, // 3035164248
		{ &Z_Construct_UFunction_UPhysicsController_SetCanAttach, "SetCanAttach" }, // 176122794
		{ &Z_Construct_UFunction_UPhysicsController_SetSkidInput, "SetSkidInput" }, // 2339211158
		{ &Z_Construct_UFunction_UPhysicsController_SetSprintInput, "SetSprintInput" }, // 1088404463
		{ &Z_Construct_UFunction_UPhysicsController_SetSteeringInput, "SetSteeringInput" }, // 2916034003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_BungeeStiffness = { "BungeeStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, BungeeStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BungeeStiffness_MetaData), NewProp_BungeeStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTensionBurstMultiplier = { "MaxTensionBurstMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MaxTensionBurstMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTensionBurstMultiplier_MetaData), NewProp_MaxTensionBurstMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_AutoReelSpeed = { "AutoReelSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, AutoReelSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoReelSpeed_MetaData), NewProp_AutoReelSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinRopeLength = { "MinRopeLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MinRopeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRopeLength_MetaData), NewProp_MinRopeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_BuoyancyStiffness = { "BuoyancyStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, BuoyancyStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuoyancyStiffness_MetaData), NewProp_BuoyancyStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_WaterDamping = { "WaterDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, WaterDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterDamping_MetaData), NewProp_WaterDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_RollInterpSpeed = { "RollInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, RollInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollInterpSpeed_MetaData), NewProp_RollInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_YawInterpSpeed = { "YawInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, YawInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawInterpSpeed_MetaData), NewProp_YawInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxVisualRoll = { "MaxVisualRoll", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MaxVisualRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVisualRoll_MetaData), NewProp_MaxVisualRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_WaterStiffness = { "WaterStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, WaterStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterStiffness_MetaData), NewProp_WaterStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTetherCounterLean = { "MaxTetherCounterLean", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MaxTetherCounterLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTetherCounterLean_MetaData), NewProp_MaxTetherCounterLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_ModeTransitionSpeed = { "ModeTransitionSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, ModeTransitionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeTransitionSpeed_MetaData), NewProp_ModeTransitionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdStiffness = { "StdStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, StdStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StdStiffness_MetaData), NewProp_StdStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdFriction = { "StdFriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, StdFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StdFriction_MetaData), NewProp_StdFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdMaxYaw = { "StdMaxYaw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, StdMaxYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StdMaxYaw_MetaData), NewProp_StdMaxYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintStiffness = { "SprintStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SprintStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintStiffness_MetaData), NewProp_SprintStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintFriction = { "SprintFriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SprintFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFriction_MetaData), NewProp_SprintFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintMaxYaw = { "SprintMaxYaw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SprintMaxYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintMaxYaw_MetaData), NewProp_SprintMaxYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidStiffness = { "SkidStiffness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SkidStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkidStiffness_MetaData), NewProp_SkidStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidFriction = { "SkidFriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SkidFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkidFriction_MetaData), NewProp_SkidFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidMaxYaw = { "SkidMaxYaw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SkidMaxYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkidMaxYaw_MetaData), NewProp_SkidMaxYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_OptimalTetherAngle = { "OptimalTetherAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, OptimalTetherAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimalTetherAngle_MetaData), NewProp_OptimalTetherAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SweetSpotTolerance = { "SweetSpotTolerance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SweetSpotTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweetSpotTolerance_MetaData), NewProp_SweetSpotTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SlingshotBoostPower = { "SlingshotBoostPower", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SlingshotBoostPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlingshotBoostPower_MetaData), NewProp_SlingshotBoostPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SoftSpeedCap = { "SoftSpeedCap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SoftSpeedCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSpeedCap_MetaData), NewProp_SoftSpeedCap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_AeroDragMultiplier = { "AeroDragMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, AeroDragMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AeroDragMultiplier_MetaData), NewProp_AeroDragMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinReelSpeed = { "MinReelSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MinReelSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinReelSpeed_MetaData), NewProp_MinReelSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_ReelTensionBonus = { "ReelTensionBonus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, ReelTensionBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelTensionBonus_MetaData), NewProp_ReelTensionBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_DragCurveExponent = { "DragCurveExponent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, DragCurveExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCurveExponent_MetaData), NewProp_DragCurveExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTension = { "MaxTension", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MaxTension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTension_MetaData), NewProp_MaxTension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineReelSpeed = { "EngineReelSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, EngineReelSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineReelSpeed_MetaData), NewProp_EngineReelSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinimumTautSpeed = { "MinimumTautSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, MinimumTautSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumTautSpeed_MetaData), NewProp_MinimumTautSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_CoastingDragMultiplier = { "CoastingDragMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, CoastingDragMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoastingDragMultiplier_MetaData), NewProp_CoastingDragMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineDistancePowerCurve = { "EngineDistancePowerCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, EngineDistancePowerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineDistancePowerCurve_MetaData), NewProp_EngineDistancePowerCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineSpeedMultiplierCurve = { "EngineSpeedMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, EngineSpeedMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineSpeedMultiplierCurve_MetaData), NewProp_EngineSpeedMultiplierCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_BoostCurve = { "BoostCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, BoostCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostCurve_MetaData), NewProp_BoostCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_SpeedGainCurve = { "SpeedGainCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, SpeedGainCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedGainCurve_MetaData), NewProp_SpeedGainCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_BrakeCurve = { "BrakeCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, BrakeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeCurve_MetaData), NewProp_BrakeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_TensionCurve = { "TensionCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, TensionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensionCurve_MetaData), NewProp_TensionCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_StiffnessCurve = { "StiffnessCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, StiffnessCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessCurve_MetaData), NewProp_StiffnessCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_CurrentSpeedRatio = { "CurrentSpeedRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, CurrentSpeedRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeedRatio_MetaData), NewProp_CurrentSpeedRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_PhysicsRoot = { "PhysicsRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, PhysicsRoot), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsRoot_MetaData), NewProp_PhysicsRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_CurrentAnchor = { "CurrentAnchor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, CurrentAnchor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAnchor_MetaData), NewProp_CurrentAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_OceanManager = { "OceanManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanManager_MetaData), NewProp_OceanManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsController_Statics::NewProp_BoardMesh = { "BoardMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsController, BoardMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardMesh_MetaData), NewProp_BoardMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_BungeeStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTensionBurstMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_AutoReelSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinRopeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_BuoyancyStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_WaterDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_RollInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_YawInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxVisualRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_WaterStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTetherCounterLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_ModeTransitionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_StdMaxYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SprintMaxYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SkidMaxYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_OptimalTetherAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SweetSpotTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SlingshotBoostPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SoftSpeedCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_AeroDragMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinReelSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_ReelTensionBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_DragCurveExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MaxTension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineReelSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_MinimumTautSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_CoastingDragMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineDistancePowerCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_EngineSpeedMultiplierCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_BoostCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_SpeedGainCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_BrakeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_TensionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_StiffnessCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_CurrentSpeedRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_PhysicsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_CurrentAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_OceanManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsController_Statics::NewProp_BoardMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsController_Statics::ClassParams = {
	&UPhysicsController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhysicsController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsController()
{
	if (!Z_Registration_Info_UClass_UPhysicsController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsController.OuterSingleton, Z_Construct_UClass_UPhysicsController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsController.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UPhysicsController>()
{
	return UPhysicsController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsController);
UPhysicsController::~UPhysicsController() {}
// End Class UPhysicsController

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsController, UPhysicsController::StaticClass, TEXT("UPhysicsController"), &Z_Registration_Info_UClass_UPhysicsController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsController), 756932800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_3829102522(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_PhysicsController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
