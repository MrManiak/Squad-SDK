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

// Function W_SquadMemberItem.W_SquadMemberItem_C.Self Squad
struct UW_SquadMemberItem_C_Self_Squad_Params
{
	bool                                               Is_SelfSquad;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonDown
struct UW_SquadMemberItem_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Set Role
struct UW_SquadMemberItem_C_Set_Role_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonUp
struct UW_SquadMemberItem_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnPreviewMouseButtonDown
struct UW_SquadMemberItem_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Weapon Visibility
struct UW_SquadMemberItem_C_Update_Weapon_Visibility_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Mute Icon
struct UW_SquadMemberItem_C_Update_Mute_Icon_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnDragDetected
struct UW_SquadMemberItem_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Member Item
struct UW_SquadMemberItem_C_Update_Member_Item_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Get Selection State
struct UW_SquadMemberItem_C_Get_Selection_State_Params
{
	ESQSelectionState                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Toggle Selection
struct UW_SquadMemberItem_C_Toggle_Selection_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Cache Popup
struct UW_SquadMemberItem_C_Cache_Popup_Params
{
	class UW_PopupOptionBox_C*                         New_Popup;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Rank
struct UW_SquadMemberItem_C_Update_Rank_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Border Color
struct UW_SquadMemberItem_C_Update_Border_Color_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsSquadLeaderChanged
struct UW_SquadMemberItem_C_OnIsSquadLeaderChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnPlayerNameChanged
struct UW_SquadMemberItem_C_OnPlayerNameChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnDeployRoleChanged
struct UW_SquadMemberItem_C_OnDeployRoleChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Construct
struct UW_SquadMemberItem_C_Construct_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsBleedingChanged
struct UW_SquadMemberItem_C_OnIsBleedingChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsWoundedChanged
struct UW_SquadMemberItem_C_OnIsWoundedChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnListLayoutChanged
struct UW_SquadMemberItem_C_OnListLayoutChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Reset Selector
struct UW_SquadMemberItem_C_Reset_Selector_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnFireTeamIndexChanged
struct UW_SquadMemberItem_C_OnFireTeamIndexChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsFireTeamLeaderChanged
struct UW_SquadMemberItem_C_OnIsFireTeamLeaderChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Create Assign Fireteam Options
struct UW_SquadMemberItem_C_Create_Assign_Fireteam_Options_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Assign Return
struct UW_SquadMemberItem_C_Assign_Return_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Open Options
struct UW_SquadMemberItem_C_Open_Options_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnCurrentVehicleDataChanged
struct UW_SquadMemberItem_C_OnCurrentVehicleDataChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnSelectionStateChanged
struct UW_SquadMemberItem_C_OnSelectionStateChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnVoipChannelChanged
struct UW_SquadMemberItem_C_OnVoipChannelChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsMutedChanged
struct UW_SquadMemberItem_C_OnIsMutedChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UW_SquadMemberItem_C_BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnSquadIdChanged
struct UW_SquadMemberItem_C_OnSquadIdChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature
struct UW_SquadMemberItem_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.PreConstruct
struct UW_SquadMemberItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsPossessingPawnChanged
struct UW_SquadMemberItem_C_OnIsPossessingPawnChanged_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Popup Option Return
struct UW_SquadMemberItem_C_Popup_Option_Return_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Create Promote Options
struct UW_SquadMemberItem_C_Create_Promote_Options_Params
{
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.Promote Return
struct UW_SquadMemberItem_C_Promote_Return_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadMemberItem.W_SquadMemberItem_C.ExecuteUbergraph_W_SquadMemberItem
struct UW_SquadMemberItem_C_ExecuteUbergraph_W_SquadMemberItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
