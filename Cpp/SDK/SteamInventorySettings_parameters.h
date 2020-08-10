#pragma once

// Name: Sq, Version: b21

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SteamInventorySettings.SteamInventorySettings_C.HideSelf
struct USteamInventorySettings_C_HideSelf_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory
struct USteamInventorySettings_C_RefreshInventory_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.Toggle
struct USteamInventorySettings_C_Toggle_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USettingsItem_TickBox_C*                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventorySettings.SteamInventorySettings_C.Construct
struct USteamInventorySettings_C_Construct_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.ExecuteUbergraph_SteamInventorySettings
struct USteamInventorySettings_C_ExecuteUbergraph_SteamInventorySettings_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
