// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OtusThirdPerson : ModuleRules
{
	public OtusThirdPerson(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule" });
		PrivateDependencyModuleNames.AddRange(new string[] {"Slate", "SlateCore", "EditorSubsystem", "UnrealEd"});
	}
}
