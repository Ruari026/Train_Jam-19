// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainJam/PlayerCameraScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraScript() {}
// Cross Module References
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerCameraScript_NoRegister();
	TRAINJAM_API UClass* Z_Construct_UClass_APlayerCameraScript();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TrainJam();
// End Cross Module References
	void APlayerCameraScript::StaticRegisterNativesAPlayerCameraScript()
	{
	}
	UClass* Z_Construct_UClass_APlayerCameraScript_NoRegister()
	{
		return APlayerCameraScript::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TrainJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraScript_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCameraScript.h" },
		{ "ModuleRelativePath", "PlayerCameraScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraScript_Statics::ClassParams = {
		&APlayerCameraScript::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCameraScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCameraScript, 1988153864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraScript(Z_Construct_UClass_APlayerCameraScript, &APlayerCameraScript::StaticClass, TEXT("/Script/TrainJam"), TEXT("APlayerCameraScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
