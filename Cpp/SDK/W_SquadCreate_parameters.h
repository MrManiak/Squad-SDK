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

// Function W_SquadCreate.W_SquadCreate_C.Get_ButtonLocked_ToolTipWidget_1
struct UW_SquadCreate_C_Get_ButtonLocked_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadCreate.W_SquadCreate_C.Refresh Widget
struct UW_SquadCreate_C_Refresh_Widget_Params
{
};

// Function W_SquadCreate.W_SquadCreate_C.BIND - Num Player
struct UW_SquadCreate_C_BIND___Num_Player_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadCreate.W_SquadCreate_C.Construct
struct UW_SquadCreate_C_Construct_Params
{
};

// Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
struct UW_SquadCreate_C_BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_SquadCreate.W_SquadCreate_C.BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UW_SquadCreate_C_BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SquadCreate.W_SquadCreate_C.BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UW_SquadCreate_C_BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SquadCreate.W_SquadCreate_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
struct UW_SquadCreate_C_BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadCreate.W_SquadCreate_C.Update Lock Icon
struct UW_SquadCreate_C_Update_Lock_Icon_Params
{
};

// Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_SquadCreate_C_BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadCreate.W_SquadCreate_C.OnAddedToFocusPath
struct UW_SquadCreate_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function W_SquadCreate.W_SquadCreate_C.ExecuteUbergraph_W_SquadCreate
struct UW_SquadCreate_C_ExecuteUbergraph_W_SquadCreate_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
