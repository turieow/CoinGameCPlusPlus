// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_ScoreUI.generated.h"

/**
 * 
 */
UCLASS()
class COINGAMECPLUSPLUS_API UCPP_ScoreUI : public UUserWidget
{
	GENERATED_BODY()

public:
	//UCPP_ScoreUI();

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry&, float) override;

public:
	UFUNCTION()
	FText SetScoreText();

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* Tx_Score = nullptr;
};
