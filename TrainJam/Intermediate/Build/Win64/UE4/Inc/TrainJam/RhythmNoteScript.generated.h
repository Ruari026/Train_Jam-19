// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAINJAM_RhythmNoteScript_generated_h
#error "RhythmNoteScript.generated.h already included, missing '#pragma once' in RhythmNoteScript.h"
#endif
#define TRAINJAM_RhythmNoteScript_generated_h

#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetArrowPos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrowPos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrowType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetArrowType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrowType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newArrowType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrowType(Z_Param_newArrowType); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetArrowPos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrowPos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrowType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetArrowType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrowType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newArrowType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrowType(Z_Param_newArrowType); \
		P_NATIVE_END; \
	}


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_EVENT_PARMS
#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_CALLBACK_WRAPPERS
#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARhythmNoteScript(); \
	friend struct Z_Construct_UClass_ARhythmNoteScript_Statics; \
public: \
	DECLARE_CLASS(ARhythmNoteScript, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(ARhythmNoteScript)


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARhythmNoteScript(); \
	friend struct Z_Construct_UClass_ARhythmNoteScript_Statics; \
public: \
	DECLARE_CLASS(ARhythmNoteScript, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrainJam"), NO_API) \
	DECLARE_SERIALIZER(ARhythmNoteScript)


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARhythmNoteScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARhythmNoteScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARhythmNoteScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARhythmNoteScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARhythmNoteScript(ARhythmNoteScript&&); \
	NO_API ARhythmNoteScript(const ARhythmNoteScript&); \
public:


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARhythmNoteScript(ARhythmNoteScript&&); \
	NO_API ARhythmNoteScript(const ARhythmNoteScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARhythmNoteScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARhythmNoteScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARhythmNoteScript)


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_PRIVATE_PROPERTY_OFFSET
#define TrainJam_Source_TrainJam_RhythmNoteScript_h_9_PROLOG \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_EVENT_PARMS


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_RPC_WRAPPERS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_CALLBACK_WRAPPERS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_INCLASS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrainJam_Source_TrainJam_RhythmNoteScript_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_PRIVATE_PROPERTY_OFFSET \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_CALLBACK_WRAPPERS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_INCLASS_NO_PURE_DECLS \
	TrainJam_Source_TrainJam_RhythmNoteScript_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrainJam_Source_TrainJam_RhythmNoteScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
