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

// Function W_RoleDetails.W_RoleDetails_C.Init Main Weapon Button
struct UW_RoleDetails_C_Init_Main_Weapon_Button_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Set Preview Message
struct UW_RoleDetails_C_Set_Preview_Message_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Get Item Info
struct UW_RoleDetails_C_Get_Item_Info_Params
{
	struct FSQInventoryData                            Primary_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int                                                Item_Count;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleDetails.W_RoleDetails_C.Clear All
struct UW_RoleDetails_C_Clear_All_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Refresh Main Icons
struct UW_RoleDetails_C_Refresh_Main_Icons_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Refresh Description
struct UW_RoleDetails_C_Refresh_Description_Params
{
	class ASQEquipableItem*                            Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleDetails.W_RoleDetails_C.Update Details
struct UW_RoleDetails_C_Update_Details_Params
{
	class USQRoleSettings*                             RoleReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_RoleDetails_C_BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UW_RoleDetails_C_BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UW_RoleDetails_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Sub Role Selected
struct UW_RoleDetails_C_Sub_Role_Selected_Params
{
	class USQRoleSettings*                             RoleReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleDetails.W_RoleDetails_C.Sub Role Hovered
struct UW_RoleDetails_C_Sub_Role_Hovered_Params
{
	class USQRoleSettings*                             RoleReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleDetails.W_RoleDetails_C.Construct
struct UW_RoleDetails_C_Construct_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.Refresh
struct UW_RoleDetails_C_Refresh_Params
{
};

// Function W_RoleDetails.W_RoleDetails_C.ExecuteUbergraph_W_RoleDetails
struct UW_RoleDetails_C_ExecuteUbergraph_W_RoleDetails_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
