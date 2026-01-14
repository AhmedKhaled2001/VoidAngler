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
// End Cross Module References

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[] = {
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTetherActive_MetaData[] = {
		{ "Category", "Tether State" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherTargetLocation_MetaData[] = {
		{ "Category", "Tether State" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverHeight_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hover System\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hover System" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeDrag_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeTurnSpeed_MetaData[] = {
		{ "Category", "Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High drag\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High drag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirbrakeAngleForce_MetaData[] = {
		{ "Category", "Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Snap rotation speed\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Snap rotation speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawStrength_MetaData[] = {
		{ "Category", "Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Control System\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control System" },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSteerStrength_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoilLiftStrength_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStrength_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelInSpeed_MetaData[] = {
		{ "Category", "Reel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tether Reeling System\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tether Reeling System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelOutSpeed_MetaData[] = {
		{ "Category", "Reel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retraction speed\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retraction speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTetherLength_MetaData[] = {
		{ "Category", "Reel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extension speed\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTetherLength_MetaData[] = {
		{ "Category", "Reel" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingStrength_MetaData[] = {
		{ "Category", "Tether Physics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationalDamping_MetaData[] = {
		{ "Category", "Tether Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start with half the pull strength\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start with half the pull strength" },
#endif
	};
#endif // WITH_METADATA
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeTurnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirbrakeAngleForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStabilityAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StabilityExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UprightStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSteerStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoilLiftStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReelInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReelOutSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTetherLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTetherLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationalDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeDrag = { "AirbrakeDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeDrag_MetaData), NewProp_AirbrakeDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeTurnSpeed = { "AirbrakeTurnSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeTurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeTurnSpeed_MetaData), NewProp_AirbrakeTurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeAngleForce = { "AirbrakeAngleForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AirbrakeAngleForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirbrakeAngleForce_MetaData), NewProp_AirbrakeAngleForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawStrength = { "YawStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, YawStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawStrength_MetaData), NewProp_YawStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollStrength = { "RollStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, RollStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollStrength_MetaData), NewProp_RollStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStabilityAngle = { "MaxStabilityAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxStabilityAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStabilityAngle_MetaData), NewProp_MaxStabilityAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_StabilityExponent = { "StabilityExponent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, StabilityExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StabilityExponent_MetaData), NewProp_StabilityExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_UprightStrength = { "UprightStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, UprightStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UprightStrength_MetaData), NewProp_UprightStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_PitchDamping = { "PitchDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, PitchDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchDamping_MetaData), NewProp_PitchDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawDamping = { "YawDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, YawDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawDamping_MetaData), NewProp_YawDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollDamping = { "RollDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, RollDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollDamping_MetaData), NewProp_RollDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CameraSteerStrength = { "CameraSteerStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CameraSteerStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSteerStrength_MetaData), NewProp_CameraSteerStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_FoilLiftStrength = { "FoilLiftStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, FoilLiftStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoilLiftStrength_MetaData), NewProp_FoilLiftStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStrength = { "TetherStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStrength_MetaData), NewProp_TetherStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelInSpeed = { "ReelInSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ReelInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelInSpeed_MetaData), NewProp_ReelInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelOutSpeed = { "ReelOutSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ReelOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelOutSpeed_MetaData), NewProp_ReelOutSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength = { "MinTetherLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinTetherLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTetherLength_MetaData), NewProp_MinTetherLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxTetherLength = { "MaxTetherLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxTetherLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTetherLength_MetaData), NewProp_MaxTetherLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_SwingStrength = { "SwingStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, SwingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingStrength_MetaData), NewProp_SwingStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_RotationalDamping = { "RotationalDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, RotationalDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationalDamping_MetaData), NewProp_RotationalDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AttachedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_PhysicsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_HoverDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SuspensionSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_KeelDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeTurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AirbrakeAngleForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStabilityAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_StabilityExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_UprightStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_PitchDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_YawDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_RollDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CameraSteerStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_FoilLiftStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxTetherLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SwingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_RotationalDamping,
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
struct Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetherComponent, UTetherComponent::StaticClass, TEXT("UTetherComponent"), &Z_Registration_Info_UClass_UTetherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherComponent), 3573103641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_76132921(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
