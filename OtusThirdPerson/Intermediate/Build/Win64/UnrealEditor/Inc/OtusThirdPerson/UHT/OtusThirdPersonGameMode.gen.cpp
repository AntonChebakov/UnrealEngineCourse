// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OtusThirdPerson/OtusThirdPersonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtusThirdPersonGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_AOtusThirdPersonGameMode();
OTUSTHIRDPERSON_API UClass* Z_Construct_UClass_AOtusThirdPersonGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OtusThirdPerson();
// End Cross Module References

// Begin Class AOtusThirdPersonGameMode
void AOtusThirdPersonGameMode::StaticRegisterNativesAOtusThirdPersonGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOtusThirdPersonGameMode);
UClass* Z_Construct_UClass_AOtusThirdPersonGameMode_NoRegister()
{
	return AOtusThirdPersonGameMode::StaticClass();
}
struct Z_Construct_UClass_AOtusThirdPersonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OtusThirdPersonGameMode.h" },
		{ "ModuleRelativePath", "OtusThirdPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtusThirdPersonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OtusThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::ClassParams = {
	&AOtusThirdPersonGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOtusThirdPersonGameMode()
{
	if (!Z_Registration_Info_UClass_AOtusThirdPersonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOtusThirdPersonGameMode.OuterSingleton, Z_Construct_UClass_AOtusThirdPersonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOtusThirdPersonGameMode.OuterSingleton;
}
template<> OTUSTHIRDPERSON_API UClass* StaticClass<AOtusThirdPersonGameMode>()
{
	return AOtusThirdPersonGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOtusThirdPersonGameMode);
AOtusThirdPersonGameMode::~AOtusThirdPersonGameMode() {}
// End Class AOtusThirdPersonGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_OtusThirdPersonGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOtusThirdPersonGameMode, AOtusThirdPersonGameMode::StaticClass, TEXT("AOtusThirdPersonGameMode"), &Z_Registration_Info_UClass_AOtusThirdPersonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOtusThirdPersonGameMode), 3439553795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_OtusThirdPersonGameMode_h_3636201003(TEXT("/Script/OtusThirdPerson"),
	Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_OtusThirdPersonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anton_UnrealEngineCourse_OtusThirdPerson_Source_OtusThirdPerson_OtusThirdPersonGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
