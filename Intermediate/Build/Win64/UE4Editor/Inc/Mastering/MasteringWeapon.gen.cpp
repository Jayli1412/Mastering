// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mastering/MasteringWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasteringWeapon() {}
// Cross Module References
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeapon_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mastering();
// End Cross Module References
	void AMasteringWeapon::StaticRegisterNativesAMasteringWeapon()
	{
	}
	UClass* Z_Construct_UClass_AMasteringWeapon_NoRegister()
	{
		return AMasteringWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMasteringWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasteringWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MasteringWeapon.h" },
		{ "ModuleRelativePath", "MasteringWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasteringWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasteringWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMasteringWeapon_Statics::ClassParams = {
		&AMasteringWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasteringWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasteringWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMasteringWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMasteringWeapon, 2968951473);
	template<> MASTERING_API UClass* StaticClass<AMasteringWeapon>()
	{
		return AMasteringWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMasteringWeapon(Z_Construct_UClass_AMasteringWeapon, &AMasteringWeapon::StaticClass, TEXT("/Script/Mastering"), TEXT("AMasteringWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasteringWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
