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

// Function W_CommandActionList.W_CommandActionList_C.Init Actions List
struct UW_CommandActionList_C_Init_Actions_List_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Construct
struct UW_CommandActionList_C_Construct_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Get Player State
struct UW_CommandActionList_C_Get_Player_State_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Team Changed
struct UW_CommandActionList_C_Team_Changed_Params
{
	class ASQTeamState*                                OldTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                NewTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionList.W_CommandActionList_C.Bind To Menu Open Close
struct UW_CommandActionList_C_Bind_To_Menu_Open_Close_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionList.W_CommandActionList_C.Parent Opened
struct UW_CommandActionList_C_Parent_Opened_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Parent Closed
struct UW_CommandActionList_C_Parent_Closed_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Bind Commander Changed
struct UW_CommandActionList_C_Bind_Commander_Changed_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.Command Changed
struct UW_CommandActionList_C_Command_Changed_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionList.W_CommandActionList_C.Update Requirements Text
struct UW_CommandActionList_C_Update_Requirements_Text_Params
{
};

// Function W_CommandActionList.W_CommandActionList_C.ExecuteUbergraph_W_CommandActionList
struct UW_CommandActionList_C_ExecuteUbergraph_W_CommandActionList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
