// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MasteringInventory.generated.h"

UStruct()
struct FWeaponProperties
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY()
	TSubclassOf<class AMasteringWeapon> WeaponClass;

	UPROPERTY()
	int WeaponPower;

	UPROPERTY()
	int Ammo;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MASTERING_API UMasteringInventory : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMasteringInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AMasteringWeapon> DefaultWeapon; //Select best weapon in list
	void SelectBestWeapon(class AMasteringCharacter* Player);

	//Select weapon from inventory
	void SelectWeapon(class AMasteringCharacter* Player, TSubclassOf<class AMasteringWeapon> Weapon);

	// Add weapon to weapon list
	void AddWeapon(TSubclassOf<class AMasteringWeapon> Weapon);

	// Add Default weapon
	void AddDefaultWeapon();

	//Load weapon selected
	FORCEINLINE TSubclassOf<class AMasteringWeapon> GetCurruntWeapon() const { return CurrentWeapon; }

protected:
	TArray<TSubclassOf<class AMasteringWeapon> > WeaponsArray;
	TSubclassOf<class AMasteringWeapon> CurrentWeapon;
};
