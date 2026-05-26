// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Enemy/EnemyParent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyParent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AEnemyParent();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AEnemyParent_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AProceduralLevelGenerator_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
VOIDANGLER_V00_API UEnum* Z_Construct_UEnum_VoidAngler_v00_EEnemyState();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FFishFightProfile();
// End Cross Module References

// Begin Enum EEnemyState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoidAngler_v00_EEnemyState, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> VOIDANGLER_V00_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Exhausted.DisplayName", "Exhausted (Deadweight)" },
		{ "Exhausted.Name", "EEnemyState::Exhausted" },
		{ "Fighting.DisplayName", "Fighting (Hooked & Pulling)" },
		{ "Fighting.Name", "EEnemyState::Fighting" },
		{ "Flowing.DisplayName", "Flowing (Unhooked)" },
		{ "Flowing.Name", "EEnemyState::Flowing" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
		{ "PullingDrag.DisplayName", "Pulling Drag (Overpowering)" },
		{ "PullingDrag.Name", "EEnemyState::PullingDrag" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyState::Flowing", (int64)EEnemyState::Flowing },
		{ "EEnemyState::Fighting", (int64)EEnemyState::Fighting },
		{ "EEnemyState::Exhausted", (int64)EEnemyState::Exhausted },
		{ "EEnemyState::PullingDrag", (int64)EEnemyState::PullingDrag },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoidAngler_v00_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_VoidAngler_v00_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// End Enum EEnemyState

// Begin ScriptStruct FFishFightProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FishFightProfile;
class UScriptStruct* FFishFightProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FishFightProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FishFightProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFishFightProfile, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("FishFightProfile"));
	}
	return Z_Registration_Info_UScriptStruct_FishFightProfile.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FFishFightProfile>()
{
	return FFishFightProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFishFightProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CruisingSpeed_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 1. THE FLOW (Unhooked) ---\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 1. THE FLOW (Unhooked) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TweakTimer_MetaData[] = {
		{ "Category", "AI|Combat" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFlowDistance_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralWeaveWidth_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Positive = ahead, Negative = behind\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Positive = ahead, Negative = behind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaveAgility_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far left/right it drifts\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far left/right it drifts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 2. THE TUG OF WAR (Fighting) ---\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 2. THE TUG OF WAR (Fighting) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SustainedFightForce_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensionStaminaDrainMultiplier_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normal pull away when hooked\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal pull away when hooked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragPullForce_MetaData[] = {
		{ "Category", "Punishment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 3. THE PUNISHMENT (Pulling Drag) ---\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 3. THE PUNISHMENT (Pulling Drag) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenOnDrag_MetaData[] = {
		{ "Category", "Punishment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spike force when overpowering\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spike force when overpowering" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CruisingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TweakTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredFlowDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralWeaveWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaveAgility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainedFightForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TensionStaminaDrainMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragPullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenOnDrag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFishFightProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_CruisingSpeed = { "CruisingSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, CruisingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CruisingSpeed_MetaData), NewProp_CruisingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_TweakTimer = { "TweakTimer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, TweakTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TweakTimer_MetaData), NewProp_TweakTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_PreferredFlowDistance = { "PreferredFlowDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, PreferredFlowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredFlowDistance_MetaData), NewProp_PreferredFlowDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_LateralWeaveWidth = { "LateralWeaveWidth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, LateralWeaveWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralWeaveWidth_MetaData), NewProp_LateralWeaveWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_WeaveAgility = { "WeaveAgility", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, WeaveAgility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaveAgility_MetaData), NewProp_WeaveAgility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_SustainedFightForce = { "SustainedFightForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, SustainedFightForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SustainedFightForce_MetaData), NewProp_SustainedFightForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_TensionStaminaDrainMultiplier = { "TensionStaminaDrainMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, TensionStaminaDrainMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensionStaminaDrainMultiplier_MetaData), NewProp_TensionStaminaDrainMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_DragPullForce = { "DragPullForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, DragPullForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragPullForce_MetaData), NewProp_DragPullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_StaminaRegenOnDrag = { "StaminaRegenOnDrag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFishFightProfile, StaminaRegenOnDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenOnDrag_MetaData), NewProp_StaminaRegenOnDrag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFishFightProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_CruisingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_TweakTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_PreferredFlowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_LateralWeaveWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_WeaveAgility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_SustainedFightForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_TensionStaminaDrainMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_DragPullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewProp_StaminaRegenOnDrag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishFightProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFishFightProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"FishFightProfile",
	Z_Construct_UScriptStruct_FFishFightProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishFightProfile_Statics::PropPointers),
	sizeof(FFishFightProfile),
	alignof(FFishFightProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishFightProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFishFightProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFishFightProfile()
{
	if (!Z_Registration_Info_UScriptStruct_FishFightProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FishFightProfile.InnerSingleton, Z_Construct_UScriptStruct_FFishFightProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FishFightProfile.InnerSingleton;
}
// End ScriptStruct FFishFightProfile

// Begin Class AEnemyParent Function SetTarget
struct Z_Construct_UFunction_AEnemyParent_SetTarget_Statics
{
	struct EnemyParent_eventSetTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyParent_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyParent, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::EnemyParent_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::EnemyParent_eventSetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyParent_SetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyParent_SetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyParent::execSetTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// End Class AEnemyParent Function SetTarget

// Begin Class AEnemyParent
void AEnemyParent::StaticRegisterNativesAEnemyParent()
{
	UClass* Class = AEnemyParent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTarget", &AEnemyParent::execSetTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyParent);
UClass* Z_Construct_UClass_AEnemyParent_NoRegister()
{
	return AEnemyParent::StaticClass();
}
struct Z_Construct_UClass_AEnemyParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyParent.h" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSubmergedDepth_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyStiffness_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How deep below the surface it wants to be\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How deep below the surface it wants to be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyDamping_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How hard it fights to stay at Target Depth\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How hard it fights to stay at Target Depth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prevents the fish from bouncing endlessly\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents the fish from bouncing endlessly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FightProfile_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDepthOffset_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Treadmill offset: How far behind/ahead of the player should this enemy idle?\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Treadmill offset: How far behind/ahead of the player should this enemy idle?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMass_MetaData[] = {
		{ "Category", "Combat|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How heavy is this fish? Higher mass = harder to pull.\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How heavy is this fish? Higher mass = harder to pull." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterDrag_MetaData[] = {
		{ "Category", "Combat|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Water friction. Higher number = fish stops sliding faster when you stop pulling.\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Water friction. Higher number = fish stops sliding faster when you stop pulling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralTrackingSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How aggressively it matches the player's A/D carving\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How aggressively it matches the player's A/D carving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTweaking_MetaData[] = {
		{ "Category", "AI|Combat" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The visual/physical representation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visual/physical representation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelGenRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached references for performance (Prevents searching the world every frame)\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached references for performance (Prevents searching the world every frame)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyParent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSubmergedDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyDamping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FightProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDepthOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralTrackingSpeed;
	static void NewProp_bIsTweaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTweaking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelGenRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyParent_SetTarget, "SetTarget" }, // 1105932529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetSubmergedDepth = { "TargetSubmergedDepth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, TargetSubmergedDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSubmergedDepth_MetaData), NewProp_TargetSubmergedDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_BuoyancyStiffness = { "BuoyancyStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, BuoyancyStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuoyancyStiffness_MetaData), NewProp_BuoyancyStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_BuoyancyDamping = { "BuoyancyDamping", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, BuoyancyDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuoyancyDamping_MetaData), NewProp_BuoyancyDamping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, CurrentState), Z_Construct_UEnum_VoidAngler_v00_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 322827538
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_FightProfile = { "FightProfile", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, FightProfile), Z_Construct_UScriptStruct_FFishFightProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FightProfile_MetaData), NewProp_FightProfile_MetaData) }; // 3682149456
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetDepthOffset = { "TargetDepthOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, TargetDepthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDepthOffset_MetaData), NewProp_TargetDepthOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_EnemyMass = { "EnemyMass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, EnemyMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyMass_MetaData), NewProp_EnemyMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_WaterDrag = { "WaterDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, WaterDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterDrag_MetaData), NewProp_WaterDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_LateralTrackingSpeed = { "LateralTrackingSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, LateralTrackingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralTrackingSpeed_MetaData), NewProp_LateralTrackingSpeed_MetaData) };
void Z_Construct_UClass_AEnemyParent_Statics::NewProp_bIsTweaking_SetBit(void* Obj)
{
	((AEnemyParent*)Obj)->bIsTweaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_bIsTweaking = { "bIsTweaking", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyParent), &Z_Construct_UClass_AEnemyParent_Statics::NewProp_bIsTweaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTweaking_MetaData), NewProp_bIsTweaking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, CollisionComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_LevelGenRef = { "LevelGenRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, LevelGenRef), Z_Construct_UClass_AProceduralLevelGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelGenRef_MetaData), NewProp_LevelGenRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyParent_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyParent, PlayerRef), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetSubmergedDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_BuoyancyStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_BuoyancyDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_FightProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_TargetDepthOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_EnemyMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_WaterDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_LateralTrackingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_bIsTweaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_LevelGenRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyParent_Statics::NewProp_PlayerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyParent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetable_NoRegister, (int32)VTABLE_OFFSET(AEnemyParent, ITargetable), false },  // 1541049264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyParent_Statics::ClassParams = {
	&AEnemyParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyParent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyParent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyParent_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyParent()
{
	if (!Z_Registration_Info_UClass_AEnemyParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyParent.OuterSingleton, Z_Construct_UClass_AEnemyParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyParent.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AEnemyParent>()
{
	return AEnemyParent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyParent);
AEnemyParent::~AEnemyParent() {}
// End Class AEnemyParent

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 322827538U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFishFightProfile::StaticStruct, Z_Construct_UScriptStruct_FFishFightProfile_Statics::NewStructOps, TEXT("FishFightProfile"), &Z_Registration_Info_UScriptStruct_FishFightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFishFightProfile), 3682149456U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyParent, AEnemyParent::StaticClass, TEXT("AEnemyParent"), &Z_Registration_Info_UClass_AEnemyParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyParent), 2255348066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_2035248948(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyParent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
