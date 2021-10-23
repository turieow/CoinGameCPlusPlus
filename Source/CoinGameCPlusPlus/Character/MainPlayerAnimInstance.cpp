// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\Character/MainPlayerAnimInstance.h"

UMainPlayerAnimInstance::UMainPlayerAnimInstance()
	:Super()
{

}

void UMainPlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	if (TryGetPawnOwner())
	{
		Speed = TryGetPawnOwner()->GetVelocity().Size();
	}	
}
