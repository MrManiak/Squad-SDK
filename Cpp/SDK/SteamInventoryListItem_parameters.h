#pragma once

// Name: S, Version: b

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

// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnEntryReleased
struct USteamInventoryListItem_C_BP_OnEntryReleased_Params
{
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemExpansionChanged
struct USteamInventoryListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemSelectionChanged
struct USteamInventoryListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.OnListItemObjectSet
struct USteamInventoryListItem_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USteamInventoryListItem_C_BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.OnStateChanged
struct USteamInventoryListItem_C_OnStateChanged_Params
{
	class USQSteamItem*                                ChangedItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.UpdateTickBox
struct USteamInventoryListItem_C_UpdateTickBox_Params
{
};

// Function SteamInventoryListItem.SteamInventoryListItem_C.ExecuteUbergraph_SteamInventoryListItem
struct USteamInventoryListItem_C_ExecuteUbergraph_SteamInventoryListItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
