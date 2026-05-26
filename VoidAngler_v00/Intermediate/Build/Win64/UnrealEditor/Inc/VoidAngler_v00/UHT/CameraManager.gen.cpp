// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoidAngler_v00/Character/Components/CameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoidAngler_v00();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UCameraManager();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UCameraManager_NoRegister();
VOIDANGLER_V00_API UClass* Z_Construct_UClass_UPhysicsController_NoRegister();
// End Cross Module References

// Begin Class UCameraManager
void UCameraManager::StaticRegisterNativesUCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraManager);
UClass* Z_Construct_UClass_UCameraManager_NoRegister()
{
	return UCameraManager::StaticClass();
}
struct Z_Construct_UClass_UCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Components/CameraManager.h" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugLog_MetaData[] = {
		{ "Category", "Camera|Debug" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[] = {
		{ "Category", "Camera|FOV" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFOVStretch_MetaData[] = {
		{ "Category", "Camera|FOV" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseArmLength_MetaData[] = {
		{ "Category", "Camera|Distance" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmBackshift_MetaData[] = {
		{ "Category", "Camera|Distance" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpSpeed_MetaData[] = {
		{ "Category", "Camera|Feel" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTiltIntensity_MetaData[] = {
		{ "Category", "Camera|Lean" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFOVMod_MetaData[] = {
		{ "Category", "Camera|Feedback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0.5 = camera tilts half as much as the board\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0.5 = camera tilts half as much as the board" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintArmMod_MetaData[] = {
		{ "Category", "Camera|Feedback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The \"Warp\" amount when sprinting\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The \"Warp\" amount when sprinting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintInterpSpeed_MetaData[] = {
		{ "Category", "Camera|Feedback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera pulls back further to show the board \"leaving\" the camera\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera pulls back further to show the board \"leaving\" the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiltInterpSpeed_MetaData[] = {
		{ "Category", "Camera|Lean" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeThreshold_MetaData[] = {
		{ "Category", "Camera|Feedback" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeIntensity_MetaData[] = {
		{ "Category", "Camera|Feedback" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkidImpactForce_MetaData[] = {
		{ "Category", "Camera|Feedback" },
		{ "ModuleRelativePath", "Character/Components/CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsComp;
	static void NewProp_bShowDebugLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugLog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFOVStretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmBackshift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTiltIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFOVMod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintArmMod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidImpactForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_PhysicsComp = { "PhysicsComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, PhysicsComp), Z_Construct_UClass_UPhysicsController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsComp_MetaData), NewProp_PhysicsComp_MetaData) };
void Z_Construct_UClass_UCameraManager_Statics::NewProp_bShowDebugLog_SetBit(void* Obj)
{
	((UCameraManager*)Obj)->bShowDebugLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_bShowDebugLog = { "bShowDebugLog", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraManager), &Z_Construct_UClass_UCameraManager_Statics::NewProp_bShowDebugLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugLog_MetaData), NewProp_bShowDebugLog_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, BaseFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFOV_MetaData), NewProp_BaseFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_MaxFOVStretch = { "MaxFOVStretch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, MaxFOVStretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFOVStretch_MetaData), NewProp_MaxFOVStretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_BaseArmLength = { "BaseArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, BaseArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseArmLength_MetaData), NewProp_BaseArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_MaxArmBackshift = { "MaxArmBackshift", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, MaxArmBackshift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmBackshift_MetaData), NewProp_MaxArmBackshift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_CameraInterpSpeed = { "CameraInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, CameraInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpSpeed_MetaData), NewProp_CameraInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_CameraTiltIntensity = { "CameraTiltIntensity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, CameraTiltIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTiltIntensity_MetaData), NewProp_CameraTiltIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintFOVMod = { "SprintFOVMod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, SprintFOVMod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFOVMod_MetaData), NewProp_SprintFOVMod_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintArmMod = { "SprintArmMod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, SprintArmMod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintArmMod_MetaData), NewProp_SprintArmMod_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintInterpSpeed = { "SprintInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, SprintInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintInterpSpeed_MetaData), NewProp_SprintInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_TiltInterpSpeed = { "TiltInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, TiltInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiltInterpSpeed_MetaData), NewProp_TiltInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_ShakeThreshold = { "ShakeThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, ShakeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeThreshold_MetaData), NewProp_ShakeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_ShakeIntensity = { "ShakeIntensity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, ShakeIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeIntensity_MetaData), NewProp_ShakeIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraManager_Statics::NewProp_SkidImpactForce = { "SkidImpactForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManager, SkidImpactForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkidImpactForce_MetaData), NewProp_SkidImpactForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_PhysicsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_bShowDebugLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_BaseFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_MaxFOVStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_BaseArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_MaxArmBackshift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_CameraInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_CameraTiltIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintFOVMod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintArmMod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_SprintInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_TiltInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_ShakeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_ShakeIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManager_Statics::NewProp_SkidImpactForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoidAngler_v00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraManager_Statics::ClassParams = {
	&UCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraManager()
{
	if (!Z_Registration_Info_UClass_UCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraManager.OuterSingleton, Z_Construct_UClass_UCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraManager.OuterSingleton;
}
template<> VOIDANGLER_V00_API UClass* StaticClass<UCameraManager>()
{
	return UCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraManager);
UCameraManager::~UCameraManager() {}
// End Class UCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_CameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraManager, UCameraManager::StaticClass, TEXT("UCameraManager"), &Z_Registration_Info_UClass_UCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraManager), 578893044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_CameraManager_h_1403483428(TEXT("/Script/VoidAngler_v00"),
	Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_CameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoidAngler_RR_VoidAngler_VoidAngler_v00_Source_VoidAngler_v00_Character_Components_CameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
