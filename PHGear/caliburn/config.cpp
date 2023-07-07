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
		class PHRP_Caliburn_vests
		{
			label = "Caliburn Armor";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"b192","o148","d236","b232","g129","b170"};
				class b192
				{
					label = "B192";
				};
				class o148
				{
					label = "148";
				};
				class d236
				{
					label = "D236";
				};
				class b232
				{
					label = "B232";
				};
				class g129
				{
					label = "G129"
				};
				class b170
				{
					label = "B170"
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_B192_Armor
		{
			model = "PHRP_Caliburn_vests";
			role = "b192";
		};
		class PHRP_Oliver_My_Beloved
		{
			model = "PHRP_Caliburn_vests";
			role = "o148";
		};
		class PHRP_D236_Armor
		{
			model = "PHRP_Caliburn_vests";
			role = "d236";
		};
		class PHRP_B232_Armor
		{
			model = "PHRP_Caliburn_vests";
			role = "b232";
		};
		class PHRP_G129_Armor
		{
			model = "PHRP_Caliburn_vests";
			role = "g129";
		};
		class PHRP_B170_Armor
		{
			model = "PHRP_Caliburn_vests";
			role = "b170";
		};
	};
};