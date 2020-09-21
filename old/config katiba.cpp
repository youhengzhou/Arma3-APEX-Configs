enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class CSTACHI_PACIFIC
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Apex - Characters and Clothing";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Characters_F_Exp","A3_Data_F_Exp","A3_Data_F","A3_Weapons_F","A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {"B_CTRG_Miller_F","B_CTRG_Soldier_2_F","B_CTRG_Soldier_3_F","B_CTRG_Soldier_AR_tna_F","B_CTRG_Soldier_Exp_tna_F","B_CTRG_Soldier_F","B_CTRG_Soldier_JTAC_tna_F","B_CTRG_Soldier_LAT_tna_F","B_CTRG_Soldier_M_tna_F","B_CTRG_Soldier_Medic_tna_F","B_CTRG_Soldier_TL_tna_F","B_CTRG_Soldier_tna_F","B_CTRG_Soldier_universal_F","B_CTRG_Soldier_urb_1_F","B_CTRG_Soldier_urb_2_F","B_CTRG_Soldier_urb_3_F","B_GEN_Commander_F","B_GEN_Soldier_F","B_GEN_Soldier_universal_F","B_T_Crew_F","B_T_Diver_Exp_F","B_T_Diver_F","B_T_Diver_TL_F","B_T_Engineer_F","B_T_ghillie_tna_F","B_T_Helicrew_F","B_T_Helipilot_F","B_T_Medic_F","B_T_Officer_F","B_T_Pilot_F","B_T_Recon_Exp_F","B_T_Recon_F","B_T_Recon_JTAC_F","B_T_Recon_LAT_F","B_T_Recon_M_F","B_T_Recon_Medic_F","B_T_Recon_TL_F","B_T_Sniper_F","B_T_Soldier_A_F","B_T_Soldier_AA_F","B_T_Soldier_AAA_F","B_T_Soldier_AAR_F","B_T_Soldier_AAT_F","B_T_Soldier_AR_F","B_T_Soldier_AT_F","B_T_Soldier_Exp_F","B_T_Soldier_F","B_T_Soldier_GL_F","B_T_Soldier_LAT_F","B_T_soldier_M_F","B_T_Soldier_PG_F","B_T_Soldier_Repair_F","B_T_Soldier_SL_F","B_T_Soldier_TL_F","B_T_Soldier_UAV_F","B_T_Soldier_unarmed_F","B_T_Soldier_universal_F","B_T_Spotter_F","B_T_Support_AMG_F","B_T_Support_AMort_F","B_T_Support_GMG_F","B_T_Support_MG_F","B_T_Support_Mort_F","I_C_Helipilot_F","I_C_Pilot_F","I_C_Soldier_Bandit_1_F","I_C_Soldier_Bandit_2_F","I_C_Soldier_Bandit_3_F","I_C_Soldier_Bandit_4_F","I_C_Soldier_Bandit_5_F","I_C_Soldier_Bandit_6_F","I_C_Soldier_Bandit_7_F","I_C_Soldier_Bandit_8_F","I_C_Soldier_base_unarmed_F","I_C_Soldier_Camo_F","I_C_Soldier_Para_1_F","I_C_Soldier_Para_2_F","I_C_Soldier_Para_3_F","I_C_Soldier_Para_4_F","I_C_Soldier_Para_5_F","I_C_Soldier_Para_6_F","I_C_Soldier_Para_7_F","I_C_Soldier_Para_8_F","I_C_Soldier_universal_F","Item_U_B_CTRG_Soldier_2_F","Item_U_B_CTRG_Soldier_3_F","Item_U_B_CTRG_Soldier_F","Item_U_B_CTRG_Soldier_urb_1_F","Item_U_B_CTRG_Soldier_urb_2_F","Item_U_B_CTRG_Soldier_urb_3_F","Item_U_B_GEN_Commander_F","Item_U_B_GEN_Soldier_F","Item_U_B_T_FullGhillie_tna_F","Item_U_B_T_Sniper_F","Item_U_B_T_Soldier_AR_F","Item_U_B_T_Soldier_F","Item_U_B_T_Soldier_SL_F","Item_U_C_Man_casual_1_F","Item_U_C_Man_casual_2_F","Item_U_C_Man_casual_3_F","Item_U_C_Man_casual_4_F","Item_U_C_Man_casual_5_F","Item_U_C_Man_casual_6_F","Item_U_C_man_sport_1_F","Item_U_C_man_sport_2_F","Item_U_C_man_sport_3_F","Item_U_I_C_Soldier_Bandit_1_F","Item_U_I_C_Soldier_Bandit_2_F","Item_U_I_C_Soldier_Bandit_3_F","Item_U_I_C_Soldier_Bandit_4_F","Item_U_I_C_Soldier_Bandit_5_F","Item_U_I_C_Soldier_Camo_F","Item_U_I_C_Soldier_Para_1_F","Item_U_I_C_Soldier_Para_2_F","Item_U_I_C_Soldier_Para_3_F","Item_U_I_C_Soldier_Para_4_F","Item_U_I_C_Soldier_Para_5_F","Item_U_O_T_FullGhillie_tna_F","Item_U_O_T_Officer_F","Item_U_O_T_Sniper_F","Item_U_O_T_Soldier_F","Item_U_O_V_Soldier_Viper_F","Item_U_O_V_Soldier_Viper_hex_F","O_T_Crew_F","O_T_Diver_Exp_F","O_T_Diver_F","O_T_Diver_TL_F","O_T_Engineer_F","O_T_ghillie_tna_F","O_T_Helicrew_F","O_T_Helipilot_F","O_T_Medic_F","O_T_Officer_F","O_T_Pilot_F","O_T_Recon_Exp_F","O_T_Recon_F","O_T_Recon_JTAC_F","O_T_Recon_LAT_F","O_T_Recon_M_F","O_T_Recon_Medic_F","O_T_Recon_TL_F","O_T_Sniper_F","O_T_Soldier_A_F","O_T_Soldier_AA_F","O_T_Soldier_AAA_F","O_T_Soldier_AAR_F","O_T_Soldier_AAT_F","O_T_Soldier_AR_F","O_T_Soldier_AT_F","O_T_Soldier_Exp_F","O_T_Soldier_F","O_T_Soldier_GL_F","O_T_Soldier_LAT_F","O_T_Soldier_M_F","O_T_Soldier_PG_F","O_T_Soldier_Repair_F","O_T_Soldier_SL_F","O_T_Soldier_TL_F","O_T_Soldier_UAV_F","O_T_Soldier_unarmed_F","O_T_Soldier_universal_F","O_T_Spotter_F","O_T_Support_AMG_F","O_T_Support_AMort_F","O_T_Support_GMG_F","O_T_Support_MG_F","O_T_Support_Mort_F","O_V_Soldier_Exp_ghex_F","O_V_Soldier_Exp_hex_F","O_V_Soldier_ghex_F","O_V_Soldier_hex_F","O_V_Soldier_JTAC_ghex_F","O_V_Soldier_JTAC_hex_F","O_V_Soldier_LAT_ghex_F","O_V_Soldier_LAT_hex_F","O_V_Soldier_M_ghex_F","O_V_Soldier_M_hex_F","O_V_Soldier_Medic_ghex_F","O_V_Soldier_Medic_hex_F","O_V_Soldier_TL_ghex_F","O_V_Soldier_TL_hex_F","O_V_Soldier_Viper_F","O_V_Soldier_Viper_hex_F"};
		weapons[] = {"U_B_CTRG_Soldier_2_F","U_B_CTRG_Soldier_3_F","U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_urb_1_F","U_B_CTRG_Soldier_urb_2_F","U_B_CTRG_Soldier_urb_3_F","U_B_GEN_Commander_F","U_B_GEN_Soldier_F","U_B_T_FullGhillie_tna_F","U_B_T_Sniper_F","U_B_T_Soldier_AR_F","U_B_T_Soldier_F","U_B_T_Soldier_SL_F","U_C_Man_casual_1_F","U_C_Man_casual_2_F","U_C_Man_casual_3_F","U_C_Man_casual_4_F","U_C_Man_casual_5_F","U_C_Man_casual_6_F","U_C_man_sport_1_F","U_C_man_sport_2_F","U_C_man_sport_3_F","U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_3_F","U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_5_F","U_I_C_Soldier_Camo_F","U_I_C_Soldier_Para_1_F","U_I_C_Soldier_Para_2_F","U_I_C_Soldier_Para_3_F","U_I_C_Soldier_Para_4_F","U_I_C_Soldier_Para_5_F","U_O_T_FullGhillie_tna_F","U_O_T_Officer_F","U_O_T_Sniper_F","U_O_T_Soldier_F","U_O_V_Soldier_Viper_F","U_O_V_Soldier_Viper_hex_F"};
	};
};
class CfgVehicles
{
	class O_Soldier_base_F;
	class O_Soldier_A_F;
	class O_T_Soldier_A_F: O_Soldier_A_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_A_F.jpg";
		_generalMacro = "O_T_Soldier_A_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAmmo_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AAR_F;
	class O_T_Soldier_AAR_F: O_Soldier_AAR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAR_F.jpg";
		_generalMacro = "O_T_Soldier_AAR_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAR_AAR_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_support_AMG_F;
	class O_T_Support_AMG_F: O_support_AMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_AMG_F.jpg";
		_generalMacro = "O_T_Support_AMG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_HMG_01_support_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_support_AMort_F;
	class O_T_Support_AMort_F: O_support_AMort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_AMort_F.jpg";
		_generalMacro = "O_T_Support_AMort_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_Mortar_01_support_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AAA_F;
	class O_T_Soldier_AAA_F: O_Soldier_AAA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAA_F.jpg";
		_generalMacro = "O_T_Soldier_AAA_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAA_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AAT_F;
	class O_T_Soldier_AAT_F: O_Soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAT_F.jpg";
		_generalMacro = "O_T_Soldier_AAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAT_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AR_F;
	class O_T_Soldier_AR_F: O_Soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AR_F.jpg";
		_generalMacro = "O_T_Soldier_AR_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_medic_F;
	class O_T_Medic_F: O_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Medic_F.jpg";
		_generalMacro = "O_T_Medic_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTMedic_F";
		weapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_crew_F;
	class O_T_Crew_F: O_crew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Crew_F.jpg";
		_generalMacro = "O_T_Crew_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_engineer_F;
	class O_T_Engineer_F: O_engineer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Engineer_F.jpg";
		_generalMacro = "O_T_Engineer_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTEng_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_soldier_exp_F;
	class O_T_Soldier_Exp_F: O_soldier_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_Exp_F.jpg";
		_generalMacro = "O_T_Soldier_Exp_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTExp_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_GL_F;
	class O_T_Soldier_GL_F: O_Soldier_GL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_GL_F.jpg";
		_generalMacro = "O_T_Soldier_GL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_support_GMG_F;
	class O_T_Support_GMG_F: O_support_GMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_GMG_F.jpg";
		_generalMacro = "O_T_Support_GMG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_GMG_01_weapon_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_support_MG_F;
	class O_T_Support_MG_F: O_support_MG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_MG_F.jpg";
		_generalMacro = "O_T_Support_MG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_HMG_01_weapon_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_support_Mort_F;
	class O_T_Support_Mort_F: O_support_Mort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_Mort_F.jpg";
		_generalMacro = "O_T_Support_Mort_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_Mortar_01_weapon_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_helicrew_F;
	class O_T_Helicrew_F: O_helicrew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helicrew_F.jpg";
		_generalMacro = "O_T_Helicrew_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		weapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_helipilot_F;
	class O_T_Helipilot_F: O_helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helipilot_F.jpg";
		_generalMacro = "O_T_Helipilot_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		faction = "OPF_T_F";
		weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_soldier_M_F;
	class O_T_Soldier_M_F: O_soldier_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_M_F.jpg";
		_generalMacro = "O_T_Soldier_M_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AA_F;
	class O_T_Soldier_AA_F: O_Soldier_AA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AA_F.jpg";
		_generalMacro = "O_T_Soldier_AA_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTAA_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_AT_F;
	class O_T_Soldier_AT_F: O_Soldier_AT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AT_F.jpg";
		_generalMacro = "O_T_Soldier_AT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTAT_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_officer_F;
	class O_T_Officer_F: O_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Officer_F.jpg";
		_generalMacro = "O_T_Officer_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Officer_F";
		weapons[] = {"arifle_Katiba_C_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_Beret_blk","V_BandollierB_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_soldier_PG_F;
	class O_T_Soldier_PG_F: O_soldier_PG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_PG_F.jpg";
		_generalMacro = "O_T_Soldier_PG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Parachute";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Pilot_F;
	class O_T_Pilot_F: O_Pilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Pilot_F.jpg";
		_generalMacro = "O_T_Pilot_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		DLC = "Expansion";
	};
	class O_soldier_repair_F;
	class O_T_Soldier_Repair_F: O_soldier_repair_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_Repair_F.jpg";
		_generalMacro = "O_T_Soldier_Repair_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTRepair_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_F;
	class O_T_Soldier_F: O_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_F.jpg";
		_generalMacro = "O_T_Soldier_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_LAT_F;
	class O_T_Soldier_LAT_F: O_Soldier_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_LAT_F.jpg";
		_generalMacro = "O_T_Soldier_LAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTLAT_F";
		weapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_SL_F;
	class O_T_Soldier_SL_F: O_Soldier_SL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_SL_F.jpg";
		_generalMacro = "O_T_Soldier_SL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_Soldier_TL_F;
	class O_T_Soldier_TL_F: O_Soldier_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_TL_F.jpg";
		_generalMacro = "O_T_Soldier_TL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_soldier_UAV_F;
	class O_T_Soldier_UAV_F: O_soldier_UAV_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_UAV_F.jpg";
		_generalMacro = "O_T_Soldier_UAV_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_UAV_01_backpack_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_diver_F;
	class O_T_Diver_F: O_diver_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_F.jpg";
		_generalMacro = "O_T_Diver_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_diver_exp_F;
	class O_T_Diver_Exp_F: O_diver_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_Exp_F.jpg";
		_generalMacro = "O_T_Diver_Exp_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_diver_TL_F;
	class O_T_Diver_TL_F: O_diver_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_TL_F.jpg";
		_generalMacro = "O_T_Diver_TL_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_recon_exp_F;
	class O_T_Recon_Exp_F: O_recon_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_Exp_F.jpg";
		_generalMacro = "O_T_Recon_Exp_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTReconExp_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_JTAC_F;
	class O_T_Recon_JTAC_F: O_recon_JTAC_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_JTAC_F.jpg";
		_generalMacro = "O_T_Recon_JTAC_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_M_F;
	class O_T_Recon_M_F: O_recon_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_M_F.jpg";
		_generalMacro = "O_T_Recon_M_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"srifle_DMR_01_DMS_snds_BI_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_snds_BI_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_medic_F;
	class O_T_Recon_Medic_F: O_recon_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_Medic_F.jpg";
		_generalMacro = "O_T_Recon_Medic_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTReconMedic_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_F;
	class O_T_Recon_F: O_recon_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_F.jpg";
		_generalMacro = "O_T_Recon_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_LAT_F;
	class O_T_Recon_LAT_F: O_recon_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_LAT_F.jpg";
		_generalMacro = "O_T_Recon_LAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTRPG_AT_F";
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_recon_TL_F;
	class O_T_Recon_TL_F: O_recon_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_TL_F.jpg";
		_generalMacro = "O_T_Recon_TL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Soldier_F";
		weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		DLC = "Expansion";
	};
	class O_sniper_F;
	class O_T_Sniper_F: O_sniper_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Sniper_F.jpg";
		_generalMacro = "O_T_Sniper_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Sniper_F";
		weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_spotter_F;
	class O_T_Spotter_F: O_spotter_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Spotter_F.jpg";
		_generalMacro = "O_T_Spotter_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		uniformClass = "U_O_T_Sniper_F";
		weapons[] = {"arifle_Katiba_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_ghillie_base_F;
	class O_T_ghillie_tna_F: O_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_ghillie_tna_F.jpg";
		_generalMacro = "O_T_ghillie_tna_F";
		scope = 2;
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};
		displayName = "$STR_A3_O_T_ghillie_tna_F0";
		uniformClass = "U_O_T_FullGhillie_tna_F";
		weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ghillie_coverall_csat_co.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_5LOD_tna_co.paa"};
		DLC = "Expansion";
	};
	class O_V_Soldier_base_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_V_Soldier_base_F";
		faction = "OPF_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		editorSubcategory = "EdSubcat_Personnel_Viper";
		displayName = "";
		accuracy = 3;
		threat[] = {0.8,0.1,0.1};
		camouflage = 1;
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\opfor\data\viperop_suit.rvmat","A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_injury.rvmat","A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_injury.rvmat"};
		};
		class HitPoints
		{
			class HitFace
			{
				armor = 100;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 120;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 100;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 180;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 180;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 180;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 180;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 180;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 180;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 180;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
		uniformClass = "U_O_V_Soldier_Viper_hex_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"};
		backpack = "B_ViperHarness_hex_M_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
	};
	class O_V_Soldier_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_hex_F.jpg";
		_generalMacro = "O_V_Soldier_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_hex_F0";
		role = "Rifleman";
	};
	class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_hex_F.jpg";
		_generalMacro = "O_V_Soldier_TL_hex_F";
		scope = 2;
		cost = 250000;
		displayName = "$STR_A3_O_V_Soldier_TL_hex_F0";
		backpack = "B_ViperHarness_hex_TL_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
	};
	class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Exp_hex_F.jpg";
		_generalMacro = "O_V_Soldier_Exp_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_Exp_hex_F0";
		role = "Sapper";
		canDeactivateMines = 1;
		detectSkill = 38;
		backpack = "B_ViperHarness_hex_Exp_F";
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Medic_hex_F.jpg";
		_generalMacro = "O_V_Soldier_Medic_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_SOLDIER_MEDIC_HEX_F0";
		icon = "iconManMedic";
		picture = "pictureHeal";
		role = "CombatLifeSaver";
		backpack = "B_ViperHarness_hex_Medic_F";
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		attendant = 1;
	};
	class O_V_Soldier_M_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_M_hex_F.jpg";
		_generalMacro = "O_V_Soldier_M_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_M_hex_F0";
		role = "Marksman";
		cost = 250000;
		backpack = "B_ViperHarness_hex_M_F";
		weapons[] = {"arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_LAT_hex_F.jpg";
		_generalMacro = "O_V_Soldier_LAT_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_LAT_hex_F0";
		role = "MissileSpecialist";
		accuracy = 2;
		icon = "iconManAT";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		backpack = "B_ViperHarness_hex_LAT_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_JTAC_hex_F.jpg";
		_generalMacro = "O_V_Soldier_JTAC_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_JTAC_hex_F0";
		role = "SpecialOperative";
		backpack = "B_ViperHarness_hex_JTAC_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_ghex_F: O_V_Soldier_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_M_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_TL_ghex_F: O_V_Soldier_TL_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_TL_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_TL_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Exp_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_Exp_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_Exp_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Medic_ghex_F: O_V_Soldier_Medic_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Medic_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_Medic_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_Medic_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_M_ghex_F: O_V_Soldier_M_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_M_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_M_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_M_F";
		weapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_LAT_ghex_F: O_V_Soldier_LAT_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_LAT_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_LAT_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_LAT_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_JTAC_ghex_F: O_V_Soldier_JTAC_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_JTAC_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_JTAC_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_JTAC_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};
//};
