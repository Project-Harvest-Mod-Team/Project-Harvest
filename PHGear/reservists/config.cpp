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
		class PHRP_Reserve_vests
		{
			label = "Reserve Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Reserve Armors";
				values[] = {"recruit","reserve","collins","ansley","carter","tinoco","carsten","wilson","raider","drip","tepfer","stone","miller"};
				class recruit
				{
					label = "Recruit";
					image = "";
				};
				class reserve
				{
					label = "Reserve";
					image = "";
				};
				class collins
				{
					label = "Collins";
					image = "";
				};
				class ansley
				{
					label = "Ansley";
					image = "";
				};
				class carter
				{
					label = "Carter";
					image = "";
				};
				class tinoco
				{
					label = "Tinoco";
					image = "";
				};
				class carsten
				{
					label = "Carsten";
					image = "";
				};
				class wilson
				{
					label = "Wilson";
					image = "";
				};
				class raider
				{
					label = "Raider";
					image = "";
				};
				class drip
				{
					label = "DripDST";
					image = "";
				};
				class tepfer
				{
					label = "Tepfer";
					image = "";
				};
				class stone
				{
					label = "Stone";
					image = "";
				};
				class miller
				{
					label = "Miller";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Recruit_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "recruit";
		};
		class PHRP_Reserve_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "reserve";
		};
		class PHRP_Collins_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "collins";
		};
		class PHRP_Ansley_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "ansley";
		};
		class PHRP_Carter_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "carter";
		};
		class PHRP_Tinoco_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "tinoco";
		};
		class PHRP_Carsten_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "carsten";
		};
		class PHRP_Wilson_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "wilson";
		};
		class PHRP_raider_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "raider";
		};
		class PHRP_drip_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "drip";
		};
		class PHRP_Tepfer_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "tepfer";
		};
		class PHRP_Stone_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "stone";
		};
		class PHRP_Miller_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "miller";
		};
	};
};
