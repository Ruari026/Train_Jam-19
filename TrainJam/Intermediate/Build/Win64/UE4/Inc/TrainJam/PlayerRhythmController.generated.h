// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAINJAM_PlayerRhythmController_generated_h
#error "PlayerRhythmController.generated.h already included, missing '#pragma once' in PlayerRhythmController.h"
#endif
#define TRAINJAM_PlayerRhythmController_generated_h

#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerInput) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerInput(Z_Param_direction); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerInput) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerInput(Z_Param_direction); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_EVENT_PARMS
#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_CALLBACK_WRAPPERS
#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerRhythmController(); \
	friend struct Z_Construct_UClass_APlayerRhythmController_Statics; \
public: \
	DECLARE_CLASS(APlayerRhythmController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerRhythmController)


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerRhythmController(); \
	friend struct Z_Construct_UClass_APlayerRhythmController_Statics; \
public: \
	DECLARE_CLASS(APlayerRhythmController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerRhythmController)


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerRhythmController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerRhythmController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerRhythmController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerRhythmController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerRhythmController(APlayerRhythmController&&); \
	NO_API APlayerRhythmController(const APlayerRhythmController&); \
public:


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerRhythmController(APlayerRhythmController&&); \
	NO_API APlayerRhythmController(const APlayerRhythmController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerRhythmController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerRhythmController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerRhythmController)


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_PRIVATE_PROPERTY_OFFSET
#define TrainJam_Source_TrainJam_PlayerRhythmController_h_11_PROLOG \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_EVENT_PARMS


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_RPC_WRAPPERS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_CALLBACK_WRAPPERS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_INCLASS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrainJam_Source_TrainJam_PlayerRhythmController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_CALLBACK_WRAPPERS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_INCLASS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_PlayerRhythmController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrainJam_Source_TrainJam_PlayerRhythmController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
