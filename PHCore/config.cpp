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
class CfgMods
{
	class Mod_Base;
	class PHRP_Core: Mod_Base
	{
		logo = "PHCore\textures\logo.paa";
		picture = "PHCore\textures\logo.paa";
		name = "Project Harvest Armory";
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
	class PHRP_EdSubCat_Water
	{
		displayName = "Boats";
	};
	class PHRP_EdSubCat_AWGS
	{
		displayName = "AWGS";
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
class cfgVehicleClasses
{
	class PHRP_AWGS
	{
		displayName = "AWGS";
	};
};
class RscPicture{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};
class RscStandardDisplay{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete BackgroundSpotlightRight;
		class Logo: RscActivePicture
		{
			text = "PHCore\textures\logo.paa";
		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style = 48;
		color[] = {1,1,1,0.5};
		colorActive[] = {1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc = 1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = "\PHCore\textures\PHRP.jpg";
		};
	};
};