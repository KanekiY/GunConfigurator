// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunConfigurator/GunConfiguratorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunConfiguratorGameMode() {}
// Cross Module References
	GUNCONFIGURATOR_API UClass* Z_Construct_UClass_AGunConfiguratorGameMode_NoRegister();
	GUNCONFIGURATOR_API UClass* Z_Construct_UClass_AGunConfiguratorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GunConfigurator();
// End Cross Module References
	void AGunConfiguratorGameMode::StaticRegisterNativesAGunConfiguratorGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGunConfiguratorGameMode);
	UClass* Z_Construct_UClass_AGunConfiguratorGameMode_NoRegister()
	{
		return AGunConfiguratorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGunConfiguratorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunConfiguratorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunConfiguratorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GunConfiguratorGameMode.h" },
		{ "ModuleRelativePath", "GunConfiguratorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunConfiguratorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunConfiguratorGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunConfiguratorGameMode_Statics::ClassParams = {
		&AGunConfiguratorGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGunConfiguratorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunConfiguratorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunConfiguratorGameMode()
	{
		if (!Z_Registration_Info_UClass_AGunConfiguratorGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunConfiguratorGameMode.OuterSingleton, Z_Construct_UClass_AGunConfiguratorGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGunConfiguratorGameMode.OuterSingleton;
	}
	template<> GUNCONFIGURATOR_API UClass* StaticClass<AGunConfiguratorGameMode>()
	{
		return AGunConfiguratorGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunConfiguratorGameMode);
	struct Z_CompiledInDeferFile_FID_GunConfigurator_Source_GunConfigurator_GunConfiguratorGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunConfigurator_Source_GunConfigurator_GunConfiguratorGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGunConfiguratorGameMode, AGunConfiguratorGameMode::StaticClass, TEXT("AGunConfiguratorGameMode"), &Z_Registration_Info_UClass_AGunConfiguratorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunConfiguratorGameMode), 4186746686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunConfigurator_Source_GunConfigurator_GunConfiguratorGameMode_h_3481888273(TEXT("/Script/GunConfigurator"),
		Z_CompiledInDeferFile_FID_GunConfigurator_Source_GunConfigurator_GunConfiguratorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GunConfigurator_Source_GunConfigurator_GunConfiguratorGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
