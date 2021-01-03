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

// Function W_RoleItem.W_RoleItem_C.Get Availability
struct UW_RoleItem_C_Get_Availability_Params
{
	int                                                Current;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleItem.W_RoleItem_C.Get Is Selected
struct UW_RoleItem_C_Get_Is_Selected_Params
{
	bool                                               selected;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleItem.W_RoleItem_C.Get Is Locked
struct UW_RoleItem_C_Get_Is_Locked_Params
{
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleItem.W_RoleItem_C.Open Sub Roles or Select Role
struct UW_RoleItem_C_Open_Sub_Roles_or_Select_Role_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Init Sub Roles
struct UW_RoleItem_C_Init_Sub_Roles_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Get State Color
struct UW_RoleItem_C_Get_State_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleItem.W_RoleItem_C.Set Refresh Timer Active
struct UW_RoleItem_C_Set_Refresh_Timer_Active_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleItem.W_RoleItem_C.Get Player State and PC
struct UW_RoleItem_C_Get_Player_State_and_PC_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Refresh Data
struct UW_RoleItem_C_Refresh_Data_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Refresh Visuals
struct UW_RoleItem_C_Refresh_Visuals_Params
{
};

// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
struct UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Construct
struct UW_RoleItem_C_Construct_Params
{
};

// Function W_RoleItem.W_RoleItem_C.Select Role
struct UW_RoleItem_C_Select_Role_Params
{
};

// Function W_RoleItem.W_RoleItem_C.SubRole Selected
struct UW_RoleItem_C_SubRole_Selected_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleItem.W_RoleItem_C.ExecuteUbergraph_W_RoleItem
struct UW_RoleItem_C_ExecuteUbergraph_W_RoleItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleItem.W_RoleItem_C.Role Hovered__DelegateSignature
struct UW_RoleItem_C_Role_Hovered__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleItem.W_RoleItem_C.Role Selected__DelegateSignature
struct UW_RoleItem_C_Role_Selected__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
