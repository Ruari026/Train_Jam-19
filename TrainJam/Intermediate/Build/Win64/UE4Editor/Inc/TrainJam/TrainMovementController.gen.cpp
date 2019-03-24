// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/TrainMovementController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainMovementController() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_ATrainMovementController_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ATrainMovementController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
// End Cross Module References
	void ATrainMovementController::StaticRegisterNativesATrainMovementController()
	{
	}
	UClass* Z_Construct_UClass_ATrainMovementController_NoRegister()
	{
		return ATrainMovementController::StaticClass();
	}
	struct Z_Construct_UClass_ATrainMovementController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainMovementController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainMovementController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrainMovementController.h" },
		{ "ModuleRelativePath", "TrainMovementController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainMovementController_Statics::NewProp_currentMovementSpeed_MetaData[] = {
		{ "Category", "TrainMovementController" },
		{ "ModuleRelativePath", "TrainMovementController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainMovementController_Statics::NewProp_currentMovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "currentMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATrainMovementController, currentMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_currentMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_currentMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainMovementController_Statics::NewProp_maxMovementSpeed_MetaData[] = {
		{ "Category", "TrainMovementController" },
		{ "ModuleRelativePath", "TrainMovementController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainMovementController_Statics::NewProp_maxMovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "maxMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATrainMovementController, maxMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_maxMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_maxMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "TrainMovementController" },
		{ "ModuleRelativePath", "TrainMovementController.h" },
		{ "ToolTip", "TrainAnimations" },
	};
#endif
	void Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((ATrainMovementController*)Obj)->canMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove = { UE4CodeGen_Private::EPropertyClass::Bool, "canMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATrainMovementController), &Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainMovementController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainMovementController_Statics::NewProp_currentMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainMovementController_Statics::NewProp_maxMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainMovementController_Statics::NewProp_canMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainMovementController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainMovementController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrainMovementController_Statics::ClassParams = {
		&ATrainMovementController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATrainMovementController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATrainMovementController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATrainMovementController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATrainMovementController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrainMovementController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrainMovementController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainMovementController, 1095373329);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainMovementController(Z_Construct_UClass_ATrainMovementController, &ATrainMovementController::StaticClass, TEXT("/Script/TrainJam"), TEXT("ATrainMovementController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainMovementController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
