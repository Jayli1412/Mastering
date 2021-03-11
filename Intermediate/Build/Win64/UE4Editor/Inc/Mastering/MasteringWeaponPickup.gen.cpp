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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringWeapon_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "MasteringWeaponPickup" },
		{ "ModuleRelativePath", "MasteringWeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasteringWeaponPickup, WeaponClass), Z_Construct_UClass_AMasteringWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//The rotation speed of item on ground\n" },
		{ "ModuleRelativePath", "MasteringWeaponPickup.h" },
		{ "ToolTip", "The rotation speed of item on ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasteringWeaponPickup, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Count of ammo given when picking up weapon\n" },
		{ "ModuleRelativePath", "MasteringWeaponPickup.h" },
		{ "ToolTip", "Count of ammo given when picking up weapon" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_Ammunition = { "Ammunition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasteringWeaponPickup, Ammunition), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_Ammunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_Ammunition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponPower_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Power of weapon\n" },
		{ "ModuleRelativePath", "MasteringWeaponPickup.h" },
		{ "ToolTip", "Power of weapon" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponPower = { "WeaponPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasteringWeaponPickup, WeaponPower), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasteringWeaponPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_Ammunition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasteringWeaponPickup_Statics::NewProp_WeaponPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasteringWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasteringWeaponPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMasteringWeaponPickup_Statics::ClassParams = {
		&AMasteringWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasteringWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasteringWeaponPickup_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMasteringWeaponPickup, 1238879098);
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
