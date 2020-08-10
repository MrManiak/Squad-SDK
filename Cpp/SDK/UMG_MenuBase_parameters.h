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

// Function UMG_MenuBase.UMG_MenuBase_C.Open UI Element
struct UUMG_MenuBase_C_Open_UI_Element_Params
{
	class USQCoreStateMapComponent*                    Map_Component;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Close UI Element
struct UUMG_MenuBase_C_Close_UI_Element_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Get Voting Widget
struct UUMG_MenuBase_C_Get_Voting_Widget_Params
{
	class UUserWidget*                                 Voting_Widget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Get Role List Roots
struct UUMG_MenuBase_C_Get_Role_List_Roots_Params
{
	class UPanelWidget*                                Squad_Panel;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Unassigned_Panel;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Get Squad List Roots
struct UUMG_MenuBase_C_Get_Squad_List_Roots_Params
{
	class UPanelWidget*                                Squad_Panel;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Unassigned_Panel;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Commander_Panel;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Get Spawn Point Roots
struct UUMG_MenuBase_C_Get_Spawn_Point_Roots_Params
{
	class UGridPanel*                                  SpawnBase;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                                  SpawnHab;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                                  SpawnRally;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.On Close
struct UUMG_MenuBase_C_On_Close_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.On Open
struct UUMG_MenuBase_C_On_Open_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Configure Map Elements
struct UUMG_MenuBase_C_Configure_Map_Elements_Params
{
	class USQCoreStateMapComponent*                    MapComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerManagerComponent*                MarkerManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Is Open
struct UUMG_MenuBase_C_Is_Open_Params
{
	bool                                               Open;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Transitioning;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Key Action
struct UUMG_MenuBase_C_Key_Action_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Opened
struct UUMG_MenuBase_C_Opened_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Closed
struct UUMG_MenuBase_C_Closed_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.ExecuteUbergraph_UMG_MenuBase
struct UUMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_MenuBase.UMG_MenuBase_C.Finished Close__DelegateSignature
struct UUMG_MenuBase_C_Finished_Close__DelegateSignature_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Finished Open__DelegateSignature
struct UUMG_MenuBase_C_Finished_Open__DelegateSignature_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Started Close__DelegateSignature
struct UUMG_MenuBase_C_Started_Close__DelegateSignature_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Started Open__DelegateSignature
struct UUMG_MenuBase_C_Started_Open__DelegateSignature_Params
{
};

// Function UMG_MenuBase.UMG_MenuBase_C.Team Selected__DelegateSignature
struct UUMG_MenuBase_C_Team_Selected__DelegateSignature_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
