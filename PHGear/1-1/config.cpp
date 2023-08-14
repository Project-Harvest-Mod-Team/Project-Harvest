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
		class PHRP_oneone_vests
		{
			label = "1-1 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56S","M56S_corpsman","M56R","M56R_corpsman","erikson","riot","coleson"};
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
				class erikson
				{
					label = "Erikson";
				};
				class riot
				{
					label = "Riot";
				};
				class coleson
				{
					label = "Coleson";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_oneoneM56S_Armor
		{
			model = "PHRP_oneone_vests";
			role = "M56S";
		};
		class PHRP_oneoneM56Smedic_Armor
		{
			model = "PHRP_oneone_vests";
			role = "M56S_corpsman";
		};
		class PHRP_oneoneM56R_Armor
		{
			model = "PHRP_oneone_vests";
			role = "M56R";
		};
		class PHRP_oneoneM56Rmedic_Armor
		{
			model = "PHRP_oneone_vests";
			role = "M56R_corpsman";
		};
		class PHRP_Erikson_Armor
		{
			model = "PHRP_oneone_vests";
			role = "erikson";
		};
		class PHRP_Riot_Armor
		{
			model = "PHRP_oneone_vests";
			role = "riot";
		};
		class PHRP_Coleson_M56R_Armor
		{
			model = "PHRP_oneone_vests";
			role = "coleson";
		};
	};
};
