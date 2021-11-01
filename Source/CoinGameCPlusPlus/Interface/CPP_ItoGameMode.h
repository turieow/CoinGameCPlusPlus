// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPP_ItoGameMode.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UCPP_ItoGameMode : public UInterface
{
	GENERATED_BODY()
	//GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class ICPP_ItoGameMode
{
	GENERATED_BODY()
	//GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void IAddCoin(int addCoin);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	int IGetMaxCoinNum();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	int IGetCoinNum();
};
