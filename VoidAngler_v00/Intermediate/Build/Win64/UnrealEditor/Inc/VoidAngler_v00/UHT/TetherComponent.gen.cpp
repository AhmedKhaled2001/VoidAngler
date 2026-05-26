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
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDragCoefficient_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCarveLeanAngle_MetaData[] = {
		{ "Category", "PowerWake|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum angle (in degrees) the board will lean when carving at full speed.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum angle (in degrees) the board will lean when carving at full speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UntetheredGripMultiplier_MetaData[] = {
		{ "Category", "PowerWake|Aerodynamics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedForMaxLean_MetaData[] = {
		{ "Category", "PowerWake|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The lateral speed required to reach the maximum lean angle. \n// Lower = leans easier. Higher = takes massive speed to lean fully.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lateral speed required to reach the maximum lean angle.\nLower = leans easier. Higher = takes massive speed to lean fully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKeelGripForce_MetaData[] = {
		{ "Category", "PowerWake|Aerodynamics" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRestLength_MetaData[] = {
		{ "Category", "Tether|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 1. STATE & SPOOLING ---\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 1. STATE & SPOOLING ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTetherLength_MetaData[] = {
		{ "Category", "Tether|Settings" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSpoolSpeed_MetaData[] = {
		{ "Category", "Tether|Spooling" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualSpoolSpeed_MetaData[] = {
		{ "Category", "Tether|Spooling" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "Tether|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 2. THE PD CONTROLLER (PHYSICS) ---\n// NOTE: Because we are no longer ignoring mass, these numbers need to be BIG (e.g., 50000.0f)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 2. THE PD CONTROLLER (PHYSICS) ---\nNOTE: Because we are no longer ignoring mass, these numbers need to be BIG (e.g., 50000.0f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherDamping_MetaData[] = {
		{ "Category", "Tether|Physics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedDespoolRate_MetaData[] = {
		{ "Category", "Tether|Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How fast the line violently rips out when the drag fails\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the line violently rips out when the drag fails" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelLockoutDuration_MetaData[] = {
		{ "Category", "Tether|Mechanics" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchRatio_MetaData[] = {
		{ "Category", "Tether|Mechanics" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteerInterpSpeed_MetaData[] = {
		{ "Category", "Hoverboard|Steering" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharge_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current stored kinetic energy from carving against the tether\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current stored kinetic energy from carving against the tether" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum amount of charge the player can hold\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum amount of charge the player can hold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseChargeRate_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The baseline rate charge builds when circling the anchor perfectly (Dot Product = 0)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The baseline rate charge builds when circling the anchor perfectly (Dot Product = 0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCarveMultiplier_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier applied when the player steers aggressively AWAY from the anchor\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied when the player steers aggressively AWAY from the anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlingshotForcePerCharge_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The massive forward impulse applied upon release (Multiplied by CurrentCharge)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The massive forward impulse applied upon release (Multiplied by CurrentCharge)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeashRadius_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rigid maximum length of the tether. The player physically cannot exceed this distance.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rigid maximum length of the tether. The player physically cannot exceed this distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTowSpeed_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// THE SKI-BOAT: The minimum speed the tether will drag you toward the anchor\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "THE SKI-BOAT: The minimum speed the tether will drag you toward the anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCarveSpeed_MetaData[] = {
		{ "Category", "PowerWake" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TowAcceleration_MetaData[] = {
		{ "Category", "PowerWake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How aggressively the tether accelerates you to match the Tow Speed\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How aggressively the tether accelerates you to match the Tow Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimalCarveDot_MetaData[] = {
		{ "Category", "PowerWake|Carving" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarveTolerance_MetaData[] = {
		{ "Category", "PowerWake|Carving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far from the optimal angle the player can be before the charge drops to zero.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far from the optimal angle the player can be before the charge drops to zero." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BungeeStiffness_MetaData[] = {
		{ "Category", "PowerWake|Movement" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBungeeAccel_MetaData[] = {
		{ "Category", "PowerWake|Movement" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BungeeDamping_MetaData[] = {
		{ "Category", "PowerWake|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The shock absorber. Prevents the bungee from bouncing you infinitely like a yo-yo.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The shock absorber. Prevents the bungee from bouncing you infinitely like a yo-yo." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFrictionStrength_MetaData[] = {
		{ "Category", "PowerWake|Movement" },
		{ "ModuleRelativePath", "Character/Components/TetherComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTetherState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTetherState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
	static void NewProp_bIsTetherActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTetherActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherTargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardDragCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCarveLeanAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UntetheredGripMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedForMaxLean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxKeelGripForce;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRestLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTetherLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSpoolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualSpoolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForcedDespoolRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSlack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReelLockoutDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStretchRatio;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteerInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseChargeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCarveMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlingshotForcePerCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeashRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCarveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TowAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalCarveDot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CarveTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BungeeStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBungeeAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BungeeDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterFrictionStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState = { "CurrentTetherState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CurrentTetherState), Z_Construct_UEnum_VoidAngler_v00_ETetherState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTetherState_MetaData), NewProp_CurrentTetherState_MetaData) }; // 2374149683
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_OceanManager = { "OceanManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanManager_MetaData), NewProp_OceanManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedActor_MetaData), NewProp_AttachedActor_MetaData) };
void Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive_SetBit(void* Obj)
{
	((UTetherComponent*)Obj)->bIsTetherActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive = { "bIsTetherActive", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTetherComponent), &Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTetherActive_MetaData), NewProp_bIsTetherActive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherTargetLocation = { "TetherTargetLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherTargetLocation_MetaData), NewProp_TetherTargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ForwardDragCoefficient = { "ForwardDragCoefficient", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ForwardDragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDragCoefficient_MetaData), NewProp_ForwardDragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveLeanAngle = { "MaxCarveLeanAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxCarveLeanAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCarveLeanAngle_MetaData), NewProp_MaxCarveLeanAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_UntetheredGripMultiplier = { "UntetheredGripMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, UntetheredGripMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UntetheredGripMultiplier_MetaData), NewProp_UntetheredGripMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_SpeedForMaxLean = { "SpeedForMaxLean", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, SpeedForMaxLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedForMaxLean_MetaData), NewProp_SpeedForMaxLean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_PhysicsRoot = { "PhysicsRoot", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, PhysicsRoot), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsRoot_MetaData), NewProp_PhysicsRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxKeelGripForce = { "MaxKeelGripForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxKeelGripForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxKeelGripForce_MetaData), NewProp_MaxKeelGripForce_MetaData) };
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentRestLength = { "CurrentRestLength", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CurrentRestLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRestLength_MetaData), NewProp_CurrentRestLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength = { "MinTetherLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinTetherLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTetherLength_MetaData), NewProp_MinTetherLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_AutoSpoolSpeed = { "AutoSpoolSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, AutoSpoolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSpoolSpeed_MetaData), NewProp_AutoSpoolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ManualSpoolSpeed = { "ManualSpoolSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ManualSpoolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualSpoolSpeed_MetaData), NewProp_ManualSpoolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStiffness_MetaData), NewProp_TetherStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherDamping = { "TetherDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TetherDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherDamping_MetaData), NewProp_TetherDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ForcedDespoolRate = { "ForcedDespoolRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ForcedDespoolRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedDespoolRate_MetaData), NewProp_ForcedDespoolRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseSlack = { "BaseSlack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BaseSlack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSlack_MetaData), NewProp_BaseSlack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelLockoutDuration = { "ReelLockoutDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, ReelLockoutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelLockoutDuration_MetaData), NewProp_ReelLockoutDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStretchRatio = { "MaxStretchRatio", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxStretchRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchRatio_MetaData), NewProp_MaxStretchRatio_MetaData) };
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_SteerInterpSpeed = { "SteerInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, SteerInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteerInterpSpeed_MetaData), NewProp_SteerInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentCharge = { "CurrentCharge", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CurrentCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharge_MetaData), NewProp_CurrentCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCharge = { "MaxCharge", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharge_MetaData), NewProp_MaxCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseChargeRate = { "BaseChargeRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BaseChargeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseChargeRate_MetaData), NewProp_BaseChargeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveMultiplier = { "MaxCarveMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxCarveMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCarveMultiplier_MetaData), NewProp_MaxCarveMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_SlingshotForcePerCharge = { "SlingshotForcePerCharge", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, SlingshotForcePerCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlingshotForcePerCharge_MetaData), NewProp_SlingshotForcePerCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxLeashRadius = { "MaxLeashRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxLeashRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLeashRadius_MetaData), NewProp_MaxLeashRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTowSpeed = { "MinTowSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MinTowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTowSpeed_MetaData), NewProp_MinTowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveSpeed = { "MaxCarveSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxCarveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCarveSpeed_MetaData), NewProp_MaxCarveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_TowAcceleration = { "TowAcceleration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, TowAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TowAcceleration_MetaData), NewProp_TowAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_OptimalCarveDot = { "OptimalCarveDot", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, OptimalCarveDot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimalCarveDot_MetaData), NewProp_OptimalCarveDot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_CarveTolerance = { "CarveTolerance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, CarveTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarveTolerance_MetaData), NewProp_CarveTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BungeeStiffness = { "BungeeStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BungeeStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BungeeStiffness_MetaData), NewProp_BungeeStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxBungeeAccel = { "MaxBungeeAccel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, MaxBungeeAccel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBungeeAccel_MetaData), NewProp_MaxBungeeAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_BungeeDamping = { "BungeeDamping", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, BungeeDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BungeeDamping_MetaData), NewProp_BungeeDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherComponent_Statics::NewProp_WaterFrictionStrength = { "WaterFrictionStrength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetherComponent, WaterFrictionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFrictionStrength_MetaData), NewProp_WaterFrictionStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentTetherState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_OceanManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AttachedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_bIsTetherActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ForwardDragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveLeanAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_UntetheredGripMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SpeedForMaxLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_PhysicsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxKeelGripForce,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentRestLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTetherLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_AutoSpoolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ManualSpoolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TetherDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ForcedDespoolRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseSlack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_ReelLockoutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxStretchRatio,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SteerInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CurrentCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BaseChargeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_SlingshotForcePerCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxLeashRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MinTowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxCarveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_TowAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_OptimalCarveDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_CarveTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BungeeStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_MaxBungeeAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_BungeeDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherComponent_Statics::NewProp_WaterFrictionStrength,
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
		{ Z_Construct_UClass_UTetherComponent, UTetherComponent::StaticClass, TEXT("UTetherComponent"), &Z_Registration_Info_UClass_UTetherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherComponent), 628173393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_239961994(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_TetherComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
