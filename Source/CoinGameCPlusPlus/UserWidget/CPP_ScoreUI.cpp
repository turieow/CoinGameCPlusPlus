// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\UserWidget/CPP_ScoreUI.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

//UCPP_ScoreUI::UCPP_ScoreUI()
//{
//	FString String(TEXT("aiueo"));
//	this->Tx_Score->SetText(FText::FromString(String));
//
//	Tx_Score->TextDelegate.BindUFunction(this, "SetScoreText");
//}

void UCPP_ScoreUI::NativeConstruct()
{
	Super::NativeConstruct();

	check(this->Tx_Score);	
	FString String(TEXT("aiueo"));
	this->Tx_Score->SetText(FText::FromString(String));

	Tx_Score->TextDelegate.BindUFunction(this, "SetScoreText");
}

void UCPP_ScoreUI::NativeTick(const FGeometry& g, float InDeltaTime)
{
	Super::NativeTick(g, InDeltaTime);
}

FText UCPP_ScoreUI::SetScoreText()
{
	const int score = 5;
	FText text = FText::FromString(FString::FromInt(score));
	return text;
}

