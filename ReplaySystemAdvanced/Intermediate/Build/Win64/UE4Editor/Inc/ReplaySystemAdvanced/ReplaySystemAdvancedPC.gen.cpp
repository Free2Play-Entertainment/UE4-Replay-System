// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplaySystemAdvanced/Public/ReplaySystemAdvancedPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaySystemAdvancedPC() {}
// Cross Module References
	REPLAYSYSTEMADVANCED_API UClass* Z_Construct_UClass_AReplaySystemAdvancedPC_NoRegister();
	REPLAYSYSTEMADVANCED_API UClass* Z_Construct_UClass_AReplaySystemAdvancedPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ReplaySystemAdvanced();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate();
	REPLAYSYSTEMADVANCED_API UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds();
// End Cross Module References
	void AReplaySystemAdvancedPC::StaticRegisterNativesAReplaySystemAdvancedPC()
	{
		UClass* Class = AReplaySystemAdvancedPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentReplayCurrentTimeInSeconds", &AReplaySystemAdvancedPC::execGetCurrentReplayCurrentTimeInSeconds },
			{ "GetCurrentReplayTotalTimeInSeconds", &AReplaySystemAdvancedPC::execGetCurrentReplayTotalTimeInSeconds },
			{ "SetCurrentReplayPausedState", &AReplaySystemAdvancedPC::execSetCurrentReplayPausedState },
			{ "SetCurrentReplayPlayRate", &AReplaySystemAdvancedPC::execSetCurrentReplayPlayRate },
			{ "SetCurrentReplayTimeToSeconds", &AReplaySystemAdvancedPC::execSetCurrentReplayTimeToSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics
	{
		struct ReplaySystemAdvancedPC_eventGetCurrentReplayCurrentTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedPC_eventGetCurrentReplayCurrentTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "Comment", "/* Gets the Second we are currently watching in the Replay */" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ToolTip", "Gets the Second we are currently watching in the Replay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplaySystemAdvancedPC, nullptr, "GetCurrentReplayCurrentTimeInSeconds", nullptr, nullptr, sizeof(ReplaySystemAdvancedPC_eventGetCurrentReplayCurrentTimeInSeconds_Parms), Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics
	{
		struct ReplaySystemAdvancedPC_eventGetCurrentReplayTotalTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedPC_eventGetCurrentReplayTotalTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "Comment", "/* Gets the Max Number of Seconds that were recorded in the current Replay \\*/" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ToolTip", "Gets the Max Number of Seconds that were recorded in the current Replay \\" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplaySystemAdvancedPC, nullptr, "GetCurrentReplayTotalTimeInSeconds", nullptr, nullptr, sizeof(ReplaySystemAdvancedPC_eventGetCurrentReplayTotalTimeInSeconds_Parms), Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics
	{
		struct ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms
		{
			bool bDoPause;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bDoPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms), &Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_bDoPause_SetBit(void* Obj)
	{
		((ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms*)Obj)->bDoPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_bDoPause = { "bDoPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms), &Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_bDoPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::NewProp_bDoPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "Comment", "/* Set the Paused State of the Running Replay to bDoPause.Return new Pause State \\*/" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ToolTip", "Set the Paused State of the Running Replay to bDoPause.Return new Pause State \\" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplaySystemAdvancedPC, nullptr, "SetCurrentReplayPausedState", nullptr, nullptr, sizeof(ReplaySystemAdvancedPC_eventSetCurrentReplayPausedState_Parms), Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics
	{
		struct ReplaySystemAdvancedPC_eventSetCurrentReplayPlayRate_Parms
		{
			float PlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedPC_eventSetCurrentReplayPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "Comment", "/* Changes the PlayRate of the Replay we are watching, enabling FastForward or SlowMotion */" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ToolTip", "Changes the PlayRate of the Replay we are watching, enabling FastForward or SlowMotion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplaySystemAdvancedPC, nullptr, "SetCurrentReplayPlayRate", nullptr, nullptr, sizeof(ReplaySystemAdvancedPC_eventSetCurrentReplayPlayRate_Parms), Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics
	{
		struct ReplaySystemAdvancedPC_eventSetCurrentReplayTimeToSeconds_Parms
		{
			int32 Seconds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplaySystemAdvancedPC_eventSetCurrentReplayTimeToSeconds_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "CurrentReplay" },
		{ "Comment", "/* Jumps to the specified Second in the Replay we are watching \\*/" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ToolTip", "Jumps to the specified Second in the Replay we are watching \\" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplaySystemAdvancedPC, nullptr, "SetCurrentReplayTimeToSeconds", nullptr, nullptr, sizeof(ReplaySystemAdvancedPC_eventSetCurrentReplayTimeToSeconds_Parms), Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReplaySystemAdvancedPC_NoRegister()
	{
		return AReplaySystemAdvancedPC::StaticClass();
	}
	struct Z_Construct_UClass_AReplaySystemAdvancedPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystemAdvanced,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayCurrentTimeInSeconds, "GetCurrentReplayCurrentTimeInSeconds" }, // 2860098239
		{ &Z_Construct_UFunction_AReplaySystemAdvancedPC_GetCurrentReplayTotalTimeInSeconds, "GetCurrentReplayTotalTimeInSeconds" }, // 3358367687
		{ &Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPausedState, "SetCurrentReplayPausedState" }, // 3407465163
		{ &Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayPlayRate, "SetCurrentReplayPlayRate" }, // 4294781024
		{ &Z_Construct_UFunction_AReplaySystemAdvancedPC_SetCurrentReplayTimeToSeconds, "SetCurrentReplayTimeToSeconds" }, // 2728019154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ReplaySystemAdvancedPC.h" },
		{ "ModuleRelativePath", "Public/ReplaySystemAdvancedPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplaySystemAdvancedPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::ClassParams = {
		&AReplaySystemAdvancedPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplaySystemAdvancedPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplaySystemAdvancedPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplaySystemAdvancedPC, 1528214379);
	template<> REPLAYSYSTEMADVANCED_API UClass* StaticClass<AReplaySystemAdvancedPC>()
	{
		return AReplaySystemAdvancedPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplaySystemAdvancedPC(Z_Construct_UClass_AReplaySystemAdvancedPC, &AReplaySystemAdvancedPC::StaticClass, TEXT("/Script/ReplaySystemAdvanced"), TEXT("AReplaySystemAdvancedPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplaySystemAdvancedPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
