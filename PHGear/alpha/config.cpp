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
		class PHRP_Alpha_vests
		{
			label = "Alpha Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","raider","holland","riot","owessel","kaker"};
				class default
				{
					label = "Default";
					image = "";
				};
				class corpsman
				{
					label = "Corpsman";
					image = "";
				};
				class raider
				{
					label = "Raider";
					image = "";
				};
				class holland
				{
					label = "Holland";
					image = "";
				};
				class riot
				{
					label = "Riot";
					image = "";
				};
				class owessel
				{
					label = "Owessel";
					image = "";
				};
				class kaker
				{
					label = "Kaker";
					image = "";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Alpha_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "default";
		};
		class PHRP_Alpha_Medic_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "corpsman";
		};
		class PHRP_Holland_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "holland";
		};
		class PHRP_Raider_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "raider";
		};
		class PHRP_Owessel_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "owessel";
		};
		class PHRP_Riot_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "riot";
		};
		class PHRP_Kaker_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "kaker";
		};
	};
};
