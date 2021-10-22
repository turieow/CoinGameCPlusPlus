#pragma once

#include "Animation/AnimNodeBase.h"	// FAnimNode_Base (module: Engine)
#include "AnimNode_PassThrough.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct COINGAMECPLUSPLUS_API FAnimNode_PassThrough : public FAnimNode_Base
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
        FPoseLink SourcePose;

public: // ctors
    FAnimNode_PassThrough() {}

public: // FAnimNode_Base interfaces
    virtual void Initialize_AnyThread(const FAnimationInitializeContext& InContext) override;
    virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& InContext) override;
    virtual void Update_AnyThread(const FAnimationUpdateContext& InContext) override;
    virtual void Evaluate_AnyThread(FPoseContext& Output) override;
};