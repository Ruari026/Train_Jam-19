// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/SceneController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneController() {}
// Cross Module References
	TRAINJAM_API UEnum* Z_Construct_UEnum_TrainJam_GameState();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	TRAINJAM_API UClass* Z_Construct_UClass_ASceneController_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ASceneController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ASceneController_GetPlayerRhythmController();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerRhythmController_NoRegister();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ASceneController_SetGameState();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ASceneController_ZoomCamera();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRAINJAM_API UClass* Z_Construct_UClass_ABackgroundDecorationScript_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* GameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TrainJam_GameState, Z_Construct_UPackage__Script_TrainJam(), TEXT("GameState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GameState(GameState_StaticEnum, TEXT("/Script/TrainJam"), TEXT("GameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TrainJam_GameState_CRC() { return 3703269947U; }
	UEnum* Z_Construct_UEnum_TrainJam_GameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TrainJam();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GameState"), 0, Get_Z_Construct_UEnum_TrainJam_GameState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GameState::MENU", (int64)GameState::MENU },
				{ "GameState::RHYTHM", (int64)GameState::RHYTHM },
				{ "GameState::PAUSED", (int64)GameState::PAUSED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SceneController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TrainJam,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"GameState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"GameState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASceneController::StaticRegisterNativesASceneController()
	{
		UClass* Class = ASceneController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRhythmController", &ASceneController::execGetPlayerRhythmController },
			{ "SetGameState", &ASceneController::execSetGameState },
			{ "ZoomCamera", &ASceneController::execZoomCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics
	{
		struct SceneController_eventGetPlayerRhythmController_Parms
		{
			APlayerRhythmController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SceneController_eventGetPlayerRhythmController_Parms, ReturnValue), Z_Construct_UClass_APlayerRhythmController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneController, "GetPlayerRhythmController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneController_eventGetPlayerRhythmController_Parms), Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneController_GetPlayerRhythmController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASceneController_GetPlayerRhythmController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASceneController_SetGameState_Statics
	{
		struct SceneController_eventSetGameState_Parms
		{
			GameState newGameState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newGameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newGameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASceneController_SetGameState_Statics::NewProp_newGameState = { UE4CodeGen_Private::EPropertyClass::Enum, "newGameState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneController_eventSetGameState_Parms, newGameState), Z_Construct_UEnum_TrainJam_GameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASceneController_SetGameState_Statics::NewProp_newGameState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneController_SetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneController_SetGameState_Statics::NewProp_newGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneController_SetGameState_Statics::NewProp_newGameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneController_SetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneController_SetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneController, "SetGameState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneController_eventSetGameState_Parms), Z_Construct_UFunction_ASceneController_SetGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASceneController_SetGameState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneController_SetGameState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASceneController_SetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneController_SetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASceneController_SetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASceneController_ZoomCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneController_ZoomCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneController_ZoomCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneController, "ZoomCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneController_ZoomCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASceneController_ZoomCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneController_ZoomCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASceneController_ZoomCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASceneController_NoRegister()
	{
		return ASceneController::StaticClass();
	}
	struct Z_Construct_UClass_ASceneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theRhythmController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theRhythmController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minSpawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minSpawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSpawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backgroundDecorationPrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_backgroundDecorationPrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomedOutRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_zoomedOutRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomedOutPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_zoomedOutPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomedInRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_zoomedInRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomedInPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_zoomedInPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASceneController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneController_GetPlayerRhythmController, "GetPlayerRhythmController" }, // 2478583732
		{ &Z_Construct_UFunction_ASceneController_SetGameState, "SetGameState" }, // 3702137431
		{ &Z_Construct_UFunction_ASceneController_ZoomCamera, "ZoomCamera" }, // 1979173365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SceneController.h" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_theRhythmController_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
		{ "ToolTip", "Controlling the rhythm controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_theRhythmController = { UE4CodeGen_Private::EPropertyClass::Object, "theRhythmController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, theRhythmController), Z_Construct_UClass_APlayerRhythmController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_theRhythmController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_theRhythmController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_minSpawnTimer_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_minSpawnTimer = { UE4CodeGen_Private::EPropertyClass::Float, "minSpawnTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, minSpawnTimer), METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_minSpawnTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_minSpawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_maxSpawnTimer_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_maxSpawnTimer = { UE4CodeGen_Private::EPropertyClass::Float, "maxSpawnTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, maxSpawnTimer), METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_maxSpawnTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_maxSpawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_backgroundDecorationPrefab_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
		{ "ToolTip", "Spawning Scene Decorations" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_backgroundDecorationPrefab = { UE4CodeGen_Private::EPropertyClass::Class, "backgroundDecorationPrefab", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, backgroundDecorationPrefab), Z_Construct_UClass_ABackgroundDecorationScript_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_backgroundDecorationPrefab_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_backgroundDecorationPrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutRot_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutRot = { UE4CodeGen_Private::EPropertyClass::Struct, "zoomedOutRot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, zoomedOutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutRot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutPos_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutPos = { UE4CodeGen_Private::EPropertyClass::Struct, "zoomedOutPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, zoomedOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInRot_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInRot = { UE4CodeGen_Private::EPropertyClass::Struct, "zoomedInRot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, zoomedInRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInRot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInPos_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
		{ "ToolTip", "Controlling the player camera" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInPos = { UE4CodeGen_Private::EPropertyClass::Struct, "zoomedInPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, zoomedInPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_theRhythmController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_minSpawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_maxSpawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_backgroundDecorationPrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedOutPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_zoomedInPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneController_Statics::ClassParams = {
		&ASceneController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASceneController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASceneController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASceneController, 2717425647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneController(Z_Construct_UClass_ASceneController, &ASceneController::StaticClass, TEXT("/Script/TrainJam"), TEXT("ASceneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
