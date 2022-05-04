class CfgPatches //class desc.
{
	class Project_Harvest_Music
	{
		name = "Project Harvest Music Pack";
		author = "Project Harvest Mod Team"; //name of author
		units[] = //attached units (leave blank)
		{
			
		};
		weapons[] = //attached weapons (leave blank)
		{
			
		};
		requiredVersion = 0.1; //artefact of arma, no clue what it is but has to stay 0.1
		requiredAddons[] =
		{
			"A3_Characters_F",
			"OPTRE_Core"
		};
	};
};
class CfgMusic
{
	#include "PHRPMusicTracks.hpp"
};
class CfgMusicClasses
{
	class PHRPMusic
	{
		displayName = "Project Harvest Music Pack";
	};
};