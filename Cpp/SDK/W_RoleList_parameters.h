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

// Function W_RoleList.W_RoleList_C.Is Current Role Available
struct UW_RoleList_C_Is_Current_Role_Available_Params
{
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleList.W_RoleList_C.RefreshRoleList
struct UW_RoleList_C_RefreshRoleList_Params
{
};

// Function W_RoleList.W_RoleList_C.CreateRoleListWidgetArray
struct UW_RoleList_C_CreateRoleListWidgetArray_Params
{
	TArray<class UW_RoleGroup_C*>                      Array;                                                     // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function W_RoleList.W_RoleList_C.IsRoleListWidgetValid
struct UW_RoleList_C_IsRoleListWidgetValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_RoleList.W_RoleList_C.Init Role List
struct UW_RoleList_C_Init_Role_List_Params
{
};

// Function W_RoleList.W_RoleList_C.Validate Entries
struct UW_RoleList_C_Validate_Entries_Params
{
	bool                                               No_Entries;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleList.W_RoleList_C.Cache Role Groups
struct UW_RoleList_C_Cache_Role_Groups_Params
{
	bool                                               bSuccess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleList.W_RoleList_C.Set Refresh Timer Active
struct UW_RoleList_C_Set_Refresh_Timer_Active_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleList.W_RoleList_C.Construct
struct UW_RoleList_C_Construct_Params
{
};

// Function W_RoleList.W_RoleList_C.ExecuteUbergraph_W_RoleList
struct UW_RoleList_C_ExecuteUbergraph_W_RoleList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleList.W_RoleList_C.Roles Refreshed__DelegateSignature
struct UW_RoleList_C_Roles_Refreshed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
