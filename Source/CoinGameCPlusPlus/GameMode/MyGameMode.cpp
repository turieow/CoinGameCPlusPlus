// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus/GameMode/MyGameMode.h"

AMyGameMode::AMyGameMode()
	:Super()
{
	// Defaul PawnÇÉçÅ[ÉhÅEê›íË
	FString Path = "/Script/CoinGameCPlusPlus.MainPlayer";
	ConstructorHelpers::FObjectFinder<UClass> MainPlayerBP(*Path);
	TSubclassOf<AActor> MainPlayerActor = MainPlayerBP.Object;

	if (MainPlayerActor != nullptr)
	{
		DefaultPawnClass = MainPlayerActor;
	}
}