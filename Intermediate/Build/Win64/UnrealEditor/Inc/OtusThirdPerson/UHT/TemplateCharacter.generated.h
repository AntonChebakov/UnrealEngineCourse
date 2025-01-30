// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateCharacter/TemplateCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OTUSTHIRDPERSON_TemplateCharacter_generated_h
#error "TemplateCharacter.generated.h already included, missing '#pragma once' in TemplateCharacter.h"
#endif
#define OTUSTHIRDPERSON_TemplateCharacter_generated_h

#define FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemplateCharacter(); \
	friend struct Z_Construct_UClass_ATemplateCharacter_Statics; \
public: \
	DECLARE_CLASS(ATemplateCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OtusThirdPerson"), NO_API) \
	DECLARE_SERIALIZER(ATemplateCharacter)


#define FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATemplateCharacter(ATemplateCharacter&&); \
	ATemplateCharacter(const ATemplateCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemplateCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATemplateCharacter) \
	NO_API virtual ~ATemplateCharacter();


#define FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_9_PROLOG
#define FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OTUSTHIRDPERSON_API UClass* StaticClass<class ATemplateCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
