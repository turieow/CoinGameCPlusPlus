// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CoinGameCPlusPlusEditorTarget : TargetRules
{
	public CoinGameCPlusPlusEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] {
			"CoinGameCPlusPlus",
			// add extra modules down belos;
			"CustomAnimNodeEd"
		});
	}
}
