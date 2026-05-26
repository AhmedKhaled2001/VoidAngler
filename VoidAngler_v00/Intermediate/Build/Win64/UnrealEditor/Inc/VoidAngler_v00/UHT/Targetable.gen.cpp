// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/GameBackend/Targetable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UTargetable();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
VOIDANGLER_V00_API UEnum* Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass();
// End Cross Module References

// Begin Enum ETargetWeightClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetWeightClass;
static UEnum* ETargetWeightClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetWeightClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetWeightClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass, (UObject*)Z_Construct_UPackage__Script_VoidAngler_v00(), TEXT("ETargetWeightClass"));
	}
	return Z_Registration_Info_UEnum_ETargetWeightClass.OuterSingleton;
}
template<> VOIDANGLER_V00_API UEnum* StaticEnum<ETargetWeightClass>()
{
	return ETargetWeightClass_StaticEnum();
}
struct Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lightweight.DisplayName", "Lightweight (Pulls Enemy)" },
		{ "Lightweight.Name", "ETargetWeightClass::Lightweight" },
		{ "ModuleRelativePath", "GameBackend/Targetable.h" },
		{ "StaticAnchor.DisplayName", "Static Anchor (Pulls Player)" },
		{ "StaticAnchor.Name", "ETargetWeightClass::StaticAnchor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetWeightClass::StaticAnchor", (int64)ETargetWeightClass::StaticAnchor },
		{ "ETargetWeightClass::Lightweight", (int64)ETargetWeightClass::Lightweight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoidAngler_v00,
	nullptr,
	"ETargetWeightClass",
	"ETargetWeightClass",
	Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass()
{
	if (!Z_Registration_Info_UEnum_ETargetWeightClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetWeightClass.InnerSingleton, Z_Construct_UEnum_VoidAngler_v00_ETargetWeightClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetWeightClass.InnerSingleton;
}
// End Enum ETargetWeightClass

// Begin Interface UTargetable
void UTargetable::StaticRegisterNativesUTargetable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetable);
UClass* Z_Construct_UClass_UTargetable_NoRegister()
{
	return UTargetable::StaticClass();
}
struct Z_Construct_UClass_UTargetable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameBackend/Targetable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetable_Statics::ClassParams = {
	&UTargetable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetable()
{
	if (!Z_Registration_Info_UClass_UTargetable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetable.OuterSingleton, Z_Construct_UClass_UTargetable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetable.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UTargetable>()
{
	return UTargetable::StaticClass();
}
UTargetable::UTargetable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetable);
UTargetable::~UTargetable() {}
// End Interface UTargetable

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetWeightClass_StaticEnum, TEXT("ETargetWeightClass"), &Z_Registration_Info_UEnum_ETargetWeightClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1909657995U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetable, UTargetable::StaticClass, TEXT("UTargetable"), &Z_Registration_Info_UClass_UTargetable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetable), 1541049264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_782855824(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_GameBackend_Targetable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
