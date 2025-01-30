// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OtusThirdPerson/TestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_ATestActor();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_OtusThirdPerson();
// End Cross Module References

// Begin Class ATestActor Function GetSelectedActorLocation
struct Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics
{
	struct TestActor_eventGetSelectedActorLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestActor_eventGetSelectedActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "GetSelectedActorLocation", nullptr, nullptr, Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::TestActor_eventGetSelectedActorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::TestActor_eventGetSelectedActorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestActor_GetSelectedActorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_GetSelectedActorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestActor::execGetSelectedActorLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSelectedActorLocation();
	P_NATIVE_END;
}
// End Class ATestActor Function GetSelectedActorLocation

// Begin Class ATestActor
void ATestActor::StaticRegisterNativesATestActor()
{
	UClass* Class = ATestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSelectedActorLocation", &ATestActor::execGetSelectedActorLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActor);
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::StaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TestActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_GetSelectedActorLocation, "GetSelectedActorLocation" }, // 3001117544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedActor_MetaData), NewProp_SelectedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_SelectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OtusThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
template<> OTUSTHIRDPERSON_API UClass* StaticClass<ATestActor>()
{
	return ATestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
ATestActor::~ATestActor() {}
// End Class ATestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 4131451639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TestActor_h_3733683376(TEXT("/Script/OtusThirdPerson"),
	Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_5_5_Source_OtusThirdPerson_TestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
