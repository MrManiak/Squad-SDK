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

// Function W_RoleGroup.W_RoleGroup_C.Get Role Panel
struct UW_RoleGroup_C_Get_Role_Panel_Params
{
	class UPanelWidget*                                RoleBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleGroup.W_RoleGroup_C.Populate List
struct UW_RoleGroup_C_Populate_List_Params
{
};

// Function W_RoleGroup.W_RoleGroup_C.Get Role in List?
struct UW_RoleGroup_C_Get_Role_in_List__Params
{
	class USQRoleSettings*                             Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Exists_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleGroup.W_RoleGroup_C.PreConstruct
struct UW_RoleGroup_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_RoleGroup.W_RoleGroup_C.Init Group Roles
struct UW_RoleGroup_C_Init_Group_Roles_Params
{
	class ASQPlayerController*                         My_PC;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              My_PS;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                My_TS;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_RoleList_C*                               Role_List;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleGroup.W_RoleGroup_C.ExecuteUbergraph_W_RoleGroup
struct UW_RoleGroup_C_ExecuteUbergraph_W_RoleGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
