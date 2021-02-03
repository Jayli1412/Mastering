// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mastering/MasteringWeaponPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasteringWeaponPickup() {}
// Cross Module References
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeaponPickup_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeaponPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mastering();
// End Cross Module References
	void AMasteringWeaponPickup::StaticRegisterNativesAMasteringWeaponPickup()
	{
	}
	UClass* Z_Construct_UClass_AMasteringWeaponPickup_NoRegister()
	{
		return AMasteringWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AMasteringWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasteringWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MasteringWeaponPickup.h" },
		{ "ModuleRelativePath", "MasteringWeaponPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasteringWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasteringWeaponPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::ClassParams = {
		&AMasteringWeaponPickup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMasteringWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasteringWeaponPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMasteringWeaponPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMasteringWeaponPickup, 2565875434);
	template<> MASTERING_API UClass* StaticClass<AMasteringWeaponPickup>()
	{
		return AMasteringWeaponPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMasteringWeaponPickup(Z_Construct_UClass_AMasteringWeaponPickup, &AMasteringWeaponPickup::StaticClass, TEXT("/Script/Mastering"), TEXT("AMasteringWeaponPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasteringWeaponPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
