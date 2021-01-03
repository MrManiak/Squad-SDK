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

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Parse Friends and Sessions
struct UFriendsBrowserWindow_C_Parse_Friends_and_Sessions_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Clear Search
struct UFriendsBrowserWindow_C_Clear_Search_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Search Friends
struct UFriendsBrowserWindow_C_Search_Friends_Params
{
	struct FString                                     Substring;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Construct
struct UFriendsBrowserWindow_C_Construct_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnSuccess
struct UFriendsBrowserWindow_C_OnSuccess_Params
{
	TArray<struct FSQBlueprintFriend>                  Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnFailure
struct UFriendsBrowserWindow_C_OnFailure_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Refresh Friends
struct UFriendsBrowserWindow_C_Refresh_Friends_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
struct UFriendsBrowserWindow_C_BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature
struct UFriendsBrowserWindow_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions_Event
struct UFriendsBrowserWindow_C_Set_Composited_Sessions_Event_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.ExecuteUbergraph_FriendsBrowserWindow
struct UFriendsBrowserWindow_C_ExecuteUbergraph_FriendsBrowserWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions__DelegateSignature
struct UFriendsBrowserWindow_C_Set_Composited_Sessions__DelegateSignature_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Start Search__DelegateSignature
struct UFriendsBrowserWindow_C_Start_Search__DelegateSignature_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Refresh__DelegateSignature
struct UFriendsBrowserWindow_C_Finished_Refresh__DelegateSignature_Params
{
};

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Search__DelegateSignature
struct UFriendsBrowserWindow_C_Finished_Search__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
