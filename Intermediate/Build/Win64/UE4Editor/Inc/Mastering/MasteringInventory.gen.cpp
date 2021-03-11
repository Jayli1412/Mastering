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
	MASTERING_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties();
	UPackage* Z_Construct_UPackage__Script_Mastering();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeapon_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_UMasteringInventory_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_UMasteringInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FWeaponProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MASTERING_API uint32 Get_Z_Construct_UScriptStruct_FWeaponProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponProperties, Z_Construct_UPackage__Script_Mastering(), TEXT("WeaponProperties"), sizeof(FWeaponProperties), Get_Z_Construct_UScriptStruct_FWeaponProperties_Hash());
	}
	return Singleton;
}
template<> MASTERING_API UScriptStruct* StaticStruct<FWeaponProperties>()
{
	return FWeaponProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponProperties(FWeaponProperties::StaticStruct, TEXT("/Script/Mastering"), TEXT("WeaponProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Mastering_StaticRegisterNativesFWeaponProperties
{
	FScriptStruct_Mastering_StaticRegisterNativesFWeaponProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponProperties")),new UScriptStruct::TCppStructOps<FWeaponProperties>);
	}
} ScriptStruct_Mastering_StaticRegisterNativesFWeaponProperties;
	struct Z_Construct_UScriptStruct_FWeaponProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WeaponPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, WeaponClass), Z_Construct_UClass_AMasteringWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponPower_MetaData[] = {
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponPower = { "WeaponPower", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, WeaponPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData[] = {
		{ "ModuleRelativePath", "MasteringInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, Ammo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
		nullptr,
		&NewStructOps,
		"WeaponProperties",
		sizeof(FWeaponProperties),
		alignof(FWeaponProperties),
		Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mastering();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponProperties"), sizeof(FWeaponProperties), Get_Z_Construct_UScriptStruct_FWeaponProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponProperties_Hash() { return 2473693294U; }
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
