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

// Function SteamInventorySettings.SteamInventorySettings_C.GetMesh
struct USteamInventorySettings_C_GetMesh_Params
{
	class USQWeaponSkinData*                           InSkinData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Mesh1P;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventorySettings.SteamInventorySettings_C.Construct
struct USteamInventorySettings_C_Construct_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory
struct USteamInventorySettings_C_RefreshInventory_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.UpdateItems
struct USteamInventorySettings_C_UpdateItems_Params
{
};

// Function SteamInventorySettings.SteamInventorySettings_C.OnItemHovered
struct USteamInventorySettings_C_OnItemHovered_Params
{
	class UObject*                                     Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct USteamInventorySettings_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct USteamInventorySettings_C_BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct USteamInventorySettings_C_BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
