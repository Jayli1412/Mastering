// Fill out your copyright notice in the Description page of Project Settings.


#include "MasteringInventory.h"
#include "MasteringCharacter.h"

// Sets default values for this component's properties
UMasteringInventory::UMasteringInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMasteringInventory::BeginPlay()
{
	Super::BeginPlay();

	if (DefaultWeapon != nullptr)
	{
		AddWeapon(DefaultWeapon);
	}
}
	
void UMasteringInventory::SelectBestWeapon(class AMasteringCharacter* Player)
{
	for (auto WeaponIt = WeaponsArray.CreateIterator(); WeaponIt; ++WeaponIt)
	{
		//To do: Add Rule to Select Weapon
		{
			SelectWeapon(Player, *WeaponIt);
			break;
		}
	}
}

void UMasteringInventory::SelectWeapon(class AMasteringCharacter *Player, TSubclassOf<class AMasteringWeapon> Weapon)
{
	Player->EquipWeapon(Weapon);
}

void UMasteringInventory::AddWeapon(TSubclassOf<class AMasteringWeapon> Weapon)
{
	WeaponsArray.AddUnique(Weapon);
}