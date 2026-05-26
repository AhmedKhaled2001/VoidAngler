// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/WorldGeneration/ProceduralLevelGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralLevelGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AProceduralLevelGenerator();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AProceduralLevelGenerator_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UThemeData_NoRegister();
// End Cross Module References

// Begin Class AProceduralLevelGenerator
void AProceduralLevelGenerator::StaticRegisterNativesAProceduralLevelGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralLevelGenerator);
UClass* Z_Construct_UClass_AProceduralLevelGenerator_NoRegister()
{
	return AProceduralLevelGenerator::StaticClass();
}
struct Z_Construct_UClass_AProceduralLevelGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration/ProceduralLevelGenerator.h" },
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTheme_MetaData[] = {
		{ "Category", "Theme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The active Theme Data Asset (Alexandria, Abyss, etc.) Drag your DataAsset here in the editor!\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The active Theme Data Asset (Alexandria, Abyss, etc.) Drag your DataAsset here in the editor!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackCenters_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWanderAngle_MetaData[] = {
		{ "Category", "Generation Metrics|Wander" },
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WanderFrequency_MetaData[] = {
		{ "Category", "Generation Metrics|Wander" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How quickly does it change from a left turn to a right turn? (0.05 is a smooth, long curve)\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly does it change from a left turn to a right turn? (0.05 is a smooth, long curve)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistanceAhead_MetaData[] = {
		{ "Category", "Generation Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far out on the horizon do we generate the city?\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far out on the horizon do we generate the city?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowInterval_MetaData[] = {
		{ "Category", "Generation Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The distance between each \"Row\" or \"Slice\" of generation (The density of the track)\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance between each \"Row\" or \"Slice\" of generation (The density of the track)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayableLaneWidth_MetaData[] = {
		{ "Category", "Generation Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The width of the area where Anchors and Obstacles spawn (The active gameplay area)\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the area where Anchors and Obstacles spawn (The active gameplay area)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticLaneWidth_MetaData[] = {
		{ "Category", "Generation Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The width of the area where massive background scenery spawns (The visual corridor)\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the area where massive background scenery spawns (The visual corridor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnDistanceBehind_MetaData[] = {
		{ "Category", "Generation Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far behind the player until we delete the row to save memory?\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far behind the player until we delete the row to save memory?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterDeadzone_MetaData[] = {
		{ "Category", "Generation Metrics" },
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLookaheadMultiplier_MetaData[] = {
		{ "Category", "Generation Metrics|Distance" },
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEnvironmentAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A master list of EVERYTHING we have spawned, so we can cleanly delete it later\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/ProceduralLevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A master list of EVERYTHING we have spawned, so we can cleanly delete it later" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTheme;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackCenters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackCenters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWanderAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WanderFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistanceAhead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayableLaneWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CosmeticLaneWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DespawnDistanceBehind;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDeadzone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLookaheadMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEnvironmentAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEnvironmentAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralLevelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CurrentTheme = { "CurrentTheme", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, CurrentTheme), Z_Construct_UClass_UThemeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTheme_MetaData), NewProp_CurrentTheme_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_TrackCenters_Inner = { "TrackCenters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_TrackCenters = { "TrackCenters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, TrackCenters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackCenters_MetaData), NewProp_TrackCenters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_MaxWanderAngle = { "MaxWanderAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, MaxWanderAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWanderAngle_MetaData), NewProp_MaxWanderAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_WanderFrequency = { "WanderFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, WanderFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WanderFrequency_MetaData), NewProp_WanderFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_SpawnDistanceAhead = { "SpawnDistanceAhead", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, SpawnDistanceAhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistanceAhead_MetaData), NewProp_SpawnDistanceAhead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_RowInterval = { "RowInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, RowInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowInterval_MetaData), NewProp_RowInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_PlayableLaneWidth = { "PlayableLaneWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, PlayableLaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayableLaneWidth_MetaData), NewProp_PlayableLaneWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CosmeticLaneWidth = { "CosmeticLaneWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, CosmeticLaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosmeticLaneWidth_MetaData), NewProp_CosmeticLaneWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_DespawnDistanceBehind = { "DespawnDistanceBehind", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, DespawnDistanceBehind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnDistanceBehind_MetaData), NewProp_DespawnDistanceBehind_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CenterDeadzone = { "CenterDeadzone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, CenterDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterDeadzone_MetaData), NewProp_CenterDeadzone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_SpeedLookaheadMultiplier = { "SpeedLookaheadMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, SpeedLookaheadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLookaheadMultiplier_MetaData), NewProp_SpeedLookaheadMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, PlayerRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_ActiveEnvironmentAssets_Inner = { "ActiveEnvironmentAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_ActiveEnvironmentAssets = { "ActiveEnvironmentAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralLevelGenerator, ActiveEnvironmentAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEnvironmentAssets_MetaData), NewProp_ActiveEnvironmentAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralLevelGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CurrentTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_TrackCenters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_TrackCenters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_MaxWanderAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_WanderFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_SpawnDistanceAhead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_RowInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_PlayableLaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CosmeticLaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_DespawnDistanceBehind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_CenterDeadzone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_SpeedLookaheadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_ActiveEnvironmentAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelGenerator_Statics::NewProp_ActiveEnvironmentAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralLevelGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralLevelGenerator_Statics::ClassParams = {
	&AProceduralLevelGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProceduralLevelGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralLevelGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralLevelGenerator()
{
	if (!Z_Registration_Info_UClass_AProceduralLevelGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralLevelGenerator.OuterSingleton, Z_Construct_UClass_AProceduralLevelGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralLevelGenerator.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AProceduralLevelGenerator>()
{
	return AProceduralLevelGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralLevelGenerator);
AProceduralLevelGenerator::~AProceduralLevelGenerator() {}
// End Class AProceduralLevelGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ProceduralLevelGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralLevelGenerator, AProceduralLevelGenerator::StaticClass, TEXT("AProceduralLevelGenerator"), &Z_Registration_Info_UClass_AProceduralLevelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralLevelGenerator), 130633487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ProceduralLevelGenerator_h_3837352800(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ProceduralLevelGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ProceduralLevelGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
