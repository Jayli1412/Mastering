// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MasteringCharacter.h"
#include "StealthCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MASTERING_API AStealthCharacter : public AMasteringCharacter
{
	GENERATED_BODY()
public:
	/** 스텔스 모드 회전 및 피치에 관한 조정값*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float StealthPitchYawScale = 0.5f;
public:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void AddControllerPitchInput(float Val) override;
	virtual void AddControllerYawInput(float Val) override;

	void Stealth();
	void UnStealth();
protected:
	bool bIsStealthed = false;

};
