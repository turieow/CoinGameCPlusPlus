// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_GameClear.generated.h"

/**
 * 
 */
UCLASS()
class COINGAMECPLUSPLUS_API UCPP_GameClear : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* Tx_GameClear = nullptr;
};
