// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Character/VoidPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoidPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AVoidPlayerController();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AVoidPlayerController_NoRegister();
// End Cross Module References

// Begin Class AVoidPlayerController
void AVoidPlayerController::StaticRegisterNativesAVoidPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoidPlayerController);
UClass* Z_Construct_UClass_AVoidPlayerController_NoRegister()
{
	return AVoidPlayerController::StaticClass();
}
struct Z_Construct_UClass_AVoidPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/VoidPlayerController.h" },
		{ "ModuleRelativePath", "Character/VoidPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoidPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoidPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoidPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoidPlayerController_Statics::ClassParams = {
	&AVoidPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoidPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoidPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoidPlayerController()
{
	if (!Z_Registration_Info_UClass_AVoidPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoidPlayerController.OuterSingleton, Z_Construct_UClass_AVoidPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoidPlayerController.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<AVoidPlayerController>()
{
	return AVoidPlayerController::StaticClass();
}
AVoidPlayerController::AVoidPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoidPlayerController);
AVoidPlayerController::~AVoidPlayerController() {}
// End Class AVoidPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_VoidPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoidPlayerController, AVoidPlayerController::StaticClass, TEXT("AVoidPlayerController"), &Z_Registration_Info_UClass_AVoidPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoidPlayerController), 2791845887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_VoidPlayerController_h_1630277116(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_VoidPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_VoidPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
