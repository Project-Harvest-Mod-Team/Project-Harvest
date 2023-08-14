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
				values[] = {"recruit","reserve","collins","ansley","carter","tinoco","carsten","wilson","raider","drip","miller","jaeger","craven","owessel","wolf","kincaid","stone","lark","samson","presscott","tepfer"};
				class recruit
				{
					label = "Recruit";
				};
				class reserve
				{
					label = "Reserve";
				};
				class collins
				{
					label = "Collins";
				};
				class ansley
				{
					label = "Ansley";
				};
				class carter
				{
					label = "Carter";
				};
				class tinoco
				{
					label = "Tinoco";
				};
				class carsten
				{
					label = "Carsten";
				};
				class wilson
				{
					label = "Wilson";
				};
				class raider
				{
					label = "Raider";
				};
				class drip
				{
					label = "DripDST";
				};
				class miller
				{
					label = "Miller";
				};
				class jaeger
				{
					label = "Jaeger";
				};
				class craven
				{
					label = "Craven";
				};
				class owessel
				{
					label = "Owessel";
				};
				class wolf
				{
					label = "Wolf";
				};
				class kincaid
				{
					label = "Kincaid";
				};
				class stone
				{
					label = "Stone";
				};
				class lark
				{
					label = "Lark";
				};
				class samson
				{
					label = "Samson";
				};
				class presscott
				{
					label = "Presscott";
				};
				class tepfer
				{
					label = "Tepfer";
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
		class PHRP_Miller_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "miller";
		};
		class PHRP_Jaeger_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "jaeger";
		};
		class PHRP_Craven_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "craven";
		};
		class PHRP_Owessel_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "owessel";
		};
		class PHRP_Wolf_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "wolf";
		};
		class PHRP_Kincaid_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "kincaid";
		};
		class PHRP_Stone_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "stone";
		};
		class PHRP_Lark_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "lark";
		};
		class PHRP_Samson_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "samson";
		};
		class PHRP_Presscott_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "presscott";
		};
		class PHRP_Tepfer_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "tepfer";
		};
	};
};
