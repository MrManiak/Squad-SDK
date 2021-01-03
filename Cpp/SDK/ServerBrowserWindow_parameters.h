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

// Function ServerBrowserWindow.ServerBrowserWindow_C.Set Promoted Box Visibility
struct UServerBrowserWindow_C_Set_Promoted_Box_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Should filter server
struct UServerBrowserWindow_C_Should_filter_server_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Hide;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Save Last Sort Type
struct UServerBrowserWindow_C_Save_Last_Sort_Type_Params
{
	TEnumAsByte<E_SortType>                            Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastAscendingSortType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Organise List Rows
struct UServerBrowserWindow_C_Organise_List_Rows_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Add unique sessions
struct UServerBrowserWindow_C_Add_unique_sessions_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Reset Search
struct UServerBrowserWindow_C_Reset_Search_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Remove Current Server
struct UServerBrowserWindow_C_Remove_Current_Server_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Check Mods
struct UServerBrowserWindow_C_Check_Mods_Params
{
	class UServerListItem_C*                           ServerListItem;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               In_Sync;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Set Details Widget Switcher
struct UServerBrowserWindow_C_Set_Details_Widget_Switcher_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List by Health Status
struct UServerBrowserWindow_C_Sort_List_by_Health_Status_Params
{
	bool                                               Ascending;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List
struct UServerBrowserWindow_C_Sort_List_Params
{
	bool                                               Is_Ascending;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SortType>                            Sort_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowReservedSlots
struct UServerBrowserWindow_C_GetCheckedShowReservedSlots_Params
{
	ECheckBoxState                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowQueuesSeparately
struct UServerBrowserWindow_C_GetCheckedShowQueuesSeparately_Params
{
	ECheckBoxState                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonVisibility
struct UServerBrowserWindow_C_GetQueueServerButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonIsEnabled
struct UServerBrowserWindow_C_GetQueueServerButtonIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.StartQueue
struct UServerBrowserWindow_C_StartQueue_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowEmptyServers
struct UServerBrowserWindow_C_GetCheckedShowEmptyServers_Params
{
	ECheckBoxState                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowDiffServers
struct UServerBrowserWindow_C_GetCheckedShowDiffServers_Params
{
	ECheckBoxState                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetServerIndex
struct UServerBrowserWindow_C_GetServerIndex_Params
{
	int                                                PingMs;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateSession
struct UServerBrowserWindow_C_UpdateSession_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.AddNewServerWidget
struct UServerBrowserWindow_C_AddNewServerWidget_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UServerListItem_C*                           Item;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.ResetServerIndex
struct UServerBrowserWindow_C_ResetServerIndex_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.ResetSortButtons
struct UServerBrowserWindow_C_ResetSortButtons_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.StopUpdatingThrobber
struct UServerBrowserWindow_C_StopUpdatingThrobber_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.GetLicensingNoticeVisibility
struct UServerBrowserWindow_C_GetLicensingNoticeVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateServerList
struct UServerBrowserWindow_C_UpdateServerList_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.RequestJoinServer
struct UServerBrowserWindow_C_RequestJoinServer_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Construct
struct UServerBrowserWindow_C_Construct_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.passwordEnteredForced
struct UServerBrowserWindow_C_passwordEnteredForced_Params
{
	struct FString                                     Password;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_ServerPassword_C*                        Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.OnSuccess
struct UServerBrowserWindow_C_OnSuccess_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.OnUpdateSession
struct UServerBrowserWindow_C_OnUpdateSession_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.OnFailure
struct UServerBrowserWindow_C_OnFailure_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Request Join Press
struct UServerBrowserWindow_C_Request_Join_Press_Params
{
	class UServerListItem_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Tick
struct UServerBrowserWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
struct UServerBrowserWindow_C_BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UServerBrowserWindow_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Refresh Last Sorting
struct UServerBrowserWindow_C_Refresh_Last_Sorting_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.passwordCancelled
struct UServerBrowserWindow_C_passwordCancelled_Params
{
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.ExecuteUbergraph_ServerBrowserWindow
struct UServerBrowserWindow_C_ExecuteUbergraph_ServerBrowserWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerBrowserWindow.ServerBrowserWindow_C.Found Sessions__DelegateSignature
struct UServerBrowserWindow_C_Found_Sessions__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
