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
		requiredAddons[] = {"MA_Armor"};
	};
};
/*class XtdGearModels
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
		class PHRP_ONI_Uniform
		{
			label = "Non-Combat Attire";
			author = "Soldner";
			options[] = {"type"};
			class type
			{
				label = "Name";
				values[] = {"burt","pj"};
				changeingame = 1;
				changedelay = 0;
				alwaysSelectable = 1;
				class burt
				{
					label = "Burt";
				};
				class pj
				{
					label = "PJ";
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
		class PHRP_Burt_ONI
		{
			model = "PHRP_ONI_Uniform";
			type = "burt";
		};
		class PHRP_PJ_UNSC
		{
			model = "PHRP_ONI_Uniform";
			type = "pj";
		};
	};
};*/
class CfgWeapons
{
	class Uniform_Base;
	class U_B_PilotCoveralls;
	class UniformItem;
	class ItemInfo;
	class MA_M56S_BDU;
	class PHRP_M56S_BDU : MA_M56S_BDU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S BDU";
		CBRN_protectionLevel = "4 + 8";
		ACE_GForceCoef = 0.9;
		class ItemInfo: ItemInfo
		{		
			uniformType = "Neopren";
		};
	};
};
class CfgVehicles
{
	class MA_M56S_BDU_Base;
	class PHRP_Soldier_Base: MA_M56S_BDU_Base
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

	//M56 BDU
	class PHRP_M56S_BDU_Base: PHRP_Soldier_WDL
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
		UniformClass = "MA_M56S_BDU";
		model = "MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
	};
};