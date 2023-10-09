#define _ARMA_

class CfgPatches
{
	class PHProps
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {};
		weapons[] ={};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

// OPTRE_FC_EditorCategory_Cov
class CfgEditorSubcategories {
	class PHRP_Props_CovvieWeapons {
		displayName="Covenant Weapon Props (Demilitarized)";
	};
};

class CfgVehicles {
	class Static;
	class PHRP_Prop_Covenant_Base : Static {
		faction="OPTRE_FC_Covenant";
		editorCategory="OPTRE_FC_EditorCategory_Cov";
		editorSubcategory="PHRP_Props_CovvieWeapons";
		vehicleClass="OPTRE_FC_Objects_class";
		scope=2;
		scopeCurator=2;
		hiddenSelections[] = {"zasleh"};
		descriptionShort="A captured Covenant weapon which has been rendered unfit for further use.";
	}

	class PHRP_Prop_BeamRifle : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\beamrifle\T50_SRS.p3d";
		picture="\OPTRE_FC_Weapons\BeamRifle\data\BeamRiflePicture_CA.paa";
		displayName="Type-50 Particle Beam Rifle (Demilitarized)";
	};

	class PHRP_Prop_CovCarbine : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\Carbine\Type51_Carbine.p3d";
		picture="\OPTRE_FC_Weapons\Carbine\data\Carbine_Picture_CA.paa";
		displayName="Type-51 Carbine (Demilitarized)";
	};

	class PHRP_Prop_ConcRifle : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\ConcussionRifle\Concussion_Rifle.p3d";
		picture="\OPTRE_FC_Weapons\ConcussionRifle\data\icon_concussion_rifle.paa";
		displayName="Type-50 Concussion Rifle (Demilitarized)";
	};

	class PHRP_Prop_FuelRod : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\FuelRodCannon\FRC.p3d";
		picture="\OPTRE_FC_Weapons\FuelRodCannon\icon\fuelrod_icon.paa";
		displayName="Type-33 Fuel Rod Cannon (Demilitarized)";
	};

	class PHRP_Prop_Needler : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\needler\needler.p3d";
		picture="\OPTRE_FC_Weapons\needler\data\Icon_Needler.paa";
		displayName="Type-33 Needler (Demilitarized)";
	};

	class PHRP_Prop_NeedleRifle : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\NeedleRifle\NeedleRifle.p3d";
		picture="\OPTRE_FC_Weapons\needler\data\Icon_Needler.paa";
		displayName="Type-31 Needle Rifle (Demilitarized)";
	};

	class PHRP_Prop_PlasmaPistol : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaPistol\PlasmaPistol_vince.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaPistol\data\Plasma_Pistol_Picture_CA.paa";
		displayName="Type-25 Plasma Pistol (Demilitarized)";
	};

	class PHRP_Prop_PlasmaRepeater : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaRepeater\PlasmaRepeater.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRepeater\data\Repeater_Picture_CA.paa";
		displayName="Type-51 Plasma Repeater (Demilitarized)";
	};

	class PHRP_Prop_PlasmaRifle : PHRP_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaRifle\PlasmaRifle_vince.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRifle\data\Plasma_Rifle_Picture_CA.paa";
		displayName="Type-25 Plasma Rifle (Demilitarized)";
	};

	class PHRP_Prop_PulseCarbine : PHRP_Prop_Covenant_Base {
		model="OPTRE_FC_Weapons\PulseCarbine\Pulse_Carbine.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRepeater\data\Repeater_Picture_CA.paa";
		displayName="Type-60 Pulse Carbine (Demilitarized)";
	};
};
