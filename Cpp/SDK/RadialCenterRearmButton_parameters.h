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

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnMouseButtonDoubleClick
struct URadialCenterRearmButton_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnPreviewMouseButtonDown
struct URadialCenterRearmButton_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CheckIfCanRearm
struct URadialCenterRearmButton_C_CheckIfCanRearm_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSourceAmmoRemaining
struct URadialCenterRearmButton_C_UpdateSourceAmmoRemaining_Params
{
	float                                              AmmoRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CreateRearmRequest
struct URadialCenterRearmButton_C_CreateRearmRequest_Params
{
	TArray<struct FSQRearmWeaponRequest>               RearmRequest;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelectedCost
struct URadialCenterRearmButton_C_UpdateSelectedCost_Params
{
	float                                              MagCost;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CalculateTotalRearmCost
struct URadialCenterRearmButton_C_CalculateTotalRearmCost_Params
{
	float                                              OutCost;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.GetRearmingItemCountDisplay
struct URadialCenterRearmButton_C_GetRearmingItemCountDisplay_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverBegin
struct URadialCenterRearmButton_C_OnHoverBegin_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.BPInit
struct URadialCenterRearmButton_C_BPInit_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.AddRearmItems
struct URadialCenterRearmButton_C_AddRearmItems_Params
{
	class ASQEquipableItem*                            EquippableItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RearmItemCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.RemoveRearmItems
struct URadialCenterRearmButton_C_RemoveRearmItems_Params
{
	class ASQEquipableItem*                            WeaponToRemove;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RearmItemCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.RearmWeapons
struct URadialCenterRearmButton_C_RearmWeapons_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverEnd
struct URadialCenterRearmButton_C_OnHoverEnd_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.SetInventoryComponent
struct URadialCenterRearmButton_C_SetInventoryComponent_Params
{
	class USQPawnInventoryComponent*                   InventoryComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryAmmoUpdated
struct URadialCenterRearmButton_C_InventoryAmmoUpdated_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InitializeRearmSourceListener
struct URadialCenterRearmButton_C_InitializeRearmSourceListener_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelfCanClick
struct URadialCenterRearmButton_C_UpdateSelfCanClick_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.AmmoUpdated
struct URadialCenterRearmButton_C_AmmoUpdated_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.Destruct
struct URadialCenterRearmButton_C_Destruct_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.ExecuteUbergraph_RadialCenterRearmButton
struct URadialCenterRearmButton_C_ExecuteUbergraph_RadialCenterRearmButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryUpdated__DelegateSignature
struct URadialCenterRearmButton_C_InventoryUpdated__DelegateSignature_Params
{
};

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateAmmoRemaining__DelegateSignature
struct URadialCenterRearmButton_C_UpdateAmmoRemaining__DelegateSignature_Params
{
	float                                              AmmoRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
