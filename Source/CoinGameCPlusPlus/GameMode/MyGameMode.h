// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CoinGameCPlusPlus\Interface/CPP_ItoGameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COINGAMECPLUSPLUS_API AMyGameMode : public AGameModeBase, public ICPP_ItoGameMode
{
	GENERATED_BODY()
	
public:	
	AMyGameMode();

public:
	virtual void BeginPlay() override;

	UFUNCTION()
	void AddCoin(int addNum);

public:
	UPROPERTY()
	int mMaxCoinNum = 0;

	UPROPERTY()
	int mCurrentCoinNum = 0;

	// interface function
public:
	virtual void IAddCoin_Implementation(int addCoin) override;
};
