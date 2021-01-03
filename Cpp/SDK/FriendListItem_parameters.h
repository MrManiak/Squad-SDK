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

// Function FriendListItem.FriendListItem_C.Init Data
struct UFriendListItem_C_Init_Data_Params
{
};

// Function FriendListItem.FriendListItem_C.Construct
struct UFriendListItem_C_Construct_Params
{
};

// Function FriendListItem.FriendListItem_C.Marquee
struct UFriendListItem_C_Marquee_Params
{
};

// Function FriendListItem.FriendListItem_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct UFriendListItem_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendListItem.FriendListItem_C.BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UFriendListItem_C_BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FriendListItem.FriendListItem_C.Set Session
struct UFriendListItem_C_Set_Session_Params
{
	struct FBlueprintSessionResult                     Friends_Session;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FriendListItem.FriendListItem_C.Clear Session
struct UFriendListItem_C_Clear_Session_Params
{
};

// Function FriendListItem.FriendListItem_C.ExecuteUbergraph_FriendListItem
struct UFriendListItem_C_ExecuteUbergraph_FriendListItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FriendListItem.FriendListItem_C.RequestJoin__DelegateSignature
struct UFriendListItem_C_RequestJoin__DelegateSignature_Params
{
	struct FBlueprintSessionResult                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
