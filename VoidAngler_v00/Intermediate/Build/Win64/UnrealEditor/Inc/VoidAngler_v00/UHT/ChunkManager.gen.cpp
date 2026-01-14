// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/WorldGeneration/ChunkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AChunkManager();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AChunkManager_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AWorldChunk_NoRegister();
// End Cross Module References

// Begin Class AChunkManager Function SpawnNextChunk
struct Z_Construct_UFunction_AChunkManager_SpawnNextChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkManager_SpawnNextChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkManager, nullptr, "SpawnNextChunk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkManager_SpawnNextChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkManager_SpawnNextChunk_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChunkManager_SpawnNextChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkManager_SpawnNextChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkManager::execSpawnNextChunk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnNextChunk();
	P_NATIVE_END;
}
// End Class AChunkManager Function SpawnNextChunk

// Begin Class AChunkManager
void AChunkManager::StaticRegisterNativesAChunkManager()
{
	UClass* Class = AChunkManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnNextChunk", &AChunkManager::execSpawnNextChunk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkManager);
UClass* Z_Construct_UClass_AChunkManager_NoRegister()
{
	return AChunkManager::StaticClass();
}
struct Z_Construct_UClass_AChunkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration/ChunkManager.h" },
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkTypes_MetaData[] = {
		{ "Category", "Level Generation" },
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialChunkCount_MetaData[] = {
		{ "Category", "Level Generation" },
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChunks_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSpawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/ChunkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkTypes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialChunkCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveChunks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextSpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkManager_SpawnNextChunk, "SpawnNextChunk" }, // 1547049249
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_ChunkTypes_Inner = { "ChunkTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_ChunkTypes = { "ChunkTypes", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkManager, ChunkTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkTypes_MetaData), NewProp_ChunkTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_InitialChunkCount = { "InitialChunkCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkManager, InitialChunkCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialChunkCount_MetaData), NewProp_InitialChunkCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_ActiveChunks_Inner = { "ActiveChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWorldChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_ActiveChunks = { "ActiveChunks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkManager, ActiveChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveChunks_MetaData), NewProp_ActiveChunks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkManager_Statics::NewProp_NextSpawnTransform = { "NextSpawnTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkManager, NextSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSpawnTransform_MetaData), NewProp_NextSpawnTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_ChunkTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_ChunkTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_InitialChunkCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_ActiveChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_ActiveChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkManager_Statics::NewProp_NextSpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChunkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkManager_Statics::ClassParams = {
	&AChunkManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChunkManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChunkManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChunkManager()
{
	if (!Z_Registration_Info_UClass_AChunkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkManager.OuterSingleton, Z_Construct_UClass_AChunkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChunkManager.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AChunkManager>()
{
	return AChunkManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkManager);
AChunkManager::~AChunkManager() {}
// End Class AChunkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChunkManager, AChunkManager::StaticClass, TEXT("AChunkManager"), &Z_Registration_Info_UClass_AChunkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkManager), 1352620535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_1733318942(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_ChunkManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
