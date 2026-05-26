// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/WorldGeneration/OceanManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWave();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FWaveEvent();
// End Cross Module References

// Begin ScriptStruct FGerstnerWave
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GerstnerWave;
class UScriptStruct* FGerstnerWave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGerstnerWave, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("GerstnerWave"));
	}
	return Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FGerstnerWave>()
{
	return FGerstnerWave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGerstnerWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "GerstnerWave" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "GerstnerWave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which way it rolls\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which way it rolls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wavelength_MetaData[] = {
		{ "Category", "GerstnerWave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height of the peak\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of the peak" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[] = {
		{ "Category", "GerstnerWave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance between peaks\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance between peaks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "GerstnerWave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0.0 = smooth sine wave, 1.0 = sharp choppy peak\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0.0 = smooth sine wave, 1.0 = sharp choppy peak" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wavelength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steepness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGerstnerWave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGerstnerWave, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGerstnerWave, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Wavelength = { "Wavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGerstnerWave, Wavelength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wavelength_MetaData), NewProp_Wavelength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGerstnerWave, Steepness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_MetaData), NewProp_Steepness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGerstnerWave, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Wavelength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"GerstnerWave",
	Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers),
	sizeof(FGerstnerWave),
	alignof(FGerstnerWave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGerstnerWave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWave()
{
	if (!Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton, Z_Construct_UScriptStruct_FGerstnerWave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton;
}
// End ScriptStruct FGerstnerWave

// Begin ScriptStruct FWaveEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveEvent;
class UScriptStruct* FWaveEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveEvent, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("WaveEvent"));
	}
	return Z_Registration_Info_UScriptStruct_WaveEvent.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FWaveEvent>()
{
	return FWaveEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- THE LEVEL DIRECTOR'S WEAPON (WAVE EVENTS) ---\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- THE LEVEL DIRECTOR'S WEAPON (WAVE EVENTS) ---" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"WaveEvent",
	nullptr,
	0,
	sizeof(FWaveEvent),
	alignof(FWaveEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveEvent()
{
	if (!Z_Registration_Info_UScriptStruct_WaveEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveEvent.InnerSingleton, Z_Construct_UScriptStruct_FWaveEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveEvent.InnerSingleton;
}
// End ScriptStruct FWaveEvent

// Begin Class AOceanManager Function GetWaterHeightAt
struct Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics
{
	struct OceanManager_eventGetWaterHeightAt_Parms
	{
		FVector2D QueryLocation;
		float Time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ocean Physics" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_QueryLocation = { "QueryLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventGetWaterHeightAt_Parms, QueryLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventGetWaterHeightAt_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventGetWaterHeightAt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_QueryLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, nullptr, "GetWaterHeightAt", nullptr, nullptr, Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::OceanManager_eventGetWaterHeightAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::OceanManager_eventGetWaterHeightAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanManager_GetWaterHeightAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanManager_GetWaterHeightAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanManager::execGetWaterHeightAt)
{
	P_GET_STRUCT(FVector2D,Z_Param_QueryLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWaterHeightAt(Z_Param_QueryLocation,Z_Param_Time);
	P_NATIVE_END;
}
// End Class AOceanManager Function GetWaterHeightAt

// Begin Class AOceanManager Function TriggerWaveEvent
struct Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics
{
	struct OceanManager_eventTriggerWaveEvent_Parms
	{
		FGerstnerWave WaveParams;
		FVector2D EventEpicenter;
		float EventRadius;
		float Falloff;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ocean|Events" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventEpicenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_WaveParams = { "WaveParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventTriggerWaveEvent_Parms, WaveParams), Z_Construct_UScriptStruct_FGerstnerWave, METADATA_PARAMS(0, nullptr) }; // 2028676748
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_EventEpicenter = { "EventEpicenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventTriggerWaveEvent_Parms, EventEpicenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_EventRadius = { "EventRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventTriggerWaveEvent_Parms, EventRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventTriggerWaveEvent_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanManager_eventTriggerWaveEvent_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_WaveParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_EventEpicenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_EventRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, nullptr, "TriggerWaveEvent", nullptr, nullptr, Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::OceanManager_eventTriggerWaveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::OceanManager_eventTriggerWaveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanManager_TriggerWaveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanManager_TriggerWaveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanManager::execTriggerWaveEvent)
{
	P_GET_STRUCT(FGerstnerWave,Z_Param_WaveParams);
	P_GET_STRUCT(FVector2D,Z_Param_EventEpicenter);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerWaveEvent(Z_Param_WaveParams,Z_Param_EventEpicenter,Z_Param_EventRadius,Z_Param_Falloff,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class AOceanManager Function TriggerWaveEvent

// Begin Class AOceanManager
void AOceanManager::StaticRegisterNativesAOceanManager()
{
	UClass* Class = AOceanManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWaterHeightAt", &AOceanManager::execGetWaterHeightAt },
		{ "TriggerWaveEvent", &AOceanManager::execTriggerWaveEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanManager);
UClass* Z_Construct_UClass_AOceanManager_NoRegister()
{
	return AOceanManager::StaticClass();
}
struct Z_Construct_UClass_AOceanManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration/OceanManager.h" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanMPC_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientWaves_MetaData[] = {
		{ "Category", "Ocean|Ambient" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWaterHeight_MetaData[] = {
		{ "Category", "Ocean Settings" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanMPC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientWaves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AmbientWaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWaterHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanManager_GetWaterHeightAt, "GetWaterHeightAt" }, // 3286209316
		{ &Z_Construct_UFunction_AOceanManager_TriggerWaveEvent, "TriggerWaveEvent" }, // 4153577070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_OceanMPC = { "OceanMPC", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanManager, OceanMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanMPC_MetaData), NewProp_OceanMPC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_AmbientWaves_Inner = { "AmbientWaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGerstnerWave, METADATA_PARAMS(0, nullptr) }; // 2028676748
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_AmbientWaves = { "AmbientWaves", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanManager, AmbientWaves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientWaves_MetaData), NewProp_AmbientWaves_MetaData) }; // 2028676748
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_BaseWaterHeight = { "BaseWaterHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanManager, BaseWaterHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWaterHeight_MetaData), NewProp_BaseWaterHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_OceanMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_AmbientWaves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_AmbientWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_BaseWaterHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanManager_Statics::ClassParams = {
	&AOceanManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanManager()
{
	if (!Z_Registration_Info_UClass_AOceanManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanManager.OuterSingleton, Z_Construct_UClass_AOceanManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanManager.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AOceanManager>()
{
	return AOceanManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanManager);
AOceanManager::~AOceanManager() {}
// End Class AOceanManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGerstnerWave::StaticStruct, Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewStructOps, TEXT("GerstnerWave"), &Z_Registration_Info_UScriptStruct_GerstnerWave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGerstnerWave), 2028676748U) },
		{ FWaveEvent::StaticStruct, Z_Construct_UScriptStruct_FWaveEvent_Statics::NewStructOps, TEXT("WaveEvent"), &Z_Registration_Info_UScriptStruct_WaveEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveEvent), 203427972U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanManager, AOceanManager::StaticClass, TEXT("AOceanManager"), &Z_Registration_Info_UClass_AOceanManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanManager), 1368989195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_1795933605(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
