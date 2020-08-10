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

// Function W_RoleSelect.W_RoleSelect_C.Create Render Target
struct UW_RoleSelect_C_Create_Render_Target_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Show Deploy Role
struct UW_RoleSelect_C_Show_Deploy_Role_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Update Preview State
struct UW_RoleSelect_C_Update_Preview_State_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Set Soldier Material
struct UW_RoleSelect_C_Set_Soldier_Material_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleSelect.W_RoleSelect_C.Delay Display Role Info
struct UW_RoleSelect_C_Delay_Display_Role_Info_Params
{
	class USQRoleSettings*                             RoleReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleSelect.W_RoleSelect_C.Draw Role Info
struct UW_RoleSelect_C_Draw_Role_Info_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Construct
struct UW_RoleSelect_C_Construct_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Refresh
struct UW_RoleSelect_C_Refresh_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Show Current Role
struct UW_RoleSelect_C_Show_Current_Role_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Set Role
struct UW_RoleSelect_C_Set_Role_Params
{
	class USQRoleSettings*                             New_Role;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleSelect.W_RoleSelect_C.Destroy R2T
struct UW_RoleSelect_C_Destroy_R2T_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.Roles Refreshed Set Bindings
struct UW_RoleSelect_C_Roles_Refreshed_Set_Bindings_Params
{
};

// Function W_RoleSelect.W_RoleSelect_C.New Role Selected
struct UW_RoleSelect_C_New_Role_Selected_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleSelect.W_RoleSelect_C.New Role Hovered
struct UW_RoleSelect_C_New_Role_Hovered_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleSelect.W_RoleSelect_C.ExecuteUbergraph_W_RoleSelect
struct UW_RoleSelect_C_ExecuteUbergraph_W_RoleSelect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleSelect.W_RoleSelect_C.Role Selected__DelegateSignature
struct UW_RoleSelect_C_Role_Selected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
