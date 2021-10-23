// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CustomAnimNodeEd : ModuleRules
{
    public CustomAnimNodeEd(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore", 
			// add extra modules down below;
			"CoinGameCPlusPlus",	// FAnimNode_PassThrough (my code)
			"AnimGraph",	// UAnimGraphNode_Base
			"BlueprintGraph"	// UK2Node (base class of UAnimGraphNode_Base)
		});
    }
}
