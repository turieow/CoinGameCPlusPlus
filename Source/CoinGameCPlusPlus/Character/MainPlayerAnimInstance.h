// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainPlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class COINGAMECPLUSPLUS_API UMainPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UMainPlayerAnimInstance();
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Edit")
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Edit")
	bool IsinAir;

public:
	virtual void NativeUpdateAnimation(float DeltaTime) override;
};
