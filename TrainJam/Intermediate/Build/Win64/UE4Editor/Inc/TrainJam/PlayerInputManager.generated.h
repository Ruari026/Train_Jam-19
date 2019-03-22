// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAINJAM_PlayerInputManager_generated_h
#error "PlayerInputManager.generated.h already included, missing '#pragma once' in PlayerInputManager.h"
#endif
#define TRAINJAM_PlayerInputManager_generated_h

#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_RPC_WRAPPERS
#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerInputManager(); \
	friend struct Z_Construct_UClass_APlayerInputManager_Statics; \
public: \
	DECLARE_CLASS(APlayerInputManager, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerInputManager)


#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerInputManager(); \
	friend struct Z_Construct_UClass_APlayerInputManager_Statics; \
public: \
	DECLARE_CLASS(APlayerInputManager, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerInputManager)


#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerInputManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerInputManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInputManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerInputManager(APlayerInputManager&&); \
	NO_API APlayerInputManager(const APlayerInputManager&); \
public:


#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerInputManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerInputManager(APlayerInputManager&&); \
	NO_API APlayerInputManager(const APlayerInputManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInputManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerInputManager)


#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_PRIVATE_PROPERTY_OFFSET
#define TrainJam_Source_TrainJam_PlayerInputManager_h_12_PROLOG
#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_RPC_WRAPPERS \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_INCLASS \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrainJam_Source_TrainJam_PlayerInputManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_INCLASS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_PlayerInputManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrainJam_Source_TrainJam_PlayerInputManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
