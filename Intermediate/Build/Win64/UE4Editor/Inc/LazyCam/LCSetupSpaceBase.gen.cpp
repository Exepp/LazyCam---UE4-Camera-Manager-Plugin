// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LCSetupSpaceBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLCSetupSpaceBase() {}
// Cross Module References
	LAZYCAM_API UClass* Z_Construct_UClass_ALCSetupSpaceBase_NoRegister();
	LAZYCAM_API UClass* Z_Construct_UClass_ALCSetupSpaceBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LazyCam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LAZYCAM_API UClass* Z_Construct_UClass_ULCSceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALCSetupSpaceBase::StaticRegisterNativesALCSetupSpaceBase()
	{
	}
	UClass* Z_Construct_UClass_ALCSetupSpaceBase_NoRegister()
	{
		return ALCSetupSpaceBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ALCSetupSpaceBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LazyCam();
			OuterClass = ALCSetupSpaceBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_playerEnterLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("playerEnterLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(playerEnterLocation, ALCSetupSpaceBase), 0x0010000000000004, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_progressEndLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressEndLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(progressEndLocation, ALCSetupSpaceBase), 0x0010000000020005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_progressStartLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressStartLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(progressStartLocation, ALCSetupSpaceBase), 0x0010000000020005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_targetCameraRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("targetCameraRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(targetCameraRotation, ALCSetupSpaceBase), 0x0010000000020005, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_baseCameraRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(baseCameraRotation, ALCSetupSpaceBase), 0x0010000000020005, Z_Construct_UScriptStruct_FRotator());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(useYawOnly, ALCSetupSpaceBase);
				UProperty* NewProp_useYawOnly = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("useYawOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(useYawOnly, ALCSetupSpaceBase), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(useYawOnly, ALCSetupSpaceBase), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(useCleverSwappingPathAdjustment, ALCSetupSpaceBase);
				UProperty* NewProp_useCleverSwappingPathAdjustment = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("useCleverSwappingPathAdjustment"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(useCleverSwappingPathAdjustment, ALCSetupSpaceBase), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(useCleverSwappingPathAdjustment, ALCSetupSpaceBase), sizeof(bool), true);
				UProperty* NewProp_swapPathExecutionTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("swapPathExecutionTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(swapPathExecutionTime, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_settingsSwapTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("settingsSwapTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(settingsSwapTime, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_upwardMovementRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("upwardMovementRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(upwardMovementRatio, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_forwardMovementRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("forwardMovementRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(forwardMovementRatio, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_cameraSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(cameraSpeed, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_playerLookingSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("playerLookingSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(playerLookingSpeed, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_lookAtPlayerRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("lookAtPlayerRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(lookAtPlayerRatio, ALCSetupSpaceBase), 0x0010000000000005);
				UProperty* NewProp_maxSeeingAngleRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxSeeingAngleRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxSeeingAngleRadius, ALCSetupSpaceBase), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(makeEditorOnly, ALCSetupSpaceBase);
				UProperty* NewProp_makeEditorOnly = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("makeEditorOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(makeEditorOnly, ALCSetupSpaceBase), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(makeEditorOnly, ALCSetupSpaceBase), sizeof(bool), true);
				UProperty* NewProp_setupBase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("setupBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(setupBase, ALCSetupSpaceBase), 0x0010000000000005, Z_Construct_UClass_ALCSetupSpaceBase_NoRegister());
				UProperty* NewProp_progressEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(progressEnd, ALCSetupSpaceBase), 0x0010000000080008, Z_Construct_UClass_UBillboardComponent_NoRegister());
				UProperty* NewProp_progressStart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressStart"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(progressStart, ALCSetupSpaceBase), 0x0010000000080008, Z_Construct_UClass_UBillboardComponent_NoRegister());
				UProperty* NewProp_targetCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("targetCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(targetCamera, ALCSetupSpaceBase), 0x0010000000080008, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_baseCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseCamera, ALCSetupSpaceBase), 0x0010000000080008, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_progressEndSetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressEndSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(progressEndSetup, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_ULCSceneComponent_NoRegister());
				UProperty* NewProp_progressStartSetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("progressStartSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(progressStartSetup, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_ULCSceneComponent_NoRegister());
				UProperty* NewProp_targetCameraSetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("targetCameraSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(targetCameraSetup, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_ULCSceneComponent_NoRegister());
				UProperty* NewProp_baseCameraSetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseCameraSetup, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_ULCSceneComponent_NoRegister());
				UProperty* NewProp_swapPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("swapPath"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(swapPath, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_USplineComponent_NoRegister());
				UProperty* NewProp_cameraPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraPath"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(cameraPath, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_USplineComponent_NoRegister());
				UProperty* NewProp_collisionBox = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("collisionBox"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(collisionBox, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(root, ALCSetupSpaceBase), 0x00100000000b000d, Z_Construct_UClass_UBillboardComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ALCSetupSpaceBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LCSetupSpaceBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_playerEnterLocation, TEXT("Category"), TEXT("Runtime"));
				MetaData->SetValue(NewProp_playerEnterLocation, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_playerEnterLocation, TEXT("ToolTip"), TEXT("Runtime:"));
				MetaData->SetValue(NewProp_progressEndLocation, TEXT("Category"), TEXT("ComponentsData"));
				MetaData->SetValue(NewProp_progressEndLocation, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_progressStartLocation, TEXT("Category"), TEXT("ComponentsData"));
				MetaData->SetValue(NewProp_progressStartLocation, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_targetCameraRotation, TEXT("Category"), TEXT("ComponentsData"));
				MetaData->SetValue(NewProp_targetCameraRotation, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_baseCameraRotation, TEXT("Category"), TEXT("ComponentsData"));
				MetaData->SetValue(NewProp_baseCameraRotation, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_baseCameraRotation, TEXT("ToolTip"), TEXT("Deleted components data:"));
				MetaData->SetValue(NewProp_useYawOnly, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_useYawOnly, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_useCleverSwappingPathAdjustment, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_useCleverSwappingPathAdjustment, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_useCleverSwappingPathAdjustment, TEXT("ToolTip"), TEXT("Adjusts SwappingPath, so that when player run away from camera, it stops following SwappingPath (may couse camera go through walls if your SwappingPath lies near them)"));
				MetaData->SetValue(NewProp_swapPathExecutionTime, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_swapPathExecutionTime, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_swapPathExecutionTime, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_settingsSwapTime, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_settingsSwapTime, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_settingsSwapTime, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_settingsSwapTime, TEXT("ToolTip"), TEXT("time that camera will need to change its current settings to new ones. When set to 0, camera will change its location instantly"));
				MetaData->SetValue(NewProp_upwardMovementRatio, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_upwardMovementRatio, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_forwardMovementRatio, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_forwardMovementRatio, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_forwardMovementRatio, TEXT("ToolTip"), TEXT("how much should camera follow player's movement towards current camera facing direction (not player looking direction)"));
				MetaData->SetValue(NewProp_cameraSpeed, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_cameraSpeed, TEXT("ClampMin"), TEXT("0.100000"));
				MetaData->SetValue(NewProp_cameraSpeed, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_playerLookingSpeed, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_playerLookingSpeed, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_playerLookingSpeed, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_lookAtPlayerRatio, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_lookAtPlayerRatio, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_lookAtPlayerRatio, TEXT("ToolTip"), TEXT("How much should camera look at player (-1 will make camera look at opposite direction to player)"));
				MetaData->SetValue(NewProp_maxSeeingAngleRadius, TEXT("Category"), TEXT("CameraSettings"));
				MetaData->SetValue(NewProp_maxSeeingAngleRadius, TEXT("ClampMax"), TEXT("180"));
				MetaData->SetValue(NewProp_maxSeeingAngleRadius, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_maxSeeingAngleRadius, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_maxSeeingAngleRadius, TEXT("ToolTip"), TEXT("camera and player maximum looking direction offset from the one set in editor"));
				MetaData->SetValue(NewProp_makeEditorOnly, TEXT("Category"), TEXT("SceneHandle"));
				MetaData->SetValue(NewProp_makeEditorOnly, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_setupBase, TEXT("Category"), TEXT("SceneHandle"));
				MetaData->SetValue(NewProp_setupBase, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_setupBase, TEXT("ToolTip"), TEXT("variables:"));
				MetaData->SetValue(NewProp_progressEnd, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_progressEnd, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_progressStart, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_progressStart, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_targetCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_targetCamera, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_baseCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_baseCamera, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_progressEndSetup, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_progressEndSetup, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_progressEndSetup, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_progressStartSetup, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_progressStartSetup, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_progressStartSetup, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_targetCameraSetup, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_targetCameraSetup, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_targetCameraSetup, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_baseCameraSetup, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_baseCameraSetup, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_baseCameraSetup, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_swapPath, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_swapPath, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_swapPath, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_cameraPath, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_cameraPath, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_cameraPath, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_collisionBox, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_collisionBox, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_collisionBox, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_root, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_root, TEXT("ModuleRelativePath"), TEXT("Public/LCSetupSpaceBase.h"));
				MetaData->SetValue(NewProp_root, TEXT("ToolTip"), TEXT("components:"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALCSetupSpaceBase, 25951452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALCSetupSpaceBase(Z_Construct_UClass_ALCSetupSpaceBase, &ALCSetupSpaceBase::StaticClass, TEXT("/Script/LazyCam"), TEXT("ALCSetupSpaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALCSetupSpaceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
