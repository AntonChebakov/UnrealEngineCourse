// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OTUSTHIRDPERSON_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define OTUSTHIRDPERSON_TestActor_generated_h

#define FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedActorLocation);


#define FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OtusThirdPerson"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestActor(ATestActor&&); \
	ATestActor(const ATestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor) \
	NO_API virtual ~ATestActor();


#define FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_9_PROLOG
#define FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OTUSTHIRDPERSON_API UClass* StaticClass<class ATestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_TestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS