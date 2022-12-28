////////////////////////////////////////////////////////////////////
//DeRap: C:\Users\Tom\Downloads\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Nov 21 17:09:05 2022 : 'file' last modified on Tue Jan 04 23:48:35 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PHFace
	{
		author = "Soldner";
		hideName = 0;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_epa","A3_Characters_F_epb","A3_Characters_F_epc","A3_Characters_F_exp","A3_Characters_F_enoch"};
	};
};
class CfgFaces
{
	class Man_A3
	{
		class WhiteHead_01;
		class SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Foulke";
			//texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			texture = "\A3\characters_f_contact\Heads\Data\m_Livonian_10_co.paa";
			head = "KerryHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "PHFace\Data\foulke_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "PHFace\Data\foulke_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class KazHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Kaz";
			texture = "PHFace\Data\kaz_co.paa";
			head = "KerryHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "PHFace\Data\kaztat_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "PHFace\Data\kaztat_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
	};
};
