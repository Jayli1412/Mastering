// Fill out your copyright notice in the Description page of Project Settings.


#include "MasteringInventory.h"
#include "MasteringCharacter.h"
#define UNLIMITED_AMMO -1

// Sets default values for this component's properties
UMasteringInventory::UMasteringInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MyOwner = Cast<AMasteringCharacter>(GetOwner());
	check(GetOwner() == nullptr || MyOwner != nullptr);

	// ...
}


// Called when the game starts
void UMasteringInventory::BeginPlay()
{
	Super::BeginPlay();

	if (DefaultWeapon != nullptr)
	{
		AddWeapon(DefaultWeapon, UNLIMITED_AMMO, 0);
	}
}
	
void UMasteringInventory::SelectBestWeapon()
{
	int highestWeaponPower = CurrentWeaponPower;
	TSubclassOf<class AMasteringWeapon> BestWeapon = nullptr;

	for (auto WeaponIt = WeaponsArray.CreateConstIterator(); WeaponIt; ++WeaponIt)
	{
		const FWeaponProperties& currentProps = *WeaponIt;

		if (currentProps.Ammo == 0)
		{
			continue;
		}
		if (currentProps.WeaponPower > highestWeaponPower)
		{
			highestWeaponPower = currentProps.WeaponPower;
			CurrentWeaponPower = highestWeaponPower;
			BestWeapon = currentProps.WeaponClass;
		}
	}
	if (BestWeapon != nullptr)
	{
		SelectWeapon(BestWeapon);
	}
}

void UMasteringInventory::SelectWeapon(TSubclassOf<class AMasteringWeapon> Weapon)
{
	MyOwner->EquipWeapon(Weapon);
}

void UMasteringInventory::AddWeapon(TSubclassOf<class AMasteringWeapon> Weapon, int AmmoCount, uint8 WeaponPower)
{
	for (auto WeaponIt = WeaponsArray.CreateIterator(); WeaponIt; ++WeaponIt)
	{
		FWeaponProperties &currentProps = *WeaponIt;
		if (currentProps.WeaponClass == Weapon)
		{
			checkSlow(AmmoCount >= 0);
			currentProps.Ammo += AmmoCount;
			return;
		}
	}
	FWeaponProperties weaponProps;
	weaponProps.WeaponClass = Weapon;
	weaponProps.WeaponPower = WeaponPower;
	weaponProps.Ammo = AmmoCount;
	WeaponsArray.Add(weaponProps);
}

void UMasteringInventory::ChangeAmmo(TSubclassOf<class AMasteringWeapon> Weapon, const int ChangeAmount)
{
	for (auto WeaponIt = WeaponsArray.CreateIterator(); WeaponIt; ++WeaponIt)
	{
		FWeaponProperties& currentProps = *WeaponIt;
		if (currentProps.WeaponClass == Weapon)
		{
			if (currentProps.Ammo == UNLIMITED_AMMO)
				return;
			currentProps.Ammo = FMath::Clamp(currentProps.Ammo + ChangeAmount, 0, 999);
			
			if (currentProps.Ammo == 0)
			{
				CurrentWeaponPower = -1;
				SelectBestWeapon();
			}
			return;
		}
	}
}

int UMasteringInventory::FindCurrentWeaponIndex() const
{
	int currentIndex = 0;
	for (auto WeaponIt = WeaponsArray.CreateConstIterator(); WeaponIt; ++currentIndex)
	{
		const FWeaponProperties& currentProps = *WeaponIt;
		if (currentProps.WeaponClass == CurrentWeapon)
			break;
	}
	checkSlow(currentIndex < WeaponsArray.Num());
	return currentIndex;
}

void UMasteringInventory::SelectNextWeapon()
{
	int currentIndex = FindCurrentWeaponIndex();
	if (currentIndex == WeaponsArray.Num() - 1)
	{
		SelectWeapon(WeaponsArray[0].WeaponClass);
	}
	else
	{
		SelectWeapon(WeaponsArray[currentIndex + 1].WeaponClass);
	}
}

void UMasteringInventory::SelectPreviousWeapon()
{
	int currentIndex = FindCurrentWeaponIndex();
	if (currentIndex > 0)
	{
		SelectWeapon(WeaponsArray[currentIndex - 1].WeaponClass);
	}
	else
	{
		SelectWeapon(WeaponsArray[WeaponsArray.Num() - 1].WeaponClass);
	}
}
