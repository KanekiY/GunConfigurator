// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GunConfigurator : ModuleRules
{
	public GunConfigurator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
