// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Enemy/EnemyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AEnemyBase();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
// End Cross Module References

// Begin Class AEnemyBase Function GetStaminaRatio
struct Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics
{
	struct EnemyBase_eventGetStaminaRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventGetStaminaRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetStaminaRatio", nullptr, nullptr, Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::EnemyBase_eventGetStaminaRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::EnemyBase_eventGetStaminaRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyBase_GetStaminaRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetStaminaRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyBase::execGetStaminaRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStaminaRatio();
	P_NATIVE_END;
}
// End Class AEnemyBase Function GetStaminaRatio

// Begin Class AEnemyBase
void AEnemyBase::StaticRegisterNativesAEnemyBase()
{
	UClass* Class = AEnemyBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStaminaRatio", &AEnemyBase::execGetStaminaRatio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBase);
UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
{
	return AEnemyBase::StaticClass();
}
struct Z_Construct_UClass_AEnemyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyBase.h" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragThreshold_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Resistance Check:\n// How hard must the tether pull before the beast starts losing energy?\n// If PullForce < DragThreshold, no damage is dealt (the line spools out freely).\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Resistance Check:\nHow hard must the tether pull before the beast starts losing energy?\nIf PullForce < DragThreshold, no damage is dealt (the line spools out freely)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Rail we are currently riding\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Rail we are currently riding" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_GetStaminaRatio, "GetStaminaRatio" }, // 3815798258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_DragThreshold = { "DragThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, DragThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragThreshold_MetaData), NewProp_DragThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, BaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpeed_MetaData), NewProp_BaseSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_CurrentTrack = { "CurrentTrack", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, CurrentTrack), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrack_MetaData), NewProp_CurrentTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_DragThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_CurrentTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
	&AEnemyBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyBase()
{
	if (!Z_Registration_Info_UClass_AEnemyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBase.OuterSingleton, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyBase.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AEnemyBase>()
{
	return AEnemyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
AEnemyBase::~AEnemyBase() {}
// End Class AEnemyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 1375213877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyBase_h_881015729(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_EnemyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
