// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\UserWidget/CPP_GameClear.h"
#include "Components/TextBlock.h"

void UCPP_GameClear::NativeConstruct()
{
	Super::NativeConstruct();
	Tx_GameClear->SetText(FText::FromString("GameClear"));
}
