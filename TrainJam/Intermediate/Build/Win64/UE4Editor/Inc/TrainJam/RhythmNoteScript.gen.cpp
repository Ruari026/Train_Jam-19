// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/RhythmNoteScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRhythmNoteScript() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_ARhythmNoteScript_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ARhythmNoteScript();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ARhythmNoteScript_GetArrowType();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ARhythmNoteScript_SetArrowType();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FName NAME_ARhythmNoteScript_Spawningarrow = FName(TEXT("Spawningarrow"));
	void ARhythmNoteScript::Spawningarrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARhythmNoteScript_Spawningarrow),NULL);
	}
	void ARhythmNoteScript::StaticRegisterNativesARhythmNoteScript()
	{
		UClass* Class = ARhythmNoteScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArrowType", &ARhythmNoteScript::execGetArrowType },
			{ "SetArrowPos", &ARhythmNoteScript::execSetArrowPos },
			{ "SetArrowType", &ARhythmNoteScript::execSetArrowType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics
	{
		struct RhythmNoteScript_eventGetArrowType_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RhythmNoteScript_eventGetArrowType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARhythmNoteScript, "GetArrowType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RhythmNoteScript_eventGetArrowType_Parms), Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARhythmNoteScript_GetArrowType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARhythmNoteScript_GetArrowType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARhythmNoteScript, "SetArrowPos", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics
	{
		struct RhythmNoteScript_eventSetArrowType_Parms
		{
			FString newArrowType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newArrowType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::NewProp_newArrowType = { UE4CodeGen_Private::EPropertyClass::Str, "newArrowType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RhythmNoteScript_eventSetArrowType_Parms, newArrowType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::NewProp_newArrowType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARhythmNoteScript, "SetArrowType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RhythmNoteScript_eventSetArrowType_Parms), Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARhythmNoteScript_SetArrowType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARhythmNoteScript_SetArrowType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
		{ "ToolTip", "Setting Visuals" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARhythmNoteScript, "Spawningarrow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARhythmNoteScript_NoRegister()
	{
		return ARhythmNoteScript::StaticClass();
	}
	struct Z_Construct_UClass_ARhythmNoteScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightSpawnPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightSpawnPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftSpawnPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftSpawnPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downSpawnPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_downSpawnPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upSpawnPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_upSpawnPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARhythmNoteScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARhythmNoteScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARhythmNoteScript_GetArrowType, "GetArrowType" }, // 4225038204
		{ &Z_Construct_UFunction_ARhythmNoteScript_SetArrowPos, "SetArrowPos" }, // 3080307120
		{ &Z_Construct_UFunction_ARhythmNoteScript_SetArrowType, "SetArrowType" }, // 1053797276
		{ &Z_Construct_UFunction_ARhythmNoteScript_Spawningarrow, "Spawningarrow" }, // 229383012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RhythmNoteScript.h" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "RhythmNoteScript" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
		{ "ToolTip", "Movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_moveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "moveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARhythmNoteScript, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_moveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_rightSpawnPos_MetaData[] = {
		{ "Category", "RhythmNoteScript" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_rightSpawnPos = { UE4CodeGen_Private::EPropertyClass::Struct, "rightSpawnPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARhythmNoteScript, rightSpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_rightSpawnPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_rightSpawnPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_leftSpawnPos_MetaData[] = {
		{ "Category", "RhythmNoteScript" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_leftSpawnPos = { UE4CodeGen_Private::EPropertyClass::Struct, "leftSpawnPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARhythmNoteScript, leftSpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_leftSpawnPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_leftSpawnPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_downSpawnPos_MetaData[] = {
		{ "Category", "RhythmNoteScript" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_downSpawnPos = { UE4CodeGen_Private::EPropertyClass::Struct, "downSpawnPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARhythmNoteScript, downSpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_downSpawnPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_downSpawnPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_upSpawnPos_MetaData[] = {
		{ "Category", "RhythmNoteScript" },
		{ "ModuleRelativePath", "RhythmNoteScript.h" },
		{ "ToolTip", "Spawnpoints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_upSpawnPos = { UE4CodeGen_Private::EPropertyClass::Struct, "upSpawnPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARhythmNoteScript, upSpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_upSpawnPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_upSpawnPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARhythmNoteScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_rightSpawnPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_leftSpawnPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_downSpawnPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARhythmNoteScript_Statics::NewProp_upSpawnPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARhythmNoteScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARhythmNoteScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARhythmNoteScript_Statics::ClassParams = {
		&ARhythmNoteScript::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ARhythmNoteScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARhythmNoteScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARhythmNoteScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARhythmNoteScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARhythmNoteScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARhythmNoteScript, 2699159065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARhythmNoteScript(Z_Construct_UClass_ARhythmNoteScript, &ARhythmNoteScript::StaticClass, TEXT("/Script/TrainJam"), TEXT("ARhythmNoteScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARhythmNoteScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
