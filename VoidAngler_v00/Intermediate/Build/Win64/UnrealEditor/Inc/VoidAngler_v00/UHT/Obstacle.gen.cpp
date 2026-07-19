// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Traversal/Obstacle.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AObstacle();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
// End Cross Module References

// Begin Class AObstacle Function HandleOverlap
struct Z_Construct_UFunction_AObstacle_HandleOverlap_Statics
{
	struct Obstacle_eventHandleOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventHandleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventHandleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventHandleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventHandleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Obstacle_eventHandleOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Obstacle_eventHandleOverlap_Parms), &Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventHandleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, nullptr, "HandleOverlap", nullptr, nullptr, Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::Obstacle_eventHandleOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::Obstacle_eventHandleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObstacle_HandleOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObstacle_HandleOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObstacle::execHandleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AObstacle Function HandleOverlap

// Begin Class AObstacle Function OnPlayerHit
struct Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics
{
	struct Obstacle_eventOnPlayerHit_Parms
	{
		AActor* PlayerActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This makes it so you can define what happens when you hit this \n// SPECIFIC obstacle in the Blueprint Editor (e.g., set damage, slow amount)\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This makes it so you can define what happens when you hit this\nSPECIFIC obstacle in the Blueprint Editor (e.g., set damage, slow amount)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventOnPlayerHit_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::NewProp_PlayerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, nullptr, "OnPlayerHit", nullptr, nullptr, Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::Obstacle_eventOnPlayerHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::Obstacle_eventOnPlayerHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObstacle_OnPlayerHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObstacle_OnPlayerHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObstacle::execOnPlayerHit)
{
	P_GET_OBJECT(AActor,Z_Param_PlayerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerHit(Z_Param_PlayerActor);
	P_NATIVE_END;
}
// End Class AObstacle Function OnPlayerHit

// Begin Class AObstacle
void AObstacle::StaticRegisterNativesAObstacle()
{
	UClass* Class = AObstacle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleOverlap", &AObstacle::execHandleOverlap },
		{ "OnPlayerHit", &AObstacle::execOnPlayerHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
UClass* Z_Construct_UClass_AObstacle_NoRegister()
{
	return AObstacle::StaticClass();
}
struct Z_Construct_UClass_AObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Traversal/Obstacle.h" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitShake_MetaData[] = {
		{ "Category", "Obstacle Globals" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherDisableDuration_MetaData[] = {
		{ "Category", "Obstacle Globals" },
		{ "ModuleRelativePath", "Traversal/Obstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitShake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherDisableDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstacle_HandleOverlap, "HandleOverlap" }, // 3773334929
		{ &Z_Construct_UFunction_AObstacle_OnPlayerHit, "OnPlayerHit" }, // 4216091101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_HitShake = { "HitShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, HitShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitShake_MetaData), NewProp_HitShake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_TetherDisableDuration = { "TetherDisableDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, TetherDisableDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherDisableDuration_MetaData), NewProp_TetherDisableDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_HitShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_TetherDisableDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
	&AObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacle()
{
	if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AObstacle>()
{
	return AObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
AObstacle::~AObstacle() {}
// End Class AObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 282977321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_2952673957(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_Obstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
