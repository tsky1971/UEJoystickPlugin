// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    using System;
	using System.IO;

	public class JoystickPlugin : ModuleRules
	{
		private string ModulePath
		{
			get { return Path.GetDirectoryName(RulesCompiler.GetModuleFilename(this.GetType().Name)); }
		}

        private string ThirdPartyPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
        }

        private string BinariesPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../Binaries/")); }
        }

        private string IncludePathSDL2
        {
            get { return Path.GetFullPath(Path.Combine(ThirdPartyPath, "SDL2/SDL2", "include")); }
        }

        private string LibraryPathSDL2
        {
            get { return Path.GetFullPath(Path.Combine(ThirdPartyPath, "SDL2/SDL2", "Lib")); }
        }

		public JoystickPlugin(TargetInfo Target)
		{
			PublicIncludePaths.AddRange(
				new string[] {
                    "JoystickPlugin/Public",
					// ... add public include paths required here ...
				}
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"JoystickPlugin/Private",
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
                    "Engine",
                    "InputCore",
                    "Slate",
                    "SlateCore"
					// ... add other public dependencies that you statically link with here ...
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					// ... add private dependencies that you statically link with here ...
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);

			//LoadHydraLib(Target);

            //PublicIncludePaths.Add(UEBuildConfiguration.UEThirdPartySourceDirectory + "SDL");
            //PublicAdditionalLibraries.Add(UEBuildConfiguration.UEThirdPartySourceDirectory + "SDL/lib/x64/SDL.lib");

            //PublicIncludePaths.Add(UEBuildConfiguration.UEThirdPartySourceDirectory + "SDL2/SDL2/include");
            //PublicAdditionalLibraries.Add(UEBuildConfiguration.UEThirdPartySourceDirectory + "SDL2/SDL2/x64/SDL2.lib");
            //PublicAdditionalLibraries.Add(UEBuildConfiguration.UEThirdPartySourceDirectory + "SDL2/SDL2/lib/SDL2.lib");

            PublicIncludePaths.Add(IncludePathSDL2);
            PublicAdditionalLibraries.Add(Path.Combine(LibraryPathSDL2, "SDL2.lib"));

            //PublicAdditionalLibraries.Add("../../ThirdParty/SDL2/SDL2/lib/SDL2.lib");

            PublicDelayLoadDLLs.Add("SDL2.dll");
		}

		/*
		public bool LoadHydraLib(TargetInfo Target)
		{
			bool isLibrarySupported = false;

			if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
			{
				isLibrarySupported = true;

				string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x32";
				string LibrariesPath = Path.Combine(ThirdPartyPath, "Sixense", "Lib");

				//Lib based bind unsupported due to sixense wrong lib version compile, limiting platforms to windows 32/64
				//PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "sixense_s_" + PlatformString + ".lib"));
			}

			if (isLibrarySupported)
			{
				// Include path
				PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Sixense", "Include"));
			}

			//Definitions.Add(string.Format("WITH_HYDRA_BINDING={0}", isLibrarySupported ? 1 : 0));

			return isLibrarySupported;
		}*/


	}

}
