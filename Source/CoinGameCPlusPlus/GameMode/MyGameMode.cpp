// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus/GameMode/MyGameMode.h"

AMyGameMode::AMyGameMode()
	:Super()
{
	// Defaul Pawn�����[�h�E�ݒ�
	FString Path = "/Script/CoinGameCPlusPlus.MainPlayer";
	ConstructorHelpers::FObjectFinder<UClass> MainPlayerBP(*Path);
	TSubclassOf<AActor> MainPlayerActor = MainPlayerBP.Object;

	if (MainPlayerActor != nullptr)
	{
		DefaultPawnClass = MainPlayerActor;
	}
}