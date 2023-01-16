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
class CfgWeapons
{
	class PHRP_VX16;
    class PHRP_JHMCS_Helmet;
	class OPTRE_UNSC_VX16_Helmet;
	class PHRP_Strigon_VX16_dp : PHRP_VX16
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Strigon VX16 Helmet";
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_olive_CO.paa",""};
	};
	class PHRP_Strigon_JHMCS_dp : PHRP_JHMCS_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Strigon JHMCS Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_strigon_jhmcs_co.paa"};
	};
	class PHRP_Foulke_VX16_dp : PHRP_VX16
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Foulke's VX16 Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\foulke_vx16_CO.paa",""};
	};
	class PHRP_Foulke_JHMCS_dp : PHRP_JHMCS_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Foulke's JHMCS Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_foulke_jhmcs_co.paa"};
	};
};