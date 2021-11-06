// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\UserWidget/CPP_ScoreUI.h"
#include "Components/Image.h"
#include "Engine/World.h"   
#include "GameFramework/GameModeBase.h"
#include "CoinGameCPlusPlus\Interface/CPP_ItoGameMode.h"
#include "Components/TextBlock.h"

// 初期化処理
void UCPP_ScoreUI::NativeConstruct()
{
	Super::NativeConstruct();

	UE_LOG(LogTemp, Log, TEXT("ScoreUI"));

	check(this->Tx_Score);	
	FString String(TEXT("aiueo"));
	this->Tx_Score->SetText(FText::FromString(""));

	Tx_Score->TextDelegate.BindUFunction(this, "SetScoreText");
}

// 更新処理
void UCPP_ScoreUI::NativeTick(const FGeometry& g, float InDeltaTime)
{
	Super::NativeTick(g, InDeltaTime);

	Tx_Score->SetText(SetScoreText());
}

// コイン数を表示
FText UCPP_ScoreUI::SetScoreText()
{
	int maxCoinNum = 0;
	int currentCoinNum = 0;
	auto gameModeBase = GetWorld()->GetAuthGameMode<AGameModeBase>();	

	if (gameModeBase->GetClass()->ImplementsInterface(UCPP_ItoGameMode::StaticClass()))
	{
		maxCoinNum = ICPP_ItoGameMode::Execute_IGetMaxCoinNum(gameModeBase);
		currentCoinNum = ICPP_ItoGameMode::Execute_IGetCoinNum(gameModeBase);
	}

	FText text = FText::FromString(FString::FromInt(currentCoinNum) + " / " + FString::FromInt(maxCoinNum));
	return text;
}

