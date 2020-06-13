// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAYSYSTEMADVANCED_ReplaySystemAdvancedPC_generated_h
#error "ReplaySystemAdvancedPC.generated.h already included, missing '#pragma once' in ReplaySystemAdvancedPC.h"
#endif
#define REPLAYSYSTEMADVANCED_ReplaySystemAdvancedPC_generated_h

#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplaySystemAdvancedPC(); \
	friend struct Z_Construct_UClass_AReplaySystemAdvancedPC_Statics; \
public: \
	DECLARE_CLASS(AReplaySystemAdvancedPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplaySystemAdvanced"), NO_API) \
	DECLARE_SERIALIZER(AReplaySystemAdvancedPC)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAReplaySystemAdvancedPC(); \
	friend struct Z_Construct_UClass_AReplaySystemAdvancedPC_Statics; \
public: \
	DECLARE_CLASS(AReplaySystemAdvancedPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplaySystemAdvanced"), NO_API) \
	DECLARE_SERIALIZER(AReplaySystemAdvancedPC)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReplaySystemAdvancedPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplaySystemAdvancedPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplaySystemAdvancedPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplaySystemAdvancedPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplaySystemAdvancedPC(AReplaySystemAdvancedPC&&); \
	NO_API AReplaySystemAdvancedPC(const AReplaySystemAdvancedPC&); \
public:


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplaySystemAdvancedPC(AReplaySystemAdvancedPC&&); \
	NO_API AReplaySystemAdvancedPC(const AReplaySystemAdvancedPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplaySystemAdvancedPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplaySystemAdvancedPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplaySystemAdvancedPC)


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_PRIVATE_PROPERTY_OFFSET
#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_14_PROLOG
#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_PRIVATE_PROPERTY_OFFSET \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_RPC_WRAPPERS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_INCLASS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_PRIVATE_PROPERTY_OFFSET \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_INCLASS_NO_PURE_DECLS \
	Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLAYSYSTEMADVANCED_API UClass* StaticClass<class AReplaySystemAdvancedPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blast_Royale_BR_Plugins_ReplaySystemAdvanced_Source_ReplaySystemAdvanced_Public_ReplaySystemAdvancedPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
