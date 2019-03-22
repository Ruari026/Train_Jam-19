// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/PlayerInputManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInputManager() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerInputManager_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerInputManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
// End Cross Module References
	void APlayerInputManager::StaticRegisterNativesAPlayerInputManager()
	{
	}
	UClass* Z_Construct_UClass_APlayerInputManager_NoRegister()
	{
		return APlayerInputManager::StaticClass();
	}
	struct Z_Construct_UClass_APlayerInputManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerInputManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerInputManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerInputManager.h" },
		{ "ModuleRelativePath", "PlayerInputManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerInputManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInputManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerInputManager_Statics::ClassParams = {
		&APlayerInputManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerInputManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerInputManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerInputManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerInputManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerInputManager, 3709872384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerInputManager(Z_Construct_UClass_APlayerInputManager, &APlayerInputManager::StaticClass, TEXT("/Script/TrainJam"), TEXT("APlayerInputManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInputManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
