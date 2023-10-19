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
		class PHRP_onetwo_vests
		{
			label = "1-2 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56S","M56S_corpsman","M56R","M56R_corpsman","payne","blackburn","hazard","graves","sabbath", "fitz"};
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
				class payne
				{
					label = "Payne";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class hazard
				{
					label = "Hazard";
				};
				class graves
				{
					label = "Graves";
				};
				class sabbath
				{
					label = "Sabbath";
				};
				class fitz
				{
					label = "Fitz";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onetwoM56S_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "M56S";
		};
		class PHRP_onetwoM56Smedic_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "M56S_corpsman";
		};
		class PHRP_onetwoM56R_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "M56R";
		};
		class PHRP_onetwoM56Rmedic_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "M56R_corpsman";
		};
		class PHRP_Payne_M56R_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "payne";
		};
		class PHRP_Blackburn_M56R_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "blackburn";
		};
		class PHRP_Hazard_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "hazard";
		};
		class PHRP_Graves_M56_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "graves";
		};
		class PHRP_Sabbath_M56_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "sabbath";
		};
		class PHRP_Fitzsimmons_M56R_Armor 
		{
			model = "PHRP_onetwo_vests";
			role = "fitz";
		};
	};
};
