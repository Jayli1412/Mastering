// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "MasteringWeapon.h"
#include "MasteringProjectile.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMasteringWeapon::AMasteringWeapon()
{
 	// Create GunMesh Component
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetOnlyOwnerSee(true);
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->CastShadow = false;
	WeaponMesh->SetupAttachment(RootComponent);

	// Set MuzzleLoaction Class
	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	MuzzleLocation->SetupAttachment(WeaponMesh);
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

void AMasteringWeapon::Fire(FRotator ControlRotation, class UAnimInstance* AnimInst)
{
	//Check Projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FVector SpawnLocation = ((MuzzleLocation != nullptr) ? MuzzleLocation->GetComponentLocation() : GetActorLocation()) + ControlRotation.RotateVector(GunOffset);

			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			World->SpawnActor<AMasteringProjectile>(ProjectileClass, SpawnLocation, ControlRotation, ActorSpawnParams);
		}
	}
	// If set, play sound
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
	// If set, Play fire animation
	if (FireAnimation != nullptr)
	{
		// Load animation object of arm mesh
		if (AnimInst != nullptr)
		{
			AnimInst->Montage_Play(FireAnimation, 1.f);
		}
	}
}