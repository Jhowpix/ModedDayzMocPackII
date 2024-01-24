class CfgPatches
{
	class Sample_Proxies
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		scope = 0;
		inventorySlot[] = 
		{
			"Melee",
			"Shoulder",
			"Shoulder1",
			"Shoulder2"
		};
	};
};

class CfgSlots
{
	class Slot_Shoulder1
	{
		name = "Shoulder1";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};

	class Slot_Shoulder2
	{
		name = "Shoulder2";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};

};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyweapon1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder1";
		model = "test\proxies\weapon1.p3d";
	};

	class Proxyweapon2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder2";
		model = "test\proxies\weapon2.p3d";
	};

};