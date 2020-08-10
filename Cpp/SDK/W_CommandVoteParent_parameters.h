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

// Function W_CommandVoteParent.W_CommandVoteParent_C.Get Can Use Button
struct UW_CommandVoteParent_C_Get_Can_Use_Button_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Reason;                                                    // (Parm, OutParm)
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.Update Appearance
struct UW_CommandVoteParent_C_Update_Appearance_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.UpdateVisibilities
struct UW_CommandVoteParent_C_UpdateVisibilities_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.Get_TB_VoteActiveText_Text_1
struct UW_CommandVoteParent_C_Get_TB_VoteActiveText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.BPInit
struct UW_CommandVoteParent_C_BPInit_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UW_CommandVoteParent_C_BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.Tick
struct UW_CommandVoteParent_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVoteInProgressChanged
struct UW_CommandVoteParent_C_OnIsVoteInProgressChanged_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVotingAvailableChanged
struct UW_CommandVoteParent_C_OnIsVotingAvailableChanged_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.Construct
struct UW_CommandVoteParent_C_Construct_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.Cache Player State
struct UW_CommandVoteParent_C_Cache_Player_State_Params
{
};

// Function W_CommandVoteParent.W_CommandVoteParent_C.ExecuteUbergraph_W_CommandVoteParent
struct UW_CommandVoteParent_C_ExecuteUbergraph_W_CommandVoteParent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
