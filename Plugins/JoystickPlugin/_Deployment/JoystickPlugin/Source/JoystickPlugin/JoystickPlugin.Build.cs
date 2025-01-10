//

namespace UnrealBuildTool.Rules
{
	using System;
	using System.IO;
	using System.Collections.Generic;

	public class JoystickPlugin : ModuleRules
	{

		// UE does not copy third party dlls to the output directory automatically.
		// Link statically so you don't have to do it manually.
		// to be delete private bool LinkThirdPartyStaticallyOnWindows = false;

		//private string ModulePath
		//{
  //          get { return  ModuleDirectory; }
  //      }

  //      private string ThirdPartyPath
		//{
		//	get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
		//}

		//private string BinariesPath
		//{
		//	get { return Path.GetFullPath(Path.Combine(ModulePath, "../../Binaries/")); }
		//}

		public JoystickPlugin(ReadOnlyTargetRules Target) : base(Target)
		{
            bLegacyPublicIncludePaths = false;
            ShadowVariableWarningLevel = WarningLevel.Error;
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            DefaultBuildSettings = BuildSettingsVersion.V5;

            PublicDefinitions.Add("SDL_DEPRECATED=0");
            PublicDefinitions.Add("SDL_WITH_EPIC_EXTENSIONS=1");
            PrivatePCHHeaderFile = "Private/JoystickPluginPrivatePCH.h";

            PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore",
					"Slate",
					"SlateCore",
					// ... add other public dependencies that you statically link with here ...
                    "SDL3cglab"
                });

			PrivateIncludePathModuleNames.AddRange(
				new string[]
				{
					"InputDevice",
				});

			if (Target.Type == TargetRules.TargetType.Editor)
			{
				PrivateIncludePathModuleNames.AddRange(
					new string[]
					{
						"PropertyEditor",
						"ActorPickerMode",
						"DetailCustomizations",
					});

				PrivateDependencyModuleNames.AddRange(
					new string[]
					{
						"PropertyEditor",
						"DetailCustomizations",
						// ... add private dependencies that you statically link with here ...
					});
			}

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				});

		}
	}

}
