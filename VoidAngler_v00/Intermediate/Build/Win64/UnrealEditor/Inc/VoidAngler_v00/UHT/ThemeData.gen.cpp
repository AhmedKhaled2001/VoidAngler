// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/GameBackend/ThemeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UThemeData();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UThemeData_NoRegister();
// End Cross Module References

// Begin Class UThemeData
void UThemeData::StaticRegisterNativesUThemeData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThemeData);
UClass* Z_Construct_UClass_UThemeData_NoRegister()
{
	return UThemeData::StaticClass();
}
struct Z_Construct_UClass_UThemeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameBackend/ThemeData.h" },
		{ "ModuleRelativePath", "GameBackend/ThemeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorClasses_MetaData[] = {
		{ "Category", "Theme Assets|Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1. ANCHORS: The primary grapple points (e.g., pillars, obelisks).\n// These spawn in the inner \"Playable Lane\" so the player can reach them.\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/ThemeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1. ANCHORS: The primary grapple points (e.g., pillars, obelisks).\nThese spawn in the inner \"Playable Lane\" so the player can reach them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleClasses_MetaData[] = {
		{ "Category", "Theme Assets|Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2. OBSTACLES: Hazards the player must dodge (e.g., jagged coral, explosive mines).\n// These also spawn in the inner \"Playable Lane\" to disrupt the flow.\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/ThemeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2. OBSTACLES: Hazards the player must dodge (e.g., jagged coral, explosive mines).\nThese also spawn in the inner \"Playable Lane\" to disrupt the flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticClasses_MetaData[] = {
		{ "Category", "Theme Assets|Atmosphere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3. COSMETICS: Massive background scenery (e.g., sunken city walls, giant statues).\n// These spawn far out in the \"Cosmetic Lane\" to provide parallax and scale.\n" },
#endif
		{ "ModuleRelativePath", "GameBackend/ThemeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3. COSMETICS: Massive background scenery (e.g., sunken city walls, giant statues).\nThese spawn far out in the \"Cosmetic Lane\" to provide parallax and scale." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnchorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObstacleClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CosmeticClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CosmeticClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThemeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_AnchorClasses_Inner = { "AnchorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_AnchorClasses = { "AnchorClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThemeData, AnchorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorClasses_MetaData), NewProp_AnchorClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_ObstacleClasses_Inner = { "ObstacleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_ObstacleClasses = { "ObstacleClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThemeData, ObstacleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleClasses_MetaData), NewProp_ObstacleClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_CosmeticClasses_Inner = { "CosmeticClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThemeData_Statics::NewProp_CosmeticClasses = { "CosmeticClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThemeData, CosmeticClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosmeticClasses_MetaData), NewProp_CosmeticClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThemeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_AnchorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_AnchorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_ObstacleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_ObstacleClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_CosmeticClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThemeData_Statics::NewProp_CosmeticClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThemeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UThemeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThemeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThemeData_Statics::ClassParams = {
	&UThemeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UThemeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UThemeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThemeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UThemeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThemeData()
{
	if (!Z_Registration_Info_UClass_UThemeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThemeData.OuterSingleton, Z_Construct_UClass_UThemeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThemeData.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UThemeData>()
{
	return UThemeData::StaticClass();
}
UThemeData::UThemeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThemeData);
UThemeData::~UThemeData() {}
// End Class UThemeData

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_ThemeData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThemeData, UThemeData::StaticClass, TEXT("UThemeData"), &Z_Registration_Info_UClass_UThemeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThemeData), 2806955802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_ThemeData_h_2966174037(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_ThemeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_ThemeData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
