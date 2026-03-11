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
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References

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

// Begin Class AOceanManager
void AOceanManager::StaticRegisterNativesAOceanManager()
{
	UClass* Class = AOceanManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWaterHeightAt", &AOceanManager::execGetWaterHeightAt },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWaterHeight_MetaData[] = {
		{ "Category", "Ocean Settings" },
		{ "ModuleRelativePath", "WorldGeneration/OceanManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWaterHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanManager_GetWaterHeightAt, "GetWaterHeightAt" }, // 3286209316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_BaseWaterHeight = { "BaseWaterHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanManager, BaseWaterHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWaterHeight_MetaData), NewProp_BaseWaterHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanManager_Statics::PropPointers[] = {
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanManager, AOceanManager::StaticClass, TEXT("AOceanManager"), &Z_Registration_Info_UClass_AOceanManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanManager), 3467064209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_3697480634(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_WorldGeneration_OceanManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
