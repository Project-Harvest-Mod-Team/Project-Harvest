#define _ARMA_

class CfgPatches
{
	class PHRP_Core
	{
		author = "PHRP Mod Team";
		name = "Project Harvest Units";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class PHRP_Core
		{
			list[] = {"PHRP_Core"};
		};
	};
};
class CfgEditorCategories
{
	class PHRP_EdCat_Gladius
	{
		displayName = "Gladius Company";
	};
};
class CfgEditorSubcategories
{
	class PHRP_EdSubCat_ODSTs
	{
		displayName = "ODSTs";
	};
};
class cfgFactionClasses
{
	class Gladius_Faction
	{
		displayName = "Gladius Company";
		priority = 3;
		side = 1;
		icon = "";
	};
};
