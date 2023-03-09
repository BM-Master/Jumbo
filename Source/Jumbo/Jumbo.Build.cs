// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Jumbo : ModuleRules
{
	public Jumbo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "OnlineSubsystem", "OnlineSubsystemUtils" });
	}
}
