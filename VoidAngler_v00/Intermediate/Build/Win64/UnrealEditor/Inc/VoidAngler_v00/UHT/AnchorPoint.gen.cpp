// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Traversal/AnchorPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnchorPoint() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AAnchorPoint();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AAnchorPoint_NoRegister();
// End Cross Module References

// Begin Class AAnchorPoint
void AAnchorPoint::StaticRegisterNativesAAnchorPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnchorPoint);
UClass* Z_Construct_UClass_AAnchorPoint_NoRegister()
{
	return AAnchorPoint::StaticClass();
}
struct Z_Construct_UClass_AAnchorPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Traversal/AnchorPoint.h" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckpoint_MetaData[] = {
		{ "Category", "GameLogic" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalColor_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointColor_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedColor_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Traversal/AnchorPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightComponent;
	static void NewProp_bIsCheckpoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckpoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckpointColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnchorPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnchorPoint, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnchorPoint, LightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightComponent_MetaData), NewProp_LightComponent_MetaData) };
void Z_Construct_UClass_AAnchorPoint_Statics::NewProp_bIsCheckpoint_SetBit(void* Obj)
{
	((AAnchorPoint*)Obj)->bIsCheckpoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_bIsCheckpoint = { "bIsCheckpoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAnchorPoint), &Z_Construct_UClass_AAnchorPoint_Statics::NewProp_bIsCheckpoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckpoint_MetaData), NewProp_bIsCheckpoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_NormalColor = { "NormalColor", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnchorPoint, NormalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalColor_MetaData), NewProp_NormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_CheckpointColor = { "CheckpointColor", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnchorPoint, CheckpointColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointColor_MetaData), NewProp_CheckpointColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAnchorPoint_Statics::NewProp_LockedColor = { "LockedColor", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnchorPoint, LockedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedColor_MetaData), NewProp_LockedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnchorPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_LightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_bIsCheckpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_NormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_CheckpointColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorPoint_Statics::NewProp_LockedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnchorPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnchorPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnchorPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnchorPoint_Statics::ClassParams = {
	&AAnchorPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnchorPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnchorPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnchorPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnchorPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnchorPoint()
{
	if (!Z_Registration_Info_UClass_AAnchorPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnchorPoint.OuterSingleton, Z_Construct_UClass_AAnchorPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnchorPoint.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AAnchorPoint>()
{
	return AAnchorPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnchorPoint);
AAnchorPoint::~AAnchorPoint() {}
// End Class AAnchorPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_AnchorPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnchorPoint, AAnchorPoint::StaticClass, TEXT("AAnchorPoint"), &Z_Registration_Info_UClass_AAnchorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnchorPoint), 2792991008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_AnchorPoint_h_1335676165(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_AnchorPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Traversal_AnchorPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
