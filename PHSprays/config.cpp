////////////////////////////////////////////////////////////////////
//DeRap: C:\Users\Tom\Downloads\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Oct 15 23:56:52 2023 : 'file' last modified on Sat Aug 12 08:35:50 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PHSprays
	{
		author = "Soldner";
		authors[] = {};
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class PH_ItemCore: CBA_MiscItem{};
	class PH_VulcanCan: PH_ItemCore
	{
		author = "Soldner";
		scope = 2;
		displayname = "Spray Paint (Vulcan)";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "PHSprays\sprays\Vulcan\Vulcan.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
};
class ACE_Tags
{
	class PH_Vulcan_Logo_Random
	{
		displayName = "Random";
		requiredItem = "PH_VulcanCan";
		materials[] = {};
		textures[] = {"PHSprays\sprays\Vulcan\Vulcan.paa","PHSprays\sprays\Vulcan\datsmoney.paa","PHSprays\sprays\Vulcan\hydrate.paa"};
		icon = "";
	};
	class PH_Vulcan_Logo: PH_Vulcan_Logo_Random
	{
		displayName = "Vulcan";
		textures[] = {"PHSprays\sprays\Vulcan\Vulcan.paa"};
		icon = "PHSprays\sprays\Vulcan\Vulcan.paa";
	};
	class PH_Vulcan_Money: PH_Vulcan_Logo_Random
	{
		displayName = "Dat's Money";
		textures[] = {"PHSprays\sprays\Vulcan\datsmoney.paa"};
		icon = "PHSprays\sprays\Vulcan\datsmoney.paa";
	};
	class PH_Vulcan_Hydrate: PH_Vulcan_Logo_Random
	{
		displayName = "While we wait...";
		textures[] = {"PHSprays\sprays\Vulcan\hydrate.paa"};
		icon = "PHSprays\sprays\Vulcan\hydrate.paa";
	};
	class PH_Vulcan_Gucci: PH_Vulcan_Logo_Random
	{
		displayName = "Gucci Man!!!";
		textures[] = {"PHSprays\sprays\Vulcan\teamgucciman.paa"};
		icon = "PHSprays\sprays\Vulcan\teamgucciman.paa";
	};
};