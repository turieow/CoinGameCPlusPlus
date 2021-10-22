#include "CoinGameCPlusPlus\Character\Animation\AnimNode_PassThrough.h"

void FAnimNode_PassThrough::Initialize_AnyThread(
	const FAnimationInitializeContext& InContext)
{
	FAnimNode_Base::Initialize_AnyThread(InContext);
	SourcePose.Initialize(InContext);
}

void FAnimNode_PassThrough::CacheBones_AnyThread(
	const FAnimationCacheBonesContext& InContext)
{
	SourcePose.CacheBones(InContext);
}

void FAnimNode_PassThrough::Update_AnyThread(
	const FAnimationUpdateContext& InContext)
{
	SourcePose.Update(InContext);
}

void FAnimNode_PassThrough::Evaluate_AnyThread(
	FPoseContext& Output)
{
	SourcePose.Evaluate(Output);
}