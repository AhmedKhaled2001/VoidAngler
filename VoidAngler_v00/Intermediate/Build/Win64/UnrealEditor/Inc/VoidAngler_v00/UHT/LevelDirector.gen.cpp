// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/WorldGeneration/LevelDirector.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "VoidAngler_v00/WorldGeneration/OceanManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelDirector() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ALevelDirector();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ALevelDirector_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ULevelDeck_NoRegister();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FActiveAsset();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWave();
VOIDANGLER_V00_API UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawn();
// End Cross Module References

// Begin ScriptStruct FPendingSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingSpawn;
class UScriptStruct* FPendingSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingSpawn, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("PendingSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FPendingSpawn>()
{
	return FPendingSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPendingSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"PendingSpawn",
	nullptr,
	0,
	sizeof(FPendingSpawn),
	alignof(FPendingSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPendingSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton, Z_Construct_UScriptStruct_FPendingSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton;
}
// End ScriptStruct FPendingSpawn

// Begin ScriptStruct FActiveAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveAsset;
class UScriptStruct* FActiveAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveAsset, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("ActiveAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveAsset.OuterSingleton;
}
template<> VOIDANGLER_V00_API UScriptStruct* StaticStruct<FActiveAsset>()
{
	return FActiveAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	&NewStructOps,
	"ActiveAsset",
	nullptr,
	0,
	sizeof(FActiveAsset),
	alignof(FActiveAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveAsset()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveAsset.InnerSingleton, Z_Construct_UScriptStruct_FActiveAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveAsset.InnerSingleton;
}
// End ScriptStruct FActiveAsset

// Begin Class ALevelDirector Function RefreshActivePool
struct Z_Construct_UFunction_ALevelDirector_RefreshActivePool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDirector_RefreshActivePool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDirector, nullptr, "RefreshActivePool", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDirector_RefreshActivePool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelDirector_RefreshActivePool_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelDirector_RefreshActivePool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDirector_RefreshActivePool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelDirector::execRefreshActivePool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshActivePool();
	P_NATIVE_END;
}
// End Class ALevelDirector Function RefreshActivePool

// Begin Class ALevelDirector
void ALevelDirector::StaticRegisterNativesALevelDirector()
{
	UClass* Class = ALevelDirector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RefreshActivePool", &ALevelDirector::execRefreshActivePool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelDirector);
UClass* Z_Construct_UClass_ALevelDirector_NoRegister()
{
	return ALevelDirector::StaticClass();
}
struct Z_Construct_UClass_ALevelDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration/LevelDirector.h" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolRefreshTimer_MetaData[] = {
		{ "Category", "LevelGeneration" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanManagerRef_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestTsunami_MetaData[] = {
		{ "Category", "TestWave" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestTsunamiDuration_MetaData[] = {
		{ "Category", "TestWave" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestTsunamiFrequency_MetaData[] = {
		{ "Category", "TestWave" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBiomeDeck_MetaData[] = {
		{ "Category", "Level Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VARIABLES ---\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VARIABLES ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDistanceTraversed_MetaData[] = {
		{ "Category", "Level Generation|Debug" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSpawnPool_MetaData[] = {
		{ "Category", "Level Generation|Debug" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderSegmentLength_MetaData[] = {
		{ "Category", "Level Generation|Borders" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistanceAhead_MetaData[] = {
		{ "Category", "Level Generation|Spawning" },
		{ "ModuleRelativePath", "WorldGeneration/LevelDirector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolRefreshTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanManagerRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestTsunami;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestTsunamiDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestTsunamiFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBiomeDeck;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDistanceTraversed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSpawnPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSpawnPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderSegmentLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistanceAhead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelDirector_RefreshActivePool, "RefreshActivePool" }, // 582288091
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_PoolRefreshTimer = { "PoolRefreshTimer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, PoolRefreshTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolRefreshTimer_MetaData), NewProp_PoolRefreshTimer_MetaData) }; // 756291145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_OceanManagerRef = { "OceanManagerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, OceanManagerRef), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanManagerRef_MetaData), NewProp_OceanManagerRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunami = { "TestTsunami", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, TestTsunami), Z_Construct_UScriptStruct_FGerstnerWave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestTsunami_MetaData), NewProp_TestTsunami_MetaData) }; // 2028676748
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunamiDuration = { "TestTsunamiDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, TestTsunamiDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestTsunamiDuration_MetaData), NewProp_TestTsunamiDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunamiFrequency = { "TestTsunamiFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, TestTsunamiFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestTsunamiFrequency_MetaData), NewProp_TestTsunamiFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_CurrentBiomeDeck = { "CurrentBiomeDeck", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, CurrentBiomeDeck), Z_Construct_UClass_ULevelDeck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBiomeDeck_MetaData), NewProp_CurrentBiomeDeck_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_TotalDistanceTraversed = { "TotalDistanceTraversed", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, TotalDistanceTraversed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDistanceTraversed_MetaData), NewProp_TotalDistanceTraversed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_ActiveSpawnPool_Inner = { "ActiveSpawnPool", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveAsset, METADATA_PARAMS(0, nullptr) }; // 3941115673
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_ActiveSpawnPool = { "ActiveSpawnPool", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, ActiveSpawnPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSpawnPool_MetaData), NewProp_ActiveSpawnPool_MetaData) }; // 3941115673
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, PlayerRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_BorderSegmentLength = { "BorderSegmentLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, BorderSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderSegmentLength_MetaData), NewProp_BorderSegmentLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelDirector_Statics::NewProp_SpawnDistanceAhead = { "SpawnDistanceAhead", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelDirector, SpawnDistanceAhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistanceAhead_MetaData), NewProp_SpawnDistanceAhead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_PoolRefreshTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_OceanManagerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunami,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunamiDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_TestTsunamiFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_CurrentBiomeDeck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_TotalDistanceTraversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_ActiveSpawnPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_ActiveSpawnPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_BorderSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDirector_Statics::NewProp_SpawnDistanceAhead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelDirector_Statics::ClassParams = {
	&ALevelDirector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDirector_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelDirector()
{
	if (!Z_Registration_Info_UClass_ALevelDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelDirector.OuterSingleton, Z_Construct_UClass_ALevelDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelDirector.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<ALevelDirector>()
{
	return ALevelDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelDirector);
ALevelDirector::~ALevelDirector() {}
// End Class ALevelDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPendingSpawn::StaticStruct, Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewStructOps, TEXT("PendingSpawn"), &Z_Registration_Info_UScriptStruct_PendingSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingSpawn), 2284417861U) },
		{ FActiveAsset::StaticStruct, Z_Construct_UScriptStruct_FActiveAsset_Statics::NewStructOps, TEXT("ActiveAsset"), &Z_Registration_Info_UScriptStruct_ActiveAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveAsset), 3941115673U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelDirector, ALevelDirector::StaticClass, TEXT("ALevelDirector"), &Z_Registration_Info_UClass_ALevelDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelDirector), 3873232303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_2331196770(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_LevelDirector_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
