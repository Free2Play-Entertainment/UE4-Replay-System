// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ReplaySystemReplayInfo;
#ifdef REPLAYSYSTEMADVANCED_ReplaySystemAdvancedInstance_generated_h
#error "ReplaySystemAdvancedInstance.generated.h already included, missing '#pragma once' in ReplaySystemAdvancedInstance.h"
#endif
#define REPLAYSYSTEMADVANCED_ReplaySystemAdvancedInstance_generated_h

#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics; \
	REPLAYSYSTEMADVANCED_API static class UScriptStruct* StaticStruct();


template<> REPLAYSYSTEMADVANCED_API UScriptStruct* StaticStruct<struct FS_ReplaySystemReplayInfo>();

#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecording(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecording(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_EVENT_PARMS \
	struct ReplaySystemAdvancedInstance_eventBP_OnFindReplaysComplete_Parms \
	{ \
		TArray<FS_ReplaySystemReplayInfo> AllReplays; \
	};


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_CALLBACK_WRAPPERS
#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplaySystemAdvancedInstance(); \
	friend struct Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics; \
public: \
	DECLARE_CLASS(UReplaySystemAdvancedInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplaySystemAdvanced"), NO_API) \
	DECLARE_SERIALIZER(UReplaySystemAdvancedInstance)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUReplaySystemAdvancedInstance(); \
	friend struct Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics; \
public: \
	DECLARE_CLASS(UReplaySystemAdvancedInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplaySystemAdvanced"), NO_API) \
	DECLARE_SERIALIZER(UReplaySystemAdvancedInstance)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaySystemAdvancedInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplaySystemAdvancedInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaySystemAdvancedInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySystemAdvancedInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplaySystemAdvancedInstance(UReplaySystemAdvancedInstance&&); \
	NO_API UReplaySystemAdvancedInstance(const UReplaySystemAdvancedInstance&); \
public:


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplaySystemAdvancedInstance(UReplaySystemAdvancedInstance&&); \
	NO_API UReplaySystemAdvancedInstance(const UReplaySystemAdvancedInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaySystemAdvancedInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySystemAdvancedInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplaySystemAdvancedInstance)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_PRIVATE_PROPERTY_OFFSET
#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_61_PROLOG \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_EVENT_PARMS


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_PRIVATE_PROPERTY_OFFSET \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_RPC_WRAPPERS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_CALLBACK_WRAPPERS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_INCLASS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_PRIVATE_PROPERTY_OFFSET \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_CALLBACK_WRAPPERS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_INCLASS_NO_PURE_DECLS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLAYSYSTEMADVANCED_API UClass* StaticClass<class UReplaySystemAdvancedInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
