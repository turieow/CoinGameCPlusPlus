// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomAnimNodeEd\Character/Animation/AnimGraphNode_PassThrough.h"

#define LOCTEXT_NAMESPACE "AnimGraphNode_PassThrough"

UAnimGraphNode_PassThrough::UAnimGraphNode_PassThrough(
	const FObjectInitializer& InObjectInitializer)
	: Super(InObjectInitializer)
{

}

FText UAnimGraphNode_PassThrough::GetNodeTitle(
	ENodeTitleType::Type InTitleType) const
{
	return LOCTEXT("AnimGraphNode_PassThrough", "Pass Through");
}

#undef LOCEXT_NAMESPACE

