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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeapon_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasteringInventory_Statics::NewProp_DefaultWeapon_MetaData[] = {
		{ "Category", "MasteringInventory" },
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMasteringInventory_Statics::NewProp_DefaultWeapon = { "DefaultWeapon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMasteringInventory, DefaultWeapon), Z_Construct_UClass_AMasteringWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMasteringInventory_Statics::NewProp_DefaultWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMasteringInventory_Statics::NewProp_DefaultWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMasteringInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasteringInventory_Statics::NewProp_DefaultWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMasteringInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasteringInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMasteringInventory_Statics::ClassParams = {
		&UMasteringInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMasteringInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMasteringInventory_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UMasteringInventory, 1756546805);
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
