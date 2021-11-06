// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus/GameMode/MyGameMode.h"
#include "CoinGameCPlusPlus\Object/CPP_Coin.h"
#include "CoinGameCPlusPlus\GameState/MyGameState.h"
#include "Kismet/GameplayStatics.h"

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

	// GameStateê›íË
	FString gameStatePath = "/Script/CoinGameCPlusPlus.MyGameState";
	ConstructorHelpers::FObjectFinder<UClass> gameStateCPP(*gameStatePath);
	TSubclassOf<AMyGameState> gameStateObj = gameStateCPP.Object;

	if (gameStateObj != nullptr)
	{
		GameStateClass = gameStateObj;
	}

	// PlayerControllerê›íË
	FString playerControllerPath = "/Script/CoinGameCPlusPlus.CPP_PlayerController";
	ConstructorHelpers::FObjectFinder<UClass> playerControllerCPP(*playerControllerPath);
	TSubclassOf<APlayerController> playercontrollerObj = playerControllerCPP.Object;

	if (playercontrollerObj != nullptr)
	{
		PlayerControllerClass = playercontrollerObj;
	}
}

void AMyGameMode::BeginPlay()
{
	TSubclassOf<ACPP_Coin> coinClass = ACPP_Coin::StaticClass();;
	TArray<AActor*> allCoins;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), coinClass, allCoins);
	mMaxCoinNum = allCoins.Num();
}

void AMyGameMode::AddCoin(int addNum)
{
	mCurrentCoinNum += addNum;

	if (mCurrentCoinNum >= mMaxCoinNum)
	{

	}
}

void AMyGameMode::IAddCoin_Implementation(int addNum)
{
	this->AddCoin(addNum);
}

int AMyGameMode::IGetMaxCoinNum_Implementation()
{
	return mMaxCoinNum;
}

int AMyGameMode::IGetCoinNum_Implementation()
{
	return mCurrentCoinNum;
}