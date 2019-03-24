// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/PlayerRhythmController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRhythmController() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerRhythmController_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerRhythmController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	TRAINJAM_API UFunction* Z_Construct_UFunction_APlayerRhythmController_GetInputType();
	TRAINJAM_API UFunction* Z_Construct_UFunction_APlayerRhythmController_InputEvent();
	TRAINJAM_API UFunction* Z_Construct_UFunction_APlayerRhythmController_PlayerInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRAINJAM_API UClass* Z_Construct_UClass_ARhythmNoteScript_NoRegister();
// End Cross Module References
	static FName NAME_APlayerRhythmController_InputEvent = FName(TEXT("InputEvent"));
	void APlayerRhythmController::InputEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerRhythmController_InputEvent),NULL);
	}
	void APlayerRhythmController::StaticRegisterNativesAPlayerRhythmController()
	{
		UClass* Class = APlayerRhythmController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputType", &APlayerRhythmController::execGetInputType },
			{ "PlayerInput", &APlayerRhythmController::execPlayerInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics
	{
		struct PlayerRhythmController_eventGetInputType_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerRhythmController_eventGetInputType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRhythmController, "GetInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerRhythmController_eventGetInputType_Parms), Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRhythmController_GetInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRhythmController_GetInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRhythmController, "InputEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRhythmController_InputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRhythmController_InputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics
	{
		struct PlayerRhythmController_eventPlayerInput_Parms
		{
			FString direction;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::NewProp_direction = { UE4CodeGen_Private::EPropertyClass::Str, "direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerRhythmController_eventPlayerInput_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRhythmController, "PlayerInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerRhythmController_eventPlayerInput_Parms), Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRhythmController_PlayerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRhythmController_PlayerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerRhythmController_NoRegister()
	{
		return APlayerRhythmController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerRhythmController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPointRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPointRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPointLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPointLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPointDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPointDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPointUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPointUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rhythmNotePrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_rhythmNotePrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnArrows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnArrows;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_spawnArrows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spawnTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerRhythmController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerRhythmController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerRhythmController_GetInputType, "GetInputType" }, // 924254494
		{ &Z_Construct_UFunction_APlayerRhythmController_InputEvent, "InputEvent" }, // 122783350
		{ &Z_Construct_UFunction_APlayerRhythmController_PlayerInput, "PlayerInput" }, // 624797300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerRhythmController.h" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointRight_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointRight = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnPointRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnPointRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointLeft_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointLeft = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnPointLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnPointLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointDown_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointDown = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnPointDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnPointDown), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointUp_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointUp = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnPointUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnPointUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_rhythmNotePrefab_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
		{ "ToolTip", "Spawning Notes" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_rhythmNotePrefab = { UE4CodeGen_Private::EPropertyClass::Class, "rhythmNotePrefab", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, rhythmNotePrefab), Z_Construct_UClass_ARhythmNoteScript_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_rhythmNotePrefab_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_rhythmNotePrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows = { UE4CodeGen_Private::EPropertyClass::Array, "spawnArrows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnArrows), METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "spawnArrows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
		{ "ToolTip", "SongDetails" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes = { UE4CodeGen_Private::EPropertyClass::Array, "spawnTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, spawnTimes), METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "spawnTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_inputType_MetaData[] = {
		{ "Category", "PlayerRhythmController" },
		{ "ModuleRelativePath", "PlayerRhythmController.h" },
		{ "ToolTip", "Player Input" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_inputType = { UE4CodeGen_Private::EPropertyClass::Str, "inputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayerRhythmController, inputType), METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_inputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_inputType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerRhythmController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnPointUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_rhythmNotePrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnArrows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_spawnTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRhythmController_Statics::NewProp_inputType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerRhythmController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerRhythmController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerRhythmController_Statics::ClassParams = {
		&APlayerRhythmController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayerRhythmController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerRhythmController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerRhythmController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerRhythmController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerRhythmController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerRhythmController, 977074303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerRhythmController(Z_Construct_UClass_APlayerRhythmController, &APlayerRhythmController::StaticClass, TEXT("/Script/TrainJam"), TEXT("APlayerRhythmController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerRhythmController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
