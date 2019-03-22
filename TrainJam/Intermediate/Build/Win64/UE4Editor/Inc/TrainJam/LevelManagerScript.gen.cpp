// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/LevelManagerScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManagerScript() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_ALevelManagerScript_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_ALevelManagerScript();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerCameraController_NoRegister();
// End Cross Module References
	void ALevelManagerScript::StaticRegisterNativesALevelManagerScript()
	{
	}
	UClass* Z_Construct_UClass_ALevelManagerScript_NoRegister()
	{
		return ALevelManagerScript::StaticClass();
	}
	struct Z_Construct_UClass_ALevelManagerScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelManagerScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManagerScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelManagerScript.h" },
		{ "ModuleRelativePath", "LevelManagerScript.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManagerScript_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "LevelManagerScript" },
		{ "ModuleRelativePath", "LevelManagerScript.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManagerScript_Statics::NewProp_playerCamera = { UE4CodeGen_Private::EPropertyClass::Object, "playerCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALevelManagerScript, playerCamera), Z_Construct_UClass_APlayerCameraController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelManagerScript_Statics::NewProp_playerCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelManagerScript_Statics::NewProp_playerCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelManagerScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManagerScript_Statics::NewProp_playerCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelManagerScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelManagerScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelManagerScript_Statics::ClassParams = {
		&ALevelManagerScript::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALevelManagerScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALevelManagerScript_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALevelManagerScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelManagerScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelManagerScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelManagerScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelManagerScript, 611316338);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelManagerScript(Z_Construct_UClass_ALevelManagerScript, &ALevelManagerScript::StaticClass, TEXT("/Script/TrainJam"), TEXT("ALevelManagerScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelManagerScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
