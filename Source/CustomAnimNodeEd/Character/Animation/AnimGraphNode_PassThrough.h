// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "CoinGameCPlusPlus\Character\Animation\AnimNode_PassThrough.h"
#include "AnimGraphNode_PassThrough.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMANIMNODEED_API UAnimGraphNode_PassThrough : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()

public:	// properties
	UPROPERTY(EditAnywhere, Category = Settings)
		FAnimNode_PassThrough Node;

public:
	//UAnimGraphNode_PassThrough(const FObjectInitializer& InObjectInitializer);

public:	// UEdGraphNode interfaces
	virtual FText GetNodeTitle(ENodeTitleType::Type InTitleType) const override;
};
