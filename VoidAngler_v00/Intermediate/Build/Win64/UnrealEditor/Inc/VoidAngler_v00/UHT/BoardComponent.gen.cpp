// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Character/Components/BoardComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UBoardComponent();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UBoardComponent_NoRegister();
// End Cross Module References

// Begin Class UBoardComponent
void UBoardComponent::StaticRegisterNativesUBoardComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardComponent);
UClass* Z_Construct_UClass_UBoardComponent_NoRegister()
{
	return UBoardComponent::StaticClass();
}
struct Z_Construct_UClass_UBoardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Character/Components/BoardComponent.h" },
		{ "ModuleRelativePath", "Character/Components/BoardComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardComponent_Statics::ClassParams = {
	&UBoardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoardComponent()
{
	if (!Z_Registration_Info_UClass_UBoardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardComponent.OuterSingleton, Z_Construct_UClass_UBoardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoardComponent.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UBoardComponent>()
{
	return UBoardComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardComponent);
UBoardComponent::~UBoardComponent() {}
// End Class UBoardComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_BoardComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoardComponent, UBoardComponent::StaticClass, TEXT("UBoardComponent"), &Z_Registration_Info_UClass_UBoardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardComponent), 118296376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_BoardComponent_h_4087936791(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_BoardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_BoardComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
