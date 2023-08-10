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
			label = "1-4 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56S","M56S_corpsman","M56R","M56R_corpsman","chopper","kaker"};
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
				class chopper
				{
					label = "Chopper";
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
		class PHRP_onefourM56S_Armor
		{
			model = "PHRP_onefour_vests";
			role = "M56S";
		};
		class PHRP_onefourM56Smedic_Armor
		{
			model = "PHRP_onefour_vests";
			role = "M56S_corpsman";
		};
		class PHRP_onefourM56R_Armor
		{
			model = "PHRP_onefour_vests";
			role = "M56R";
		};
		class PHRP_onefourM56Rmedic_Armor
		{
			model = "PHRP_onefour_vests";
			role = "M56R_corpsman";
		};
		class PHRP_chopper_Armor
		{
			model = "PHRP_onefour_vests";
			role = "chopper";
		};
		class PHRP_Kaker_Armor
		{
			model = "PHRP_onefour_vests";
			role = "kaker";
		};
	};
};
