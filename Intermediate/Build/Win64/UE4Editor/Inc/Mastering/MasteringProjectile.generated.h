// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MASTERING_MasteringProjectile_generated_h
#error "MasteringProjectile.generated.h already included, missing '#pragma once' in MasteringProjectile.h"
#endif
#define MASTERING_MasteringProjectile_generated_h

#define Mastering_Source_Mastering_MasteringProjectile_h_15_SPARSE_DATA
#define Mastering_Source_Mastering_MasteringProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Mastering_Source_Mastering_MasteringProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Mastering_Source_Mastering_MasteringProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasteringProjectile(); \
	friend struct Z_Construct_UClass_AMasteringProjectile_Statics; \
public: \
	DECLARE_CLASS(AMasteringProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mastering"), NO_API) \
	DECLARE_SERIALIZER(AMasteringProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Mastering_Source_Mastering_MasteringProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMasteringProjectile(); \
	friend struct Z_Construct_UClass_AMasteringProjectile_Statics; \
public: \
	DECLARE_CLASS(AMasteringProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mastering"), NO_API) \
	DECLARE_SERIALIZER(AMasteringProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Mastering_Source_Mastering_MasteringProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasteringProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasteringProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasteringProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasteringProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasteringProjectile(AMasteringProjectile&&); \
	NO_API AMasteringProjectile(const AMasteringProjectile&); \
public:


#define Mastering_Source_Mastering_MasteringProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasteringProjectile(AMasteringProjectile&&); \
	NO_API AMasteringProjectile(const AMasteringProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasteringProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasteringProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasteringProjectile)


#define Mastering_Source_Mastering_MasteringProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMasteringProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMasteringProjectile, ProjectileMovement); }


#define Mastering_Source_Mastering_MasteringProjectile_h_12_PROLOG
#define Mastering_Source_Mastering_MasteringProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mastering_Source_Mastering_MasteringProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Mastering_Source_Mastering_MasteringProjectile_h_15_SPARSE_DATA \
	Mastering_Source_Mastering_MasteringProjectile_h_15_RPC_WRAPPERS \
	Mastering_Source_Mastering_MasteringProjectile_h_15_INCLASS \
	Mastering_Source_Mastering_MasteringProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mastering_Source_Mastering_MasteringProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mastering_Source_Mastering_MasteringProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Mastering_Source_Mastering_MasteringProjectile_h_15_SPARSE_DATA \
	Mastering_Source_Mastering_MasteringProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mastering_Source_Mastering_MasteringProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Mastering_Source_Mastering_MasteringProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASTERING_API UClass* StaticClass<class AMasteringProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mastering_Source_Mastering_MasteringProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
