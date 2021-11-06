// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\Character/CPP_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CoinGameCPlusPlus\UserWidget/CPP_ScoreUI.h"

void ACPP_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	TSubclassOf<UUserWidget> widgetClass;

	if (IsValid(widgetClass))
	{
		mScoreWidget = Cast<UCPP_ScoreUI>(CreateWidget(this, widgetClass));

		if (mScoreWidget != nullptr)
		{
			mScoreWidget->AddToViewport();
		}
	}
}

