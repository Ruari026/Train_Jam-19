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
	TRAINJAM_API UClass* Z_Construct_UClass_ASceneController_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ASceneController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASceneController::StaticRegisterNativesASceneController()
	{
	}
	UClass* Z_Construct_UClass_ASceneController_NoRegister()
	{
		return ASceneController::StaticClass();
	}
	struct Z_Construct_UClass_ASceneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decorationPrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_decorationPrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decorationTimerCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_decorationTimerCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decorationTimerMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_decorationTimerMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decorationTimerMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_decorationTimerMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneController.h" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_decorationPrefab_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
		{ "ToolTip", "Spawning Prefab" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_decorationPrefab = { UE4CodeGen_Private::EPropertyClass::Class, "decorationPrefab", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, decorationPrefab), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationPrefab_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationPrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerCurrent_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerCurrent = { UE4CodeGen_Private::EPropertyClass::Float, "decorationTimerCurrent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, decorationTimerCurrent), METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMin_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMin = { UE4CodeGen_Private::EPropertyClass::Float, "decorationTimerMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, decorationTimerMin), METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMax_MetaData[] = {
		{ "Category", "SceneController" },
		{ "ModuleRelativePath", "SceneController.h" },
		{ "ToolTip", "Handling Spawning Decorations\nSpawn Timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMax = { UE4CodeGen_Private::EPropertyClass::Float, "decorationTimerMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASceneController, decorationTimerMax), METADATA_PARAMS(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_decorationPrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneController_Statics::NewProp_decorationTimerMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneController_Statics::ClassParams = {
		&ASceneController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
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
	IMPLEMENT_CLASS(ASceneController, 1851907470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneController(Z_Construct_UClass_ASceneController, &ASceneController::StaticClass, TEXT("/Script/TrainJam"), TEXT("ASceneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
