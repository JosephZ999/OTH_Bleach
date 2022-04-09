// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class OTH_Bleach : ModuleRules
{
	public OTH_Bleach(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Paper2D"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
            "OTH_Bleach/public/Heroes",
            "OTH_Bleach/public/Heroes/Water",
            "OTH_Bleach/public/Heroes/Fire",
            "OTH_Bleach/public/Heroes/Wind",
            "OTH_Bleach/public/Heroes/Earth",
            "OTH_Bleach/public/Heroes/Light",
            "OTH_Bleach/public/Heroes/Dark",
            "OTH_Bleach/public/System"
        });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
