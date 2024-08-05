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
		class PHRP_hoplite_vests
		{
			label = "Hoplite Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56S","M56S_corpsman","M56R","M56R_corpsman","morningstar"};
				class M56S
				{
					label = "M56S";
				};
				class M56S_corpsman
				{
					label = "M56S-C";
				};
				class M56R
				{
					label = "M56R";
				};
				class M56R_corpsman
				{
					label = "M56R-C";
				};
				class morningstar
				{
					label = "Morningstar";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_hopliteM56S_Armor
		{
			model = "PHRP_hoplite_vests";
			role = "M56S";
		};
		class PHRP_hopliteM56Smedic_Armor
		{
			model = "PHRP_hoplite_vests";
			role = "M56S_corpsman";
		};
		class PHRP_hopliteM56R_Armor
		{
			model = "PHRP_hoplite_vests";
			role = "M56R";
		};
		class PHRP_hopliteM56Rmedic_Armor
		{
			model = "PHRP_hoplite_vests";
			role = "M56R_corpsman";
		};
		class PHRP_Morningstar_M56S_Armor
		{
			model = "PHRP_hoplite_vests";
			role = "morningstar";
		};
	};
};
