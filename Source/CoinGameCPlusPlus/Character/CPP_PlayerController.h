// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COINGAMECPLUSPLUS_API ACPP_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

protected:
	/*UPROPERTY(EditAnywhere, Category = "Class Types")
	TSubclassOf<class UUserWidget> mWidgetClass;*/

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	class UCPP_ScoreUI* mScoreWidget;
};
