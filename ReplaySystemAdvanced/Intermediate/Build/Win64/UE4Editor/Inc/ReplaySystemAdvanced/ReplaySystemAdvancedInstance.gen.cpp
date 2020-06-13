// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplaySystemAdvanced/Public/ReplaySystemAdvancedInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaySystemAdvancedInstance() {}
// Cross Module References
	REPLAYSYSTEMADVANCED_API UScriptStruct* Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo();
	UPackage* Z_Construct_UPackage__Script_ReplaySystemAdvanced();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	REPLAYSYSTEMADVANCED_API UClass* Z_Construct_UClass_UReplaySystemAdvancedInstance_NoRegister();
	REPLAYSYSTEMADVANCED_API UClass* Z_Construct_UClass_UReplaySystemAdvancedInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording();
// End Cross Module References
class UScriptStruct* FS_ReplaySystemReplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REPLAYSYSTEMADVANCED_API uint32 Get_Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo, Z_Construct_UPackage__Script_ReplaySystemAdvanced(), TEXT("S_ReplaySystemReplayInfo"), sizeof(FS_ReplaySystemReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Hash());
	}
	return Singleton;
}
template<> REPLAYSYSTEMADVANCED_API UScriptStruct* StaticStruct<FS_ReplaySystemReplayInfo>()
{
	return FS_ReplaySystemReplayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ReplaySystemReplayInfo(FS_ReplaySystemReplayInfo::StaticStruct, TEXT("/Script/ReplaySystemAdvanced"), TEXT("S_ReplaySystemReplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ReplaySystemAdvanced_StaticRegisterNativesFS_ReplaySystemReplayInfo
{
	FScriptStruct_ReplaySystemAdvanced_StaticRegisterNativesFS_ReplaySystemReplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ReplaySystemReplayInfo")),new UScriptStruct::TCppStructOps<FS_ReplaySystemReplayInfo>);
	}
} ScriptStruct_ReplaySystemAdvanced_StaticRegisterNativesFS_ReplaySystemReplayInfo;
	struct Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamemode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Gamemode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ReplaySystemReplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FS_ReplaySystemReplayInfo*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ReplaySystemReplayInfo), &Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_LengthInMS_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_LengthInMS = { "LengthInMS", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, LengthInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_LengthInMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_LengthInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Gamemode_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Gamemode = { "Gamemode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, Gamemode), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Gamemode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Gamemode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_ReplayName_MetaData[] = {
		{ "Category", "S_ReplaySystemReplayInfo" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ReplaySystemReplayInfo, ReplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_LengthInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_Gamemode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::NewProp_ReplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystemAdvanced,
		nullptr,
		&NewStructOps,
		"S_ReplaySystemReplayInfo",
		sizeof(FS_ReplaySystemReplayInfo),
		alignof(FS_ReplaySystemReplayInfo),
		Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ReplaySystemAdvanced();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ReplaySystemReplayInfo"), sizeof(FS_ReplaySystemReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo_Hash() { return 3938064512U; }
	static FName NAME_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete = FName(TEXT("BP_OnFindReplaysComplete"));
	void UReplaySystemAdvancedInstance::BP_OnFindReplaysComplete(TArray<FS_ReplaySystemReplayInfo> const& AllReplays)
	{
		ReplaySystemAdvancedInstance_eventBP_OnFindReplaysComplete_Parms Parms;
		Parms.AllReplays=AllReplays;
		ProcessEvent(FindFunctionChecked(NAME_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete),&Parms);
	}
	void UReplaySystemAdvancedInstance::StaticRegisterNativesUReplaySystemAdvancedInstance()
	{
		UClass* Class = UReplaySystemAdvancedInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteReplay", &UReplaySystemAdvancedInstance::execDeleteReplay },
			{ "FindReplays", &UReplaySystemAdvancedInstance::execFindReplays },
			{ "RenameReplay", &UReplaySystemAdvancedInstance::execRenameReplay },
			{ "StartRecording", &UReplaySystemAdvancedInstance::execStartRecording },
			{ "StartReplay", &UReplaySystemAdvancedInstance::execStartReplay },
			{ "StopRecording", &UReplaySystemAdvancedInstance::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllReplays_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllReplays;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllReplays_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays = { "AllReplays", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventBP_OnFindReplaysComplete_Parms, AllReplays), METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_Inner = { "AllReplays", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_ReplaySystemReplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::NewProp_AllReplays_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "BP_OnFindReplaysComplete", nullptr, nullptr, sizeof(ReplaySystemAdvancedInstance_eventBP_OnFindReplaysComplete_Parms), Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics
	{
		struct ReplaySystemAdvancedInstance_eventDeleteReplay_Parms
		{
			FString ReplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventDeleteReplay_Parms, ReplayName), METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "DeleteReplay", nullptr, nullptr, sizeof(ReplaySystemAdvancedInstance_eventDeleteReplay_Parms), Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/*Start looking for/finding replays on the hard drive */" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
		{ "ToolTip", "Start looking for/finding replays on the hard drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "FindReplays", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics
	{
		struct ReplaySystemAdvancedInstance_eventRenameReplay_Parms
		{
			FString ReplayName;
			FString NewFriendlyReplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFriendlyReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewFriendlyReplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName = { "NewFriendlyReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventRenameReplay_Parms, NewFriendlyReplayName), METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventRenameReplay_Parms, ReplayName), METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_NewFriendlyReplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/*Apply a new custom name to the replay (for UI only) */" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
		{ "ToolTip", "Apply a new custom name to the replay (for UI only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "RenameReplay", nullptr, nullptr, sizeof(ReplaySystemAdvancedInstance_eventRenameReplay_Parms), Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics
	{
		struct ReplaySystemAdvancedInstance_eventStartRecording_Parms
		{
			FString ReplayName;
			FString FriendlyName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventStartRecording_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventStartRecording_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "StartRecording", nullptr, nullptr, sizeof(ReplaySystemAdvancedInstance_eventStartRecording_Parms), Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics
	{
		struct ReplaySystemAdvancedInstance_eventStartReplay_Parms
		{
			FString ReplayName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedInstance_eventStartReplay_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "StartReplay", nullptr, nullptr, sizeof(ReplaySystemAdvancedInstance_eventStartReplay_Parms), Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySystemAdvancedInstance, nullptr, "StopRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplaySystemAdvancedInstance_NoRegister()
	{
		return UReplaySystemAdvancedInstance::StaticClass();
	}
	struct Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyRecordingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyRecordingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecordingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystemAdvanced,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_BP_OnFindReplaysComplete, "BP_OnFindReplaysComplete" }, // 331234508
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_DeleteReplay, "DeleteReplay" }, // 1614743077
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_FindReplays, "FindReplays" }, // 2606940941
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_RenameReplay, "RenameReplay" }, // 3815369167
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartRecording, "StartRecording" }, // 823792767
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_StartReplay, "StartReplay" }, // 348907794
		{ &Z_Construct_UFunction_UReplaySystemAdvancedInstance_StopRecording, "StopRecording" }, // 269460786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReplaySystemAdvancedInstance.h" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_FriendlyRecordingName_MetaData[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_FriendlyRecordingName = { "FriendlyRecordingName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplaySystemAdvancedInstance, FriendlyRecordingName), METADATA_PARAMS(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_FriendlyRecordingName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_FriendlyRecordingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_RecordingName_MetaData[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplaySystemAdvancedInstance, RecordingName), METADATA_PARAMS(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_RecordingName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_RecordingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_FriendlyRecordingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::NewProp_RecordingName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaySystemAdvancedInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::ClassParams = {
		&UReplaySystemAdvancedInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaySystemAdvancedInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplaySystemAdvancedInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplaySystemAdvancedInstance, 1317943222);
	template<> REPLAYSYSTEMADVANCED_API UClass* StaticClass<UReplaySystemAdvancedInstance>()
	{
		return UReplaySystemAdvancedInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplaySystemAdvancedInstance(Z_Construct_UClass_UReplaySystemAdvancedInstance, &UReplaySystemAdvancedInstance::StaticClass, TEXT("/Script/ReplaySystemAdvanced"), TEXT("UReplaySystemAdvancedInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaySystemAdvancedInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
