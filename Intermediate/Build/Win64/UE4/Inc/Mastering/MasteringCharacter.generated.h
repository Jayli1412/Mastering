// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASTERING_MasteringCharacter_generated_h
#error "MasteringCharacter.generated.h already included, missing '#pragma once' in MasteringCharacter.h"
#endif
#define MASTERING_MasteringCharacter_generated_h

#define Mastering_Source_Mastering_MasteringCharacter_h_20_SPARSE_DATA
#define Mastering_Source_Mastering_MasteringCharacter_h_20_RPC_WRAPPERS
#define Mastering_Source_Mastering_MasteringCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Mastering_Source_Mastering_MasteringCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasteringCharacter(); \
	friend struct Z_Construct_UClass_AMasteringCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasteringCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mastering"), NO_API) \
	DECLARE_SERIALIZER(AMasteringCharacter)


#define Mastering_Source_Mastering_MasteringCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMasteringCharacter(); \
	friend struct Z_Construct_UClass_AMasteringCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasteringCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mastering"), NO_API) \
	DECLARE_SERIALIZER(AMasteringCharacter)


#define Mastering_Source_Mastering_MasteringCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasteringCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasteringCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasteringCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasteringCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasteringCharacter(AMasteringCharacter&&); \
	NO_API AMasteringCharacter(const AMasteringCharacter&); \
public:


#define Mastering_Source_Mastering_MasteringCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasteringCharacter(AMasteringCharacter&&); \
	NO_API AMasteringCharacter(const AMasteringCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasteringCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasteringCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasteringCharacter)


#define Mastering_Source_Mastering_MasteringCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMasteringCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMasteringCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMasteringCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMasteringCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMasteringCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMasteringCharacter, L_MotionController); }


#define Mastering_Source_Mastering_MasteringCharacter_h_17_PROLOG
#define Mastering_Source_Mastering_MasteringCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mastering_Source_Mastering_MasteringCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Mastering_Source_Mastering_MasteringCharacter_h_20_SPARSE_DATA \
	Mastering_Source_Mastering_MasteringCharacter_h_20_RPC_WRAPPERS \
	Mastering_Source_Mastering_MasteringCharacter_h_20_INCLASS \
	Mastering_Source_Mastering_MasteringCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mastering_Source_Mastering_MasteringCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mastering_Source_Mastering_MasteringCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Mastering_Source_Mastering_MasteringCharacter_h_20_SPARSE_DATA \
	Mastering_Source_Mastering_MasteringCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Mastering_Source_Mastering_MasteringCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Mastering_Source_Mastering_MasteringCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASTERING_API UClass* StaticClass<class AMasteringCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mastering_Source_Mastering_MasteringCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
