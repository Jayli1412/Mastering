// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mastering/MasteringHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasteringHUD() {}
// Cross Module References
	MASTERING_API UClass* Z_Construct_UClass_AMasteringHUD_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Mastering();
// End Cross Module References
	void AMasteringHUD::StaticRegisterNativesAMasteringHUD()
	{
	}
	UClass* Z_Construct_UClass_AMasteringHUD_NoRegister()
	{
		return AMasteringHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMasteringHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasteringHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MasteringHUD.h" },
		{ "ModuleRelativePath", "MasteringHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasteringHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasteringHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMasteringHUD_Statics::ClassParams = {
		&AMasteringHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMasteringHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasteringHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMasteringHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMasteringHUD, 1750964141);
	template<> MASTERING_API UClass* StaticClass<AMasteringHUD>()
	{
		return AMasteringHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMasteringHUD(Z_Construct_UClass_AMasteringHUD, &AMasteringHUD::StaticClass, TEXT("/Script/Mastering"), TEXT("AMasteringHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasteringHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
