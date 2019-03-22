// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/PlayerCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraController() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerCameraController_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerCameraController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
// End Cross Module References
	void APlayerCameraController::StaticRegisterNativesAPlayerCameraController()
	{
	}
	UClass* Z_Construct_UClass_APlayerCameraController_NoRegister()
	{
		return APlayerCameraController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCameraController.h" },
		{ "ModuleRelativePath", "PlayerCameraController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraController_Statics::ClassParams = {
		&APlayerCameraController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCameraController, 1964513190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraController(Z_Construct_UClass_APlayerCameraController, &APlayerCameraController::StaticClass, TEXT("/Script/TrainJam"), TEXT("APlayerCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
