// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasteringWeapon.generated.h"

UCLASS()
class MASTERING_API AMasteringWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMasteringWeapon();

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset = FVector(100.0f, 0.0f, 10.0f);

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AMasteringProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* FireAnimation;

	// Muzzle offset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectiles)
	class USceneComponent* MuzzleLocation;

	/** Our weapon skeletal mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USkeletalMeshComponent* WeaponMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// Fire Weapon
	void Fire(FRotator ControlRotation, class UAnimInstance* AnimInst, class UMasteringInventory* Inventory);
};
