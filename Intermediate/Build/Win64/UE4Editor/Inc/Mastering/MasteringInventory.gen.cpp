// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mastering/MasteringInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasteringInventory() {}
// Cross Module References
	MASTERING_API UClass* Z_Construct_UClass_UMasteringInventory_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_UMasteringInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mastering();
// End Cross Module References
	void UMasteringInventory::StaticRegisterNativesUMasteringInventory()
	{
	}
	UClass* Z_Construct_UClass_UMasteringInventory_NoRegister()
	{
		return UMasteringInventory::StaticClass();
	}
	struct Z_Construct_UClass_UMasteringInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMasteringInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasteringInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MasteringInventory.h" },
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMasteringInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasteringInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMasteringInventory_Statics::ClassParams = {
		&UMasteringInventory::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMasteringInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMasteringInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMasteringInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMasteringInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMasteringInventory, 814101784);
	template<> MASTERING_API UClass* StaticClass<UMasteringInventory>()
	{
		return UMasteringInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMasteringInventory(Z_Construct_UClass_UMasteringInventory, &UMasteringInventory::StaticClass, TEXT("/Script/Mastering"), TEXT("UMasteringInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMasteringInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
