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

// Function W_CommandUI.W_CommandUI_C.Set Command Slide Visibility
struct UW_CommandUI_C_Set_Command_Slide_Visibility_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Get Voting Widget
struct UW_CommandUI_C_Get_Voting_Widget_Params
{
	class UUserWidget*                                 Voting_Widget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandUI.W_CommandUI_C.Get Squad List Roots
struct UW_CommandUI_C_Get_Squad_List_Roots_Params
{
	class UPanelWidget*                                Squad_Panel;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Unassigned_Panel;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                Commander_Panel;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandUI.W_CommandUI_C.PreConstruct
struct UW_CommandUI_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature
struct UW_CommandUI_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature
struct UW_CommandUI_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature
struct UW_CommandUI_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature_Params
{
};

// Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature
struct UW_CommandUI_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Construct
struct UW_CommandUI_C_Construct_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Open Chat Slide
struct UW_CommandUI_C_Open_Chat_Slide_Params
{
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandUI.W_CommandUI_C.Opened
struct UW_CommandUI_C_Opened_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Closed
struct UW_CommandUI_C_Closed_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Bind Commander Changed
struct UW_CommandUI_C_Bind_Commander_Changed_Params
{
};

// Function W_CommandUI.W_CommandUI_C.Command Changed
struct UW_CommandUI_C_Command_Changed_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandUI.W_CommandUI_C.BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_CommandUI_C_BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_CommandUI.W_CommandUI_C.ExecuteUbergraph_W_CommandUI
struct UW_CommandUI_C_ExecuteUbergraph_W_CommandUI_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
