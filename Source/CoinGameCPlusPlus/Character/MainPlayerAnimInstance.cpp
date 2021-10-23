// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\Character/MainPlayerAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"

UMainPlayerAnimInstance::UMainPlayerAnimInstance()
	:Super()
{

}

void UMainPlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	APawn* owner = TryGetPawnOwner();
	if (!owner)
	{
		return;
	}	

	Speed = owner->GetVelocity().Size();
	IsinAir = owner->GetMovementComponent()->IsFalling();
}
