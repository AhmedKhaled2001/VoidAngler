// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Enemy/BarracudaEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarracudaEnemy() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ABarracudaEnemy();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_ABarracudaEnemy_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_AEnemyParent();
// End Cross Module References

// Begin Class ABarracudaEnemy
void ABarracudaEnemy::StaticRegisterNativesABarracudaEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABarracudaEnemy);
UClass* Z_Construct_UClass_ABarracudaEnemy_NoRegister()
{
	return ABarracudaEnemy::StaticClass();
}
struct Z_Construct_UClass_ABarracudaEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemy/BarracudaEnemy.h" },
		{ "ModuleRelativePath", "Enemy/BarracudaEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarracudaEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABarracudaEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyParent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABarracudaEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarracudaEnemy_Statics::ClassParams = {
	&ABarracudaEnemy::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABarracudaEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABarracudaEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABarracudaEnemy()
{
	if (!Z_Registration_Info_UClass_ABarracudaEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarracudaEnemy.OuterSingleton, Z_Construct_UClass_ABarracudaEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABarracudaEnemy.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<ABarracudaEnemy>()
{
	return ABarracudaEnemy::StaticClass();
}
ABarracudaEnemy::ABarracudaEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABarracudaEnemy);
ABarracudaEnemy::~ABarracudaEnemy() {}
// End Class ABarracudaEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_BarracudaEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABarracudaEnemy, ABarracudaEnemy::StaticClass, TEXT("ABarracudaEnemy"), &Z_Registration_Info_UClass_ABarracudaEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarracudaEnemy), 3867562132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_BarracudaEnemy_h_1900706985(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_BarracudaEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Enemy_BarracudaEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
