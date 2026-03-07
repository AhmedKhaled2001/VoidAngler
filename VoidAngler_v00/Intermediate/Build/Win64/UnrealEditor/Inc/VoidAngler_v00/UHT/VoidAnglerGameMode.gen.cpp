// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/GameBackend/VoidAnglerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoidAnglerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AVoidAnglerGameMode();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AVoidAnglerGameMode_NoRegister();
// End Cross Module References

// Begin Class AVoidAnglerGameMode
void AVoidAnglerGameMode::StaticRegisterNativesAVoidAnglerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoidAnglerGameMode);
UClass* Z_Construct_UClass_AVoidAnglerGameMode_NoRegister()
{
	return AVoidAnglerGameMode::StaticClass();
}
struct Z_Construct_UClass_AVoidAnglerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameBackend/VoidAnglerGameMode.h" },
		{ "ModuleRelativePath", "GameBackend/VoidAnglerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoidAnglerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoidAnglerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoidAnglerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoidAnglerGameMode_Statics::ClassParams = {
	&AVoidAnglerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoidAnglerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoidAnglerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoidAnglerGameMode()
{
	if (!Z_Registration_Info_UClass_AVoidAnglerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoidAnglerGameMode.OuterSingleton, Z_Construct_UClass_AVoidAnglerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoidAnglerGameMode.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AVoidAnglerGameMode>()
{
	return AVoidAnglerGameMode::StaticClass();
}
AVoidAnglerGameMode::AVoidAnglerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoidAnglerGameMode);
AVoidAnglerGameMode::~AVoidAnglerGameMode() {}
// End Class AVoidAnglerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoidAnglerGameMode, AVoidAnglerGameMode::StaticClass, TEXT("AVoidAnglerGameMode"), &Z_Registration_Info_UClass_AVoidAnglerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoidAnglerGameMode), 146713522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_1290727380(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_VoidAnglerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
