// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OtusThirdPerson/TemplateCharacter/TemplateCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_ATemplateCharacter();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_ATemplateCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_OtusThirdPerson();
// End Cross Module References

// Begin Class ATemplateCharacter Function LookUp
struct Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics
{
	struct TemplateCharacter_eventLookUp_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateCharacter_eventLookUp_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateCharacter, nullptr, "LookUp", nullptr, nullptr, Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::TemplateCharacter_eventLookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::TemplateCharacter_eventLookUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateCharacter_LookUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateCharacter_LookUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateCharacter::execLookUp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LookUp(Z_Param_val);
	P_NATIVE_END;
}
// End Class ATemplateCharacter Function LookUp

// Begin Class ATemplateCharacter Function MoveForward
struct Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics
{
	struct TemplateCharacter_eventMoveForward_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateCharacter_eventMoveForward_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::TemplateCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::TemplateCharacter_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateCharacter_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateCharacter_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateCharacter::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_val);
	P_NATIVE_END;
}
// End Class ATemplateCharacter Function MoveForward

// Begin Class ATemplateCharacter Function MoveRight
struct Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics
{
	struct TemplateCharacter_eventMoveRight_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateCharacter_eventMoveRight_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateCharacter, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::TemplateCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::TemplateCharacter_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateCharacter_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateCharacter_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateCharacter::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_val);
	P_NATIVE_END;
}
// End Class ATemplateCharacter Function MoveRight

// Begin Class ATemplateCharacter Function Turn
struct Z_Construct_UFunction_ATemplateCharacter_Turn_Statics
{
	struct TemplateCharacter_eventTurn_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateCharacter_eventTurn_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateCharacter, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::TemplateCharacter_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::TemplateCharacter_eventTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateCharacter_Turn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateCharacter_Turn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateCharacter::execTurn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Turn(Z_Param_val);
	P_NATIVE_END;
}
// End Class ATemplateCharacter Function Turn

// Begin Class ATemplateCharacter
void ATemplateCharacter::StaticRegisterNativesATemplateCharacter()
{
	UClass* Class = ATemplateCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LookUp", &ATemplateCharacter::execLookUp },
		{ "MoveForward", &ATemplateCharacter::execMoveForward },
		{ "MoveRight", &ATemplateCharacter::execMoveRight },
		{ "Turn", &ATemplateCharacter::execTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemplateCharacter);
UClass* Z_Construct_UClass_ATemplateCharacter_NoRegister()
{
	return ATemplateCharacter::StaticClass();
}
struct Z_Construct_UClass_ATemplateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TemplateCharacter/TemplateCharacter.h" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRef_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dead_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TemplateCharacter/TemplateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
	static void NewProp_Dead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Dead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemplateCharacter_LookUp, "LookUp" }, // 394872656
		{ &Z_Construct_UFunction_ATemplateCharacter_MoveForward, "MoveForward" }, // 1137212857
		{ &Z_Construct_UFunction_ATemplateCharacter_MoveRight, "MoveRight" }, // 1364262483
		{ &Z_Construct_UFunction_ATemplateCharacter_Turn, "Turn" }, // 4114592573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemplateCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, ControllerRef), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRef_MetaData), NewProp_ControllerRef_MetaData) };
void Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Dead_SetBit(void* Obj)
{
	((ATemplateCharacter*)Obj)->Dead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Dead = { "Dead", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATemplateCharacter), &Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Dead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dead_MetaData), NewProp_Dead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRate_MetaData), NewProp_TurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemplateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_ControllerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Dead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_TurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateCharacter_Statics::NewProp_SprintSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATemplateCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OtusThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemplateCharacter_Statics::ClassParams = {
	&ATemplateCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATemplateCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemplateCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemplateCharacter()
{
	if (!Z_Registration_Info_UClass_ATemplateCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemplateCharacter.OuterSingleton, Z_Construct_UClass_ATemplateCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemplateCharacter.OuterSingleton;
}
template<> OTUSTHIRDPERSON_API UClass* StaticClass<ATemplateCharacter>()
{
	return ATemplateCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemplateCharacter);
ATemplateCharacter::~ATemplateCharacter() {}
// End Class ATemplateCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemplateCharacter, ATemplateCharacter::StaticClass, TEXT("ATemplateCharacter"), &Z_Registration_Info_UClass_ATemplateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemplateCharacter), 3047180314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_716303727(TEXT("/Script/OtusThirdPerson"),
	Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TemplateCharacter_TemplateCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
