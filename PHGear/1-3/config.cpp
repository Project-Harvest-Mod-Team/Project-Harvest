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
		class PHRP_onethree_vests
		{
			label = "1-3 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56S","M56S_corpsman","M56R","M56R_corpsman","buckley","morningstar","lancer","griffith","fitz"};
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
				class buckley
				{
					label = "Buckley";
				};
				class morningstar
				{
					label = "Morningstar";
				};
				class lancer
				{
					label = "Lancer";
				};
				class griffith
				{
					label = "Griffith";
				};
				class fitz
				{
					label = "Fitzsimmons";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onethreeM56S_Armor
		{
			model = "PHRP_onethree_vests";
			role = "M56S";
		};
		class PHRP_onethreeM56Smedic_Armor
		{
			model = "PHRP_onethree_vests";
			role = "M56S_corpsman";
		};
		class PHRP_onethreeM56R_Armor
		{
			model = "PHRP_onethree_vests";
			role = "M56R";
		};
		class PHRP_onethreeM56Rmedic_Armor
		{
			model = "PHRP_onethree_vests";
			role = "M56R_corpsman";
		};
		class PHRP_Buckley_M56R_Armor
		{
			model = "PHRP_onethree_vests";
			role = "buckley";
		};
		class PHRP_Morningstar_M56S_Armor
		{
			model = "PHRP_onethree_vests";
			role = "morningstar";
		};
		class PHRP_Lancer_M56R_Armor
		{
			model = "PHRP_onethree_vests";
			role = "lancer";
		};
		class PHRP_Griffith_M56R_Armor
		{
			model = "PHRP_onethree_vests";
			role = "griffith";
		};
		class PHRP_Fitz_M56R_Armor
		{
			model = "PHRP_onethree_vests";
			role = "fitz";
		};
	};
};
