// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class SDL3cglab : ModuleRules
{
	public string GetUProjectPath()
	{
		return Path.Combine(ModuleDirectory, "../../../../..");
	}

	private string CopyToProjectBinaries(string Filepath, ReadOnlyTargetRules Target)
	{
		string BinariesDir = Path.Combine(GetUProjectPath(), "Binaries", Target.Platform.ToString());
		string Filename = Path.GetFileName(Filepath);

		//convert relative path 
		string FullBinariesDir = Path.GetFullPath(BinariesDir);

		if (!Directory.Exists(FullBinariesDir))
		{
			Directory.CreateDirectory(FullBinariesDir);
		}

		string FullExistingPath = Path.Combine(FullBinariesDir, Filename);
		bool ValidFile = false;

		//File exists, check if they're the same
		if (File.Exists(FullExistingPath))
		{
			ValidFile = true;
		}

		//No valid existing file found, copy new dll
		if (!ValidFile)
		{
			File.Copy(Filepath, Path.Combine(FullBinariesDir, Filename), true);
		}
		return FullExistingPath;
	}
	
	public SDL3cglab(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        PublicDefinitions.Add("SDL_STATIC=1");
        PublicDefinitions.Add("SDL_SHARED=0");
        PublicDefinitions.Add("EPIC_EXTENSIONS=1");
        PublicDefinitions.Add("SDL_WITH_EPIC_EXTENSIONS=1");        

        string includePath = Path.Combine(ModuleDirectory, "include");
        System.Console.WriteLine("add include for SDL3: " + includePath);
        string includePathSDL3 = Path.Combine(ModuleDirectory, "include", "SDL3");
        System.Console.WriteLine("add include for SDL3 direct: " + includePathSDL3);

        PublicSystemIncludePaths.AddRange(new string[] { includePath, includePathSDL3 });        
        PublicIncludePaths.AddRange(new string[] { includePath, includePathSDL3 });

        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "SDL3.lib"));		
            PublicDelayLoadDLLs.Add("SDL3.dll");
        }
        
		string pluginDLLPath = Path.Combine(ModuleDirectory, "bin", "SDL3.dll");
		string binariesPath = CopyToProjectBinaries(pluginDLLPath, Target);
		System.Console.WriteLine("Using SDL3 DLL: " + binariesPath);
		RuntimeDependencies.Add(binariesPath);   
    }
}
