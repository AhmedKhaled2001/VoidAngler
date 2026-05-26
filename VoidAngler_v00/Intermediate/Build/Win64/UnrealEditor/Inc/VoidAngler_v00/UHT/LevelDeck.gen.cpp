// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/GameBackend/LevelDeck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelDeck() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ULevelDeck();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ULevelDeck_NoRegister();
VOIDANGLER_V00_API UEnum* Z_Construct_UEnum_VoidAngler_v00_ESpawnType();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FPatternItem();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableAsset();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnPattern();
// End Cross Module References

// Begin Enum ESpawnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnType;
static UEnum* ESpawnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoidAngler_v00_ESpawnType, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("ESpawnType"));
	}
	return Z_Registration_Info_UEnum_ESpawnType.OuterSingleton;
}
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ESpawnType>()
{
	return ESpawnType_StaticEnum();
}
struct Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Anchor.DisplayName", "Anchor" },
		{ "Anchor.Name", "ESpawnType::Anchor" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TASK 1.1: THE SPAWN TYPE ---\n" },
#endif
		{ "Hazard.DisplayName", "Hazard" },
		{ "Hazard.Name", "ESpawnType::Hazard" },
		{ "LevelBorder.DisplayName", "Level Border" },
		{ "LevelBorder.Name", "ESpawnType::LevelBorder" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TASK 1.1: THE SPAWN TYPE ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnType::Anchor", (int64)ESpawnType::Anchor },
		{ "ESpawnType::LevelBorder", (int64)ESpawnType::LevelBorder },
		{ "ESpawnType::Hazard", (int64)ESpawnType::Hazard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	"ESpawnType",
	"ESpawnType",
	Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoidAngler_v00_ESpawnType()
{
	if (!Z_Registration_Info_UEnum_ESpawnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnType.InnerSingleton, Z_Construct_UEnum_VoidAngler_v00_ESpawnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnType.InnerSingleton;
}
// End Enum ESpawnType

// Begin ScriptStruct FSpawnableAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnableAsset;
class UScriptStruct* FSpawnableAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnableAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableAsset, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("SpawnableAsset"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnableAsset.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FSpawnableAsset>()
{
	return FSpawnableAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnableAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TASK 1.2: THE ASSET STRUCT ---\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TASK 1.2: THE ASSET STRUCT ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWeightCurve_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnWeightCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableAsset, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClass_MetaData), NewProp_AssetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_SpawnWeightCurve = { "SpawnWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableAsset, SpawnWeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnWeightCurve_MetaData), NewProp_SpawnWeightCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableAsset, AssetType), Z_Construct_UEnum_VoidAngler_v00_ESpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) }; // 2993892721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_SpawnWeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewProp_AssetType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"SpawnableAsset",
	Z_Construct_UScriptStruct_FSpawnableAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableAsset_Statics::PropPointers),
	sizeof(FSpawnableAsset),
	alignof(FSpawnableAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnableAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnableAsset()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnableAsset.InnerSingleton, Z_Construct_UScriptStruct_FSpawnableAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnableAsset.InnerSingleton;
}
// End ScriptStruct FSpawnableAsset

// Begin ScriptStruct FPatternItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PatternItem;
class UScriptStruct* FPatternItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PatternItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PatternItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatternItem, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("PatternItem"));
	}
	return Z_Registration_Info_UScriptStruct_PatternItem.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FPatternItem>()
{
	return FPatternItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPatternItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[] = {
		{ "Category", "Pattern" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The specific hazard or anchor to spawn\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific hazard or anchor to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffset_MetaData[] = {
		{ "Category", "Pattern" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Absolute distance forward from the START of this specific pattern\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Absolute distance forward from the START of this specific pattern" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanePosition_MetaData[] = {
		{ "Category", "Pattern" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1.0 is the far Left Wall, 1.0 is the far Right Wall, 0.0 is dead center.\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1.0 is the far Left Wall, 1.0 is the far Right Wall, 0.0 is dead center." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LanePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatternItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPatternItem, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClass_MetaData), NewProp_AssetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_ForwardOffset = { "ForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPatternItem, ForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffset_MetaData), NewProp_ForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_LanePosition = { "LanePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPatternItem, LanePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanePosition_MetaData), NewProp_LanePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatternItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_AssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_ForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternItem_Statics::NewProp_LanePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatternItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"PatternItem",
	Z_Construct_UScriptStruct_FPatternItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternItem_Statics::PropPointers),
	sizeof(FPatternItem),
	alignof(FPatternItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPatternItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPatternItem()
{
	if (!Z_Registration_Info_UScriptStruct_PatternItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PatternItem.InnerSingleton, Z_Construct_UScriptStruct_FPatternItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PatternItem.InnerSingleton;
}
// End ScriptStruct FPatternItem

// Begin ScriptStruct FSpawnPattern
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnPattern;
class UScriptStruct* FSpawnPattern::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPattern.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnPattern.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnPattern, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("SpawnPattern"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnPattern.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FSpawnPattern>()
{
	return FSpawnPattern::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternName_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInPattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternLength_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternWeightCurve_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PatternName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsInPattern_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInPattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatternLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatternWeightCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnPattern>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternName = { "PatternName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPattern, PatternName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternName_MetaData), NewProp_PatternName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_ItemsInPattern_Inner = { "ItemsInPattern", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPatternItem, METADATA_PARAMS(0, nullptr) }; // 1941403502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_ItemsInPattern = { "ItemsInPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPattern, ItemsInPattern), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsInPattern_MetaData), NewProp_ItemsInPattern_MetaData) }; // 1941403502
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternLength = { "PatternLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPattern, PatternLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternLength_MetaData), NewProp_PatternLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternWeightCurve = { "PatternWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPattern, PatternWeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternWeightCurve_MetaData), NewProp_PatternWeightCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_ItemsInPattern_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_ItemsInPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewProp_PatternWeightCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnPattern_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"SpawnPattern",
	Z_Construct_UScriptStruct_FSpawnPattern_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPattern_Statics::PropPointers),
	sizeof(FSpawnPattern),
	alignof(FSpawnPattern),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPattern_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnPattern_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnPattern()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnPattern.InnerSingleton, Z_Construct_UScriptStruct_FSpawnPattern_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnPattern.InnerSingleton;
}
// End ScriptStruct FSpawnPattern

// Begin Class ULevelDeck
void ULevelDeck::StaticRegisterNativesULevelDeck()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelDeck);
UClass* Z_Construct_UClass_ULevelDeck_NoRegister()
{
	return ULevelDeck::StaticClass();
}
struct Z_Construct_UClass_ULevelDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TASK 1.3: THE MASTER DATA ASSET ---\n" },
#endif
		{ "IncludePath", "GameBackend/LevelDeck.h" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TASK 1.3: THE MASTER DATA ASSET ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningDeck_MetaData[] = {
		{ "Category", "Level Generation|Assets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The master list of everything that can spawn in this biome\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The master list of everything that can spawn in this biome" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidthCurve_MetaData[] = {
		{ "Category", "Level Generation|Layout" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternDeck_MetaData[] = {
		{ "Category", "Level Generation|Patterns" },
		{ "ModuleRelativePath", "GameBackend/LevelDeck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawningDeck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawningDeck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaneWidthCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternDeck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatternDeck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelDeck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelDeck_Statics::NewProp_SpawningDeck_Inner = { "SpawningDeck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnableAsset, METADATA_PARAMS(0, nullptr) }; // 2956563720
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelDeck_Statics::NewProp_SpawningDeck = { "SpawningDeck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelDeck, SpawningDeck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningDeck_MetaData), NewProp_SpawningDeck_MetaData) }; // 2956563720
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelDeck_Statics::NewProp_LaneWidthCurve = { "LaneWidthCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelDeck, LaneWidthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidthCurve_MetaData), NewProp_LaneWidthCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelDeck_Statics::NewProp_PatternDeck_Inner = { "PatternDeck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnPattern, METADATA_PARAMS(0, nullptr) }; // 300704565
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelDeck_Statics::NewProp_PatternDeck = { "PatternDeck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelDeck, PatternDeck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternDeck_MetaData), NewProp_PatternDeck_MetaData) }; // 300704565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelDeck_Statics::NewProp_SpawningDeck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelDeck_Statics::NewProp_SpawningDeck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelDeck_Statics::NewProp_LaneWidthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelDeck_Statics::NewProp_PatternDeck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelDeck_Statics::NewProp_PatternDeck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelDeck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelDeck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelDeck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelDeck_Statics::ClassParams = {
	&ULevelDeck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelDeck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelDeck_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelDeck_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelDeck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelDeck()
{
	if (!Z_Registration_Info_UClass_ULevelDeck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelDeck.OuterSingleton, Z_Construct_UClass_ULevelDeck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelDeck.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<ULevelDeck>()
{
	return ULevelDeck::StaticClass();
}
ULevelDeck::ULevelDeck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelDeck);
ULevelDeck::~ULevelDeck() {}
// End Class ULevelDeck

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpawnType_StaticEnum, TEXT("ESpawnType"), &Z_Registration_Info_UEnum_ESpawnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2993892721U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnableAsset::StaticStruct, Z_Construct_UScriptStruct_FSpawnableAsset_Statics::NewStructOps, TEXT("SpawnableAsset"), &Z_Registration_Info_UScriptStruct_SpawnableAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnableAsset), 2956563720U) },
		{ FPatternItem::StaticStruct, Z_Construct_UScriptStruct_FPatternItem_Statics::NewStructOps, TEXT("PatternItem"), &Z_Registration_Info_UScriptStruct_PatternItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPatternItem), 1941403502U) },
		{ FSpawnPattern::StaticStruct, Z_Construct_UScriptStruct_FSpawnPattern_Statics::NewStructOps, TEXT("SpawnPattern"), &Z_Registration_Info_UScriptStruct_SpawnPattern, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnPattern), 300704565U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelDeck, ULevelDeck::StaticClass, TEXT("ULevelDeck"), &Z_Registration_Info_UClass_ULevelDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelDeck), 3735612397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_4235783754(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_LevelDeck_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
