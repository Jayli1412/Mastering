// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mastering/StealthCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthCharacter() {}
// Cross Module References
	MASTERING_API UClass* Z_Construct_UClass_AStealthCharacter_NoRegister();
	MASTERING_API UClass* Z_Construct_UClass_AStealthCharacter();
	MASTERING_API UClass* Z_Construct_UClass_AMasteringCharacter();
	UPackage* Z_Construct_UPackage__Script_Mastering();
// End Cross Module References
	void AStealthCharacter::StaticRegisterNativesAStealthCharacter()
	{
	}
	UClass* Z_Construct_UClass_AStealthCharacter_NoRegister()
	{
		return AStealthCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStealthCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthPitchYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthPitchYawScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMasteringCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mastering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StealthCharacter.h" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_StealthPitchYawScale_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** ???\xda\xbd? ???? \xc8\xb8?? ?? ??\xc4\xa1?? ???? ??????*/" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
		{ "ToolTip", "???\xda\xbd? ???? \xc8\xb8?? ?? ??\xc4\xa1?? ???? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_StealthPitchYawScale = { "StealthPitchYawScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, StealthPitchYawScale), METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_StealthPitchYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_StealthPitchYawScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_StealthPitchYawScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthCharacter_Statics::ClassParams = {
		&AStealthCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStealthCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthCharacter, 1923278997);
	template<> MASTERING_API UClass* StaticClass<AStealthCharacter>()
	{
		return AStealthCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthCharacter(Z_Construct_UClass_AStealthCharacter, &AStealthCharacter::StaticClass, TEXT("/Script/Mastering"), TEXT("AStealthCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
