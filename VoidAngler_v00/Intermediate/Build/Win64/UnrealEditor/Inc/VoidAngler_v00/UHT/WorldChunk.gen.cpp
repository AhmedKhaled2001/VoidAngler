// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/WorldGeneration/WorldChunk.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldChunk() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AChunkManager_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AWorldChunk();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AWorldChunk_NoRegister();
// End Cross Module References

// Begin Class AWorldChunk Function OnTriggerOverlap
struct Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics
{
	struct WorldChunk_eventOnTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldChunk_eventOnTriggerOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldChunk_eventOnTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldChunk_eventOnTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldChunk_eventOnTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WorldChunk_eventOnTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldChunk_eventOnTriggerOverlap_Parms), &Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldChunk_eventOnTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldChunk, nullptr, "OnTriggerOverlap", nullptr, nullptr, Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::WorldChunk_eventOnTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::WorldChunk_eventOnTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldChunk::execOnTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWorldChunk Function OnTriggerOverlap

// Begin Class AWorldChunk
void AWorldChunk::StaticRegisterNativesAWorldChunk()
{
	UClass* Class = AWorldChunk::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTriggerOverlap", &AWorldChunk::execOnTriggerOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldChunk);
UClass* Z_Construct_UClass_AWorldChunk_NoRegister()
{
	return AWorldChunk::StaticClass();
}
struct Z_Construct_UClass_AWorldChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration/WorldChunk.h" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitPoint_MetaData[] = {
		{ "Category", "Level Design" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTrigger_MetaData[] = {
		{ "Category", "Level Design" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleVolume_MetaData[] = {
		{ "Category", "Level Design" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[] = {
		{ "Category", "Level Design" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpline_MetaData[] = {
		{ "Category", "Level Design" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMinWeave_MetaData[] = {
		{ "Category", "Level Design|Beast Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Beast Movement Fields\n" },
#endif
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Beast Movement Fields" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMaxWeave_MetaData[] = {
		{ "Category", "Level Design|Beast Constraints" },
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyManager_MetaData[] = {
		{ "ModuleRelativePath", "WorldGeneration/WorldChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObstacleVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedMinWeave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedMaxWeave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldChunk_OnTriggerOverlap, "OnTriggerOverlap" }, // 4259128560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_ExitPoint = { "ExitPoint", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, ExitPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitPoint_MetaData), NewProp_ExitPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_SpawnTrigger = { "SpawnTrigger", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, SpawnTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTrigger_MetaData), NewProp_SpawnTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_ObstacleVolume = { "ObstacleVolume", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, ObstacleVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleVolume_MetaData), NewProp_ObstacleVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, EntryPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryPoint_MetaData), NewProp_EntryPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_PathSpline = { "PathSpline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, PathSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpline_MetaData), NewProp_PathSpline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_AllowedMinWeave = { "AllowedMinWeave", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, AllowedMinWeave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMinWeave_MetaData), NewProp_AllowedMinWeave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_AllowedMaxWeave = { "AllowedMaxWeave", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, AllowedMaxWeave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMaxWeave_MetaData), NewProp_AllowedMaxWeave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldChunk_Statics::NewProp_MyManager = { "MyManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldChunk, MyManager), Z_Construct_UClass_AChunkManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyManager_MetaData), NewProp_MyManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_ExitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_SpawnTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_ObstacleVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_EntryPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_PathSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_AllowedMinWeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_AllowedMaxWeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldChunk_Statics::NewProp_MyManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldChunk_Statics::ClassParams = {
	&AWorldChunk::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldChunk_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldChunk()
{
	if (!Z_Registration_Info_UClass_AWorldChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldChunk.OuterSingleton, Z_Construct_UClass_AWorldChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldChunk.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AWorldChunk>()
{
	return AWorldChunk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldChunk);
AWorldChunk::~AWorldChunk() {}
// End Class AWorldChunk

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldChunk, AWorldChunk::StaticClass, TEXT("AWorldChunk"), &Z_Registration_Info_UClass_AWorldChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldChunk), 3964399170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_346050658(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_WorldChunk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
