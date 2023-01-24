#define _ARMA_

class CfgPatches
{
	class PHRP_Uniforms
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
class XtdGearModels
{
	class CfgWeapons
	{
		class PHRP_Uniform
		{
			label = "Uniforms";
			author = "Soldner";
			options[] = {"type"};
			class type
			{
				label = "Type";
				values[] = {"normal","rolled","short"};
				changeingame = 1;
				changedelay = 0;
				alwaysSelectable = 1;
				class normal
				{
					label = "Normal";
				};
				class rolled
				{
					label = "Rolled";
				};
				class short
				{
					label = "Short";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Gladius_BDU
		{
			model = "PHRP_Uniform";
			type = "normal";
		};
		class Gladius_BDU_Rolled
		{
			model = "PHRP_Uniform";
			type = "rolled";
		};
		class Gladius_BDU_Short
		{
			model = "PHRP_Uniform";
			type = "short";
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class U_B_PilotCoveralls;
	class UniformItem;
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class PHRP_Base: U_B_CombatUniform_mcam
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Soldner";
		ACE_GForceCoef = 0.9;
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protectionLevel = "4 + 8";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
		};
	}
	class Gladius_BDU: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Gladius Combat Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius";
		};
	};
	class Gladius_BDU_Rolled: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Gladius Combat Uniform (Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius_Rolled";
		};
	};
	class Gladius_BDU_Short: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Gladius Combat Uniform (Short)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius_Short";
		};
	};
	class Strigon_Uniform: U_B_PilotCoveralls
	{
		dlc = "Project Harvest Armory";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Strigon Pilot Coveralls";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\strigon_suit_co.paa"};
		ACE_GForceCoef = 0.1;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Strigon_V_Uniform";
			containerClass = "Supply200";
			mass = 80;
			modelSides[] = {6};
		};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class B_Pilot_F;
	class PHRP_Soldier_Base: SoldierWB
	{
		class HitPoints;
	};
	class PHRP_Soldier_WDL: PHRP_Soldier_Base
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
			class Incapacitated;
			class HitLeftArm;
			class HitRightArm;
			class HitLeftLeg;
			class HitRightLeg;
			class ACE_HDBracket;
		};
	};
	class PHRP_Base_Uniform: PHRP_Soldier_WDL
	{
		class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
				armor = 5;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitNeck
			{
				armor = 5;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitHead
			{
				armor = 5;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitChest
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitBody
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitArms
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitHands
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: Incapacitated
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 6;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class ACE_HDBracket: ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
		dlc = "Project Harvest Armory";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
		uniformClass = "Gladius_BDU";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_SlimLeg"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
		editorSubcategory = "PHRP_EdSubCat_ODSTs";
	};
	class Strigon_V_Uniform: PHRP_Soldier_WDL
	{
		dlc = "Project Harvest Armory";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Strigon Pilot";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "Strigon_Uniform";
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"};
		genericNames = "NATOMen";
		faction = "Gladius_Faction";
		vehicleClass = "PHRP_Strigon_Man_Navy_class";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\strigon_suit_co.paa"};
		editorSubcategory = "PHRP_Pilots";
		class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
				armor = 20;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitNeck
			{
				armor = 20;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitHead
			{
				armor = 20;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitPelvis
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 20;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitChest
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitBody
			{
				armor = 4000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitArms
			{
				armor = 20;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitHands
			{
				armor = 20;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor = 20;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: Incapacitated
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 20;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitRightArm
			{
				armor = 20;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg: HitRightArm
			{
				armor = 20;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 20;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class ACE_HDBracket: ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class BDU_V_Gladius: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		uniformclass = "Gladius_BDU";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};
	class BDU_V_Gladius_Rolled: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\uniform_rolled";
		uniformclass = "Gladius_BDU_Rolled";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};
	class BDU_V_Gladius_Short: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\uniform_short";
		uniformclass = "Gladius_BDU_Short";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};
};