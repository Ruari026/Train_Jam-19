// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/BackgroundDecorationScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundDecorationScript() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_ABackgroundDecorationScript_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ABackgroundDecorationScript();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	TRAINJAM_API UFunction* Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FName NAME_ABackgroundDecorationScript_RandomiseDecorationMaterial = FName(TEXT("RandomiseDecorationMaterial"));
	void ABackgroundDecorationScript::RandomiseDecorationMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABackgroundDecorationScript_RandomiseDecorationMaterial),NULL);
	}
	void ABackgroundDecorationScript::StaticRegisterNativesABackgroundDecorationScript()
	{
	}
	struct Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BackgroundDecorationScript.h" },
		{ "ToolTip", "Randomising Visuals" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABackgroundDecorationScript, "RandomiseDecorationMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABackgroundDecorationScript_NoRegister()
	{
		return ABackgroundDecorationScript::StaticClass();
	}
	struct Z_Construct_UClass_ABackgroundDecorationScript_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_railSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_railSpeeds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_railStartPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_railStartPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABackgroundDecorationScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABackgroundDecorationScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABackgroundDecorationScript_RandomiseDecorationMaterial, "RandomiseDecorationMaterial" }, // 1867364560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundDecorationScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BackgroundDecorationScript.h" },
		{ "ModuleRelativePath", "BackgroundDecorationScript.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "BackgroundDecorationScript" },
		{ "ModuleRelativePath", "BackgroundDecorationScript.h" },
		{ "ToolTip", "Handling the decoration movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_moveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "moveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABackgroundDecorationScript, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_moveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railSpeeds_MetaData[] = {
		{ "Category", "BackgroundDecorationScript" },
		{ "ModuleRelativePath", "BackgroundDecorationScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railSpeeds = { UE4CodeGen_Private::EPropertyClass::Float, "railSpeeds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(railSpeeds, ABackgroundDecorationScript), nullptr, STRUCT_OFFSET(ABackgroundDecorationScript, railSpeeds), METADATA_PARAMS(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railSpeeds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railSpeeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railStartPoints_MetaData[] = {
		{ "Category", "BackgroundDecorationScript" },
		{ "ModuleRelativePath", "BackgroundDecorationScript.h" },
		{ "ToolTip", "Handling Setting The Spawn Position & Move Speed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railStartPoints = { UE4CodeGen_Private::EPropertyClass::Struct, "railStartPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(railStartPoints, ABackgroundDecorationScript), nullptr, STRUCT_OFFSET(ABackgroundDecorationScript, railStartPoints), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railStartPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railStartPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABackgroundDecorationScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackgroundDecorationScript_Statics::NewProp_railStartPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABackgroundDecorationScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABackgroundDecorationScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABackgroundDecorationScript_Statics::ClassParams = {
		&ABackgroundDecorationScript::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABackgroundDecorationScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABackgroundDecorationScript_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABackgroundDecorationScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABackgroundDecorationScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABackgroundDecorationScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABackgroundDecorationScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABackgroundDecorationScript, 1288138406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABackgroundDecorationScript(Z_Construct_UClass_ABackgroundDecorationScript, &ABackgroundDecorationScript::StaticClass, TEXT("/Script/TrainJam"), TEXT("ABackgroundDecorationScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABackgroundDecorationScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
