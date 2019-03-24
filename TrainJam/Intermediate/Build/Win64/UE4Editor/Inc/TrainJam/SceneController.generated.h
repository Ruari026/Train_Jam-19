// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerRhythmController;
enum class GameState : uint8;
#ifdef TRAINJAM_SceneController_generated_h
#error "SceneController.generated.h already included, missing '#pragma once' in SceneController.h"
#endif
#define TRAINJAM_SceneController_generated_h

#define TrainJam_Source_TrainJam_SceneController_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerRhythmController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerRhythmController**)Z_Param__Result=P_THIS->GetPlayerRhythmController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCamera) \
	{ \
		P_GET_UBOOL(Z_Param_zoomingIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomCamera(Z_Param_zoomingIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameState) \
	{ \
		P_GET_ENUM(GameState,Z_Param_newGameState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGameState(GameState(Z_Param_newGameState)); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_SceneController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerRhythmController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerRhythmController**)Z_Param__Result=P_THIS->GetPlayerRhythmController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCamera) \
	{ \
		P_GET_UBOOL(Z_Param_zoomingIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomCamera(Z_Param_zoomingIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameState) \
	{ \
		P_GET_ENUM(GameState,Z_Param_newGameState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGameState(GameState(Z_Param_newGameState)); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_SceneController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneController(); \
	friend struct Z_Construct_UClass_ASceneController_Statics; \
public: \
	DECLARE_CLASS(ASceneController, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(ASceneController)


#define TrainJam_Source_TrainJam_SceneController_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASceneController(); \
	friend struct Z_Construct_UClass_ASceneController_Statics; \
public: \
	DECLARE_CLASS(ASceneController, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(ASceneController)


#define TrainJam_Source_TrainJam_SceneController_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASceneController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASceneController(ASceneController&&); \
	NO_API ASceneController(const ASceneController&); \
public:


#define TrainJam_Source_TrainJam_SceneController_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASceneController(ASceneController&&); \
	NO_API ASceneController(const ASceneController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASceneController)


#define TrainJam_Source_TrainJam_SceneController_h_24_PRIVATE_PROPERTY_OFFSET
#define TrainJam_Source_TrainJam_SceneController_h_21_PROLOG
#define TrainJam_Source_TrainJam_SceneController_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_SceneController_h_24_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_SceneController_h_24_RPC_WRAPPERS \
	TrainJam_Source_TrainJam_SceneController_h_24_INCLASS \
	TrainJam_Source_TrainJam_SceneController_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrainJam_Source_TrainJam_SceneController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_SceneController_h_24_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_SceneController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_SceneController_h_24_INCLASS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_SceneController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrainJam_Source_TrainJam_SceneController_h


#define FOREACH_ENUM_GAMESTATE(op) \
	op(GameState::MENU) \
	op(GameState::RHYTHM) \
	op(GameState::PAUSED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
