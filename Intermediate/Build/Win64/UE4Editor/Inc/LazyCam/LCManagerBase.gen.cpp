// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LCManagerBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLCManagerBase() {}
// Cross Module References
	LAZYCAM_API UFunction* Z_Construct_UFunction_ALCManagerBase_leftSetupSpace();
	LAZYCAM_API UClass* Z_Construct_UClass_ALCManagerBase();
	LAZYCAM_API UClass* Z_Construct_UClass_ALCSetupSpaceBase_NoRegister();
	LAZYCAM_API UFunction* Z_Construct_UFunction_ALCManagerBase_setNewSetup();
	LAZYCAM_API UClass* Z_Construct_UClass_ALCManagerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_LazyCam();
// End Cross Module References
	static FName NAME_ALCManagerBase_leftSetupSpace = FName(TEXT("leftSetupSpace"));
	void ALCManagerBase::leftSetupSpace(ALCSetupSpaceBase* leftSetupSpace)
	{
		LCManagerBase_eventleftSetupSpace_Parms Parms;
		Parms.leftSetupSpace=leftSetupSpace;
		ProcessEvent(FindFunctionChecked(NAME_ALCManagerBase_leftSetupSpace),&Parms);
	}
	static FName NAME_ALCManagerBase_setNewSetup = FName(TEXT("setNewSetup"));
	void ALCManagerBase::setNewSetup(ALCSetupSpaceBase* newSetupSpace)
	{
		LCManagerBase_eventsetNewSetup_Parms Parms;
		Parms.newSetupSpace=newSetupSpace;
		ProcessEvent(FindFunctionChecked(NAME_ALCManagerBase_setNewSetup),&Parms);
	}
	void ALCManagerBase::StaticRegisterNativesALCManagerBase()
	{
	}
	UFunction* Z_Construct_UFunction_ALCManagerBase_leftSetupSpace()
	{
		UObject* Outer = Z_Construct_UClass_ALCManagerBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("leftSetupSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(LCManagerBase_eventleftSetupSpace_Parms));
			UProperty* NewProp_leftSetupSpace = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leftSetupSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(leftSetupSpace, LCManagerBase_eventleftSetupSpace_Parms), 0x0010000000000080, Z_Construct_UClass_ALCSetupSpaceBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LCManagerBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALCManagerBase_setNewSetup()
	{
		UObject* Outer = Z_Construct_UClass_ALCManagerBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setNewSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(LCManagerBase_eventsetNewSetup_Parms));
			UProperty* NewProp_newSetupSpace = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newSetupSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(newSetupSpace, LCManagerBase_eventsetNewSetup_Parms), 0x0010000000000080, Z_Construct_UClass_ALCSetupSpaceBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LCManagerBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALCManagerBase_NoRegister()
	{
		return ALCManagerBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ALCManagerBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerCameraManager();
			Z_Construct_UPackage__Script_LazyCam();
			OuterClass = ALCManagerBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900289u;

				OuterClass->LinkChild(Z_Construct_UFunction_ALCManagerBase_leftSetupSpace());
				OuterClass->LinkChild(Z_Construct_UFunction_ALCManagerBase_setNewSetup());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALCManagerBase_leftSetupSpace(), "leftSetupSpace"); // 1191743780
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALCManagerBase_setNewSetup(), "setNewSetup"); // 3352400893
				static TCppClassTypeInfo<TCppClassTypeTraits<ALCManagerBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LCManagerBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LCManagerBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALCManagerBase, 1946751336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALCManagerBase(Z_Construct_UClass_ALCManagerBase, &ALCManagerBase::StaticClass, TEXT("/Script/LazyCam"), TEXT("ALCManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALCManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
