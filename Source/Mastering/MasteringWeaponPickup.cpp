// Fill out your copyright notice in the Description page of Project Settings.


#include "MasteringWeaponPickup.h"

// Sets default values
AMasteringWeaponPickup::AMasteringWeaponPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMasteringWeaponPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasteringWeaponPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

