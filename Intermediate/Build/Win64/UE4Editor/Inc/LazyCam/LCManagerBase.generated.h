// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALCSetupSpaceBase;
#ifdef LAZYCAM_LCManagerBase_generated_h
#error "LCManagerBase.generated.h already included, missing '#pragma once' in LCManagerBase.h"
#endif
#define LAZYCAM_LCManagerBase_generated_h

#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_RPC_WRAPPERS
#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_EVENT_PARMS \
	struct LCManagerBase_eventleftSetupSpace_Parms \
	{ \
		ALCSetupSpaceBase* leftSetupSpace; \
	}; \
	struct LCManagerBase_eventsetNewSetup_Parms \
	{ \
		ALCSetupSpaceBase* newSetupSpace; \
	};


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_CALLBACK_WRAPPERS
#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALCManagerBase(); \
	friend LAZYCAM_API class UClass* Z_Construct_UClass_ALCManagerBase(); \
public: \
	DECLARE_CLASS(ALCManagerBase, APlayerCameraManager, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), 0, TEXT("/Script/LazyCam"), NO_API) \
	DECLARE_SERIALIZER(ALCManagerBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALCManagerBase(); \
	friend LAZYCAM_API class UClass* Z_Construct_UClass_ALCManagerBase(); \
public: \
	DECLARE_CLASS(ALCManagerBase, APlayerCameraManager, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), 0, TEXT("/Script/LazyCam"), NO_API) \
	DECLARE_SERIALIZER(ALCManagerBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALCManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALCManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALCManagerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALCManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALCManagerBase(ALCManagerBase&&); \
	NO_API ALCManagerBase(const ALCManagerBase&); \
public:


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALCManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALCManagerBase(ALCManagerBase&&); \
	NO_API ALCManagerBase(const ALCManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALCManagerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALCManagerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALCManagerBase)


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_9_PROLOG \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_EVENT_PARMS


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_RPC_WRAPPERS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_CALLBACK_WRAPPERS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_INCLASS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_CALLBACK_WRAPPERS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_INCLASS_NO_PURE_DECLS \
	LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LazyCamCreation_Plugins_LazyCam_Source_LazyCam_Public_LCManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
