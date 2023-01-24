class CfgPatches //class desc.
{
	class Gladius_UNSC_ODST
	{
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
class CfgVehicles
{
	class OPTRE_ONI_Researcher_Suitcase;
    class PHRP_Base_Hardcase: OPTRE_ONI_Researcher_Suitcase
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "PHRP Hardcase Base";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PHGear\data\armor\PHRP_Base_Hardcase.paa"};
		maximumLoad = 300;
	};
	class PHRP_Medic_Hardcase : PHRP_Base_Hardcase
	{
		author = "VorpalHotdog";
		displayName = "Corpsman Hardcase";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        hiddenSelectionsTextures[] = {"\PHGear\data\armor\PHRP_Medic_Hardcase.paa"};
        maximumLoad = 300;
	};
};