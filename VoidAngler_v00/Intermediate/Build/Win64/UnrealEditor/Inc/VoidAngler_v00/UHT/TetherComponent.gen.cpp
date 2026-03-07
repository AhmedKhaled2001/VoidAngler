// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Character/Components/TetherComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UTetherComponent();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UTetherComponent_NoRegister();
VOIDANGLER_V00_API UEnum* Z_Construct_UEnum_VoidAngler_v00_ETetherState();
// End Cross Module References

// Begin Enum ETetherState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETetherState;
static UEnum* ETetherState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETetherState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETetherState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoidAngler_v00_ETetherState, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("ETetherState"));
	}
	return Z_Registration_Info_UEnum_ETetherState.OuterSingleton;
}
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ETetherState>()
{
	return ETetherState_StaticEnum();
}
struct Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DragBurn.Name", "ETetherState::DragBurn" },
		{ "Inactive.Name", "ETetherState::Inactive" },
		{ "Locked.Name", "ETetherState::Locked" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
		{ "Spooling.Name", "ETetherState::Spooling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETetherState::Inactive", (int64)ETetherState::Inactive },
		{ "ETetherState::Spooling", (int64)ETetherState::Spooling },
		{ "ETetherState::Locked", (int64)ETetherState::Locked },
		{ "ETetherState::DragBurn", (int64)ETetherState::DragBurn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	"ETetherState",
	"ETetherState",
	Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoidAngler_v00_ETetherState()
{
	if (!Z_Registration_Info_UEnum_ETetherState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETetherState.InnerSingleton, Z_Construct_UEnum_VoidAngler_v00_ETetherState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETetherState.InnerSingleton;
}
// End Enum ETetherState

// Begin Class UTetherComponent
void UTetherComponent::StaticRegisterNativesUTetherComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherComponent);
UClass* Z_Construct_UClass_UTetherComponent_NoRegister()
{
	return UTetherComponent::StaticClass();
}
struct Z_Construct_UClass_UTetherComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Components/TetherComponent.h" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTetherState_MetaData[] = {
		{ "Category", "Tether|State" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[] = {
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTetherActive_MetaData[] = {
		{ "Category", "Tether|State" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherTargetLocation_MetaData[] = {
		{ "Category", "Tether|State" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverHeight_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HOVER SYSTEM ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HOVER SYSTEM ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverForce_MetaData[] = {
		{ "Category", "Suspension" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverDamping_MetaData[] = {
		{ "Category", "Suspension" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionSpread_MetaData[] = {
		{ "Category", "Suspension" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeelDrag_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForKeelDrag_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeDrag_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeTurnSpeed_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeAngleForce_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingPitchAngle_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSteerStrength_MetaData[] = {
		{ "Category", "Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONTROL SYSTEM ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONTROL SYSTEM ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollStrength_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStabilityAngle_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StabilityExponent_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UprightStrength_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingUprightStrength_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchDamping_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawDamping_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollDamping_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSlack_MetaData[] = {
		{ "Category", "Tether|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TETHER CORE (V1 Hybrid) ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TETHER CORE (V1 Hybrid) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSpoolSpeed_MetaData[] = {
		{ "Category", "Tether|Core" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTetherLength_MetaData[] = {
		{ "Category", "Tether|Core" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelInSpeed_MetaData[] = {
		{ "Category", "Tether|Core" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStrength_MetaData[] = {
		{ "Category", "Tether|Core" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchRatioClamp_MetaData[] = {
		{ "Category", "Tether|Core" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoilLiftStrength_MetaData[] = {
		{ "Category", "Tether|Surfing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TETHER SURFING ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TETHER SURFING ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAlignmentForLift_MetaData[] = {
		{ "Category", "Tether|Surfing" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensionStretchThreshold_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TETHER RHYTHM & REDLINE ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TETHER RHYTHM & REDLINE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensionBuildRate_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensionDecayRate_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulatedTension_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhipCrackWindow_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhipCrackVelocitySpike_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragBurnLinearDamping_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLinearDamping_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragBurnDuration_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhipCrackSpeedMultiplier_MetaData[] = {
		{ "Category", "Tether|Rhythm" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTetherState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTetherState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
	static void NewProp_bIsTetherActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTetherActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverDamping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuspensionSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeelDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForKeelDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeTurnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeAngleForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingPitchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSteerStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStabilityAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StabilityExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UprightStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingUprightStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSlack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSpoolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTetherLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReelInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStretchRatioClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoilLiftStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAlignmentForLift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TensionStretchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TensionBuildRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TensionDecayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimulatedTension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhipCrackWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhipCrackVelocitySpike;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragBurnLinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragBurnDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhipCrackSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState = { "CurrentTetherState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CurrentTetherState), Z_Construct_UEnum_VoidAngler_v00_ETetherState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTetherState_MetaData), NewProp_CurrentTetherState_MetaData) }; // 2374149683
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedActor_MetaData), NewProp_AttachedActor_MetaData) };
void Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive_SetBit(void* Obj)
{
	((UTetherComponent*)Obj)->bIsTetherActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive = { "bIsTetherActive", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTetherComponent), &Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTetherActive_MetaData), NewProp_bIsTetherActive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherTargetLocation = { "TetherTargetLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherTargetLocation_MetaData), NewProp_TetherTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_PhysicsRoot = { "PhysicsRoot", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, PhysicsRoot), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsRoot_MetaData), NewProp_PhysicsRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverHeight = { "HoverHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, HoverHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverHeight_MetaData), NewProp_HoverHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverForce = { "HoverForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, HoverForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverForce_MetaData), NewProp_HoverForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverDamping = { "HoverDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, HoverDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverDamping_MetaData), NewProp_HoverDamping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_SuspensionSpread = { "SuspensionSpread", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, SuspensionSpread), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspensionSpread_MetaData), NewProp_SuspensionSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_KeelDrag = { "KeelDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, KeelDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeelDrag_MetaData), NewProp_KeelDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinSpeedForKeelDrag = { "MinSpeedForKeelDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinSpeedForKeelDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeedForKeelDrag_MetaData), NewProp_MinSpeedForKeelDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeDrag = { "AirbrakeDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeDrag_MetaData), NewProp_AirbrakeDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeTurnSpeed = { "AirbrakeTurnSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeTurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeTurnSpeed_MetaData), NewProp_AirbrakeTurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeAngleForce = { "AirbrakeAngleForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeAngleForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeAngleForce_MetaData), NewProp_AirbrakeAngleForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BrakingPitchAngle = { "BrakingPitchAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BrakingPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingPitchAngle_MetaData), NewProp_BrakingPitchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CameraSteerStrength = { "CameraSteerStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CameraSteerStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSteerStrength_MetaData), NewProp_CameraSteerStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollStrength = { "RollStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, RollStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollStrength_MetaData), NewProp_RollStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStabilityAngle = { "MaxStabilityAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxStabilityAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStabilityAngle_MetaData), NewProp_MaxStabilityAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_StabilityExponent = { "StabilityExponent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, StabilityExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StabilityExponent_MetaData), NewProp_StabilityExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_UprightStrength = { "UprightStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, UprightStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UprightStrength_MetaData), NewProp_UprightStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BrakingUprightStrength = { "BrakingUprightStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BrakingUprightStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingUprightStrength_MetaData), NewProp_BrakingUprightStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_PitchDamping = { "PitchDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, PitchDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchDamping_MetaData), NewProp_PitchDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawDamping = { "YawDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, YawDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawDamping_MetaData), NewProp_YawDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollDamping = { "RollDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, RollDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollDamping_MetaData), NewProp_RollDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseSlack = { "BaseSlack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BaseSlack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSlack_MetaData), NewProp_BaseSlack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AutoSpoolSpeed = { "AutoSpoolSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AutoSpoolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSpoolSpeed_MetaData), NewProp_AutoSpoolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength = { "MinTetherLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinTetherLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTetherLength_MetaData), NewProp_MinTetherLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelInSpeed = { "ReelInSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ReelInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelInSpeed_MetaData), NewProp_ReelInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStrength = { "TetherStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStrength_MetaData), NewProp_TetherStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStretchRatioClamp = { "MaxStretchRatioClamp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxStretchRatioClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchRatioClamp_MetaData), NewProp_MaxStretchRatioClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_FoilLiftStrength = { "FoilLiftStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, FoilLiftStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoilLiftStrength_MetaData), NewProp_FoilLiftStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinAlignmentForLift = { "MinAlignmentForLift", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinAlignmentForLift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAlignmentForLift_MetaData), NewProp_MinAlignmentForLift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionStretchThreshold = { "TensionStretchThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TensionStretchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensionStretchThreshold_MetaData), NewProp_TensionStretchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionBuildRate = { "TensionBuildRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TensionBuildRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensionBuildRate_MetaData), NewProp_TensionBuildRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionDecayRate = { "TensionDecayRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TensionDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensionDecayRate_MetaData), NewProp_TensionDecayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxSimulatedTension = { "MaxSimulatedTension", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxSimulatedTension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulatedTension_MetaData), NewProp_MaxSimulatedTension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackWindow = { "WhipCrackWindow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, WhipCrackWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhipCrackWindow_MetaData), NewProp_WhipCrackWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackVelocitySpike = { "WhipCrackVelocitySpike", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, WhipCrackVelocitySpike), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhipCrackVelocitySpike_MetaData), NewProp_WhipCrackVelocitySpike_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_DragBurnLinearDamping = { "DragBurnLinearDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, DragBurnLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragBurnLinearDamping_MetaData), NewProp_DragBurnLinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseLinearDamping = { "BaseLinearDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BaseLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLinearDamping_MetaData), NewProp_BaseLinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_DragBurnDuration = { "DragBurnDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, DragBurnDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragBurnDuration_MetaData), NewProp_DragBurnDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackSpeedMultiplier = { "WhipCrackSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, WhipCrackSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhipCrackSpeedMultiplier_MetaData), NewProp_WhipCrackSpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AttachedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_PhysicsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SuspensionSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_KeelDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinSpeedForKeelDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeTurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeAngleForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BrakingPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CameraSteerStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStabilityAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_StabilityExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_UprightStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BrakingUprightStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_PitchDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseSlack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AutoSpoolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStretchRatioClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_FoilLiftStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinAlignmentForLift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionStretchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionBuildRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TensionDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxSimulatedTension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackVelocitySpike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_DragBurnLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_DragBurnDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_WhipCrackSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetherComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetherComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetherComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherComponent_Statics::ClassParams = {
	&UTetherComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTetherComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetherComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetherComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetherComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetherComponent()
{
	if (!Z_Registration_Info_UClass_UTetherComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherComponent.OuterSingleton, Z_Construct_UClass_UTetherComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetherComponent.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UTetherComponent>()
{
	return UTetherComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherComponent);
UTetherComponent::~UTetherComponent() {}
// End Class UTetherComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETetherState_StaticEnum, TEXT("ETetherState"), &Z_Registration_Info_UEnum_ETetherState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2374149683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetherComponent, UTetherComponent::StaticClass, TEXT("UTetherComponent"), &Z_Registration_Info_UClass_UTetherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherComponent), 3758318628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_519982640(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
