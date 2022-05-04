class CfgPatches //class desc.
{
	class Gladius_UNSC_ODST
	{
		author = "Project Harvest Mod Team"; //name of author
		units[] = //attached units
		{
			//Marine
			"PHRP_Rifleman"
		};
		weapons[] = //attached weapons (leave blank)
		{
			
		};
		requiredVersion = 0.1; //artefact of arma, no clue what it is but has to stay 0.1
		requiredAddons[] =
		{
			"A3_Characters_F",
			"OPTRE_Core",
			"ProjectHarvest"
		};
	};
};

/*class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Units
		{
			list[]={"V_FZ_Units"};
		};
	};
};*/

class CfgVehicles
{
	//Units

	class B_Soldier_base_F;
	class PHRP_Soldier_Base: B_Soldier_base_F
	{
		class EventHandlers;
	};

	//Marines
	class PHRP_Rifleman : PHRP_Soldier_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		editorCategory = "Gladius Company";
		editorSubcategory = "Marines";
		displayName = "Rifleman";
		uniformClass = "VES_BDU_MulticamBlack";
		backpack = "OPTRE_UNSC_Rucksack";
		icon = "iconMan";
		class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
		#include "cfg\MA5B_Items.hpp"
		#include "cfg\Marine\MAR_Items.hpp"
	};
}