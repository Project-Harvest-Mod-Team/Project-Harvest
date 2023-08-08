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

class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class PHRP_onefour_vests
		{
			label = "2-1 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","chopper","coleson","kaker"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class chopper
				{
					label = "Chopper";
				};
				class coleson
				{
					label = "Coleson";
				};
				class kaker
				{
					label = "Kaker";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_twoone_Armor
		{
			model = "PHRP_onefour_vests";
			role = "default";
		};
		class PHRP_twoonemedic_Armor
		{
			model = "PHRP_onefour_vests";
			role = "corpsman";
		}; 
		class PHRP_chopper_Armor
		{
			model = "PHRP_onefour_vests";
			role = "chopper";
		};
		class PHRP_Coleson_Armor
		{
			model = "PHRP_onefour_vests";
			role = "coleson";
		};
		class PHRP_Kaker_Armor
		{
			model = "PHRP_onefour_vests";
			role = "kaker";
		};
	};
};
