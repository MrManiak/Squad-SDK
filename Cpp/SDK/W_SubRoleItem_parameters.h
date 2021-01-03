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

// Function W_SubRoleItem.W_SubRoleItem_C.Get Item Info
struct UW_SubRoleItem_C_Get_Item_Info_Params
{
	struct FSQInventoryData                            SQInventoryData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                Item_Count;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Get Weapon Name
struct UW_SubRoleItem_C_Get_Weapon_Name_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	struct FSQInventoryData                            Inventory;                                                 // (Parm, OutParm, NoDestructor)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Get Is Selected
struct UW_SubRoleItem_C_Get_Is_Selected_Params
{
	bool                                               selected;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Get Is Locked
struct UW_SubRoleItem_C_Get_Is_Locked_Params
{
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Get State Color
struct UW_SubRoleItem_C_Get_State_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Set Refresh Timer Active
struct UW_SubRoleItem_C_Set_Refresh_Timer_Active_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Get Player State and PC
struct UW_SubRoleItem_C_Get_Player_State_and_PC_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.Refresh Data
struct UW_SubRoleItem_C_Refresh_Data_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.Refresh Visuals
struct UW_SubRoleItem_C_Refresh_Visuals_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
struct UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.Construct
struct UW_SubRoleItem_C_Construct_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.Select Role
struct UW_SubRoleItem_C_Select_Role_Params
{
};

// Function W_SubRoleItem.W_SubRoleItem_C.ExecuteUbergraph_W_SubRoleItem
struct UW_SubRoleItem_C_ExecuteUbergraph_W_SubRoleItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Role Hovered__DelegateSignature
struct UW_SubRoleItem_C_Role_Hovered__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SubRoleItem.W_SubRoleItem_C.Role Selected__DelegateSignature
struct UW_SubRoleItem_C_Role_Selected__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
