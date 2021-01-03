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

// Function W_SquadListItem.W_SquadListItem_C.Get_TB_VoteActiveText_Text_1
struct UW_SquadListItem_C_Get_TB_VoteActiveText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadListItem.W_SquadListItem_C.Toggle Weapon Setting
struct UW_SquadListItem_C_Toggle_Weapon_Setting_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.ToggleMuteAll
struct UW_SquadListItem_C_ToggleMuteAll_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Check for Self
struct UW_SquadListItem_C_Check_for_Self_Params
{
	bool                                               found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadListItem.W_SquadListItem_C.Get Selection State
struct UW_SquadListItem_C_Get_Selection_State_Params
{
	ESQSelectionState                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.Instigator Is In Squad
struct UW_SquadListItem_C_Instigator_Is_In_Squad_Params
{
	bool                                               Is_In_Squad;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadListItem.W_SquadListItem_C.Check Member Highlights
struct UW_SquadListItem_C_Check_Member_Highlights_Params
{
	bool                                               Has_Highlights;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadListItem.W_SquadListItem_C.Update Color
struct UW_SquadListItem_C_Update_Color_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnMouseButtonDown
struct UW_SquadListItem_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadListItem.W_SquadListItem_C.Toggle Selection State
struct UW_SquadListItem_C_Toggle_Selection_State_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Clear Selections
struct UW_SquadListItem_C_Clear_Selections_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Update Show Fireteams
struct UW_SquadListItem_C_Update_Show_Fireteams_Params
{
	bool                                               Show_Fireteams;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadListItem.W_SquadListItem_C.GetMemberRoot
struct UW_SquadListItem_C_GetMemberRoot_Params
{
	int                                                FireTeamIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.Update List Visibility
struct UW_SquadListItem_C_Update_List_Visibility_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature
struct UW_SquadListItem_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.OnSquadIdChanged
struct UW_SquadListItem_C_OnSquadIdChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnSquadNameChanged
struct UW_SquadListItem_C_OnSquadNameChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnLeaderNameChanged
struct UW_SquadListItem_C_OnLeaderNameChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnMemberNumChanged
struct UW_SquadListItem_C_OnMemberNumChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnMaxMembersChanged
struct UW_SquadListItem_C_OnMaxMembersChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnIsSelfInSquadChanged
struct UW_SquadListItem_C_OnIsSelfInSquadChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnJoinButtonStateChanged
struct UW_SquadListItem_C_OnJoinButtonStateChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnListLayoutChanged
struct UW_SquadListItem_C_OnListLayoutChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.OnSelectionStateChanged
struct UW_SquadListItem_C_OnSelectionStateChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Open Options
struct UW_SquadListItem_C_Open_Options_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Create Disband Options
struct UW_SquadListItem_C_Create_Disband_Options_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Disband Events
struct UW_SquadListItem_C_Disband_Events_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_SquadListItem_C_BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.Construct
struct UW_SquadListItem_C_Construct_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.Popup Option Return
struct UW_SquadListItem_C_Popup_Option_Return_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature
struct UW_SquadListItem_C_BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadListItem.W_SquadListItem_C.OnIsCommandSquadChanged
struct UW_SquadListItem_C_OnIsCommandSquadChanged_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.On Can Demote Changed TEMP
struct UW_SquadListItem_C_On_Can_Demote_Changed_TEMP_Params
{
};

// Function W_SquadListItem.W_SquadListItem_C.ExecuteUbergraph_W_SquadListItem
struct UW_SquadListItem_C_ExecuteUbergraph_W_SquadListItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
