// Fill out your copyright notice in the Description page of Project Settings.


#include "MasteringWeapon.h"
#include "MasteringProjectile.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMasteringWeapon::AMasteringWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetOnlyOwnerSee(true);
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->CastShadow = false;
	WeaponMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMasteringWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasteringWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

