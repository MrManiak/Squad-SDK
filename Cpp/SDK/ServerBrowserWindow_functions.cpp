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
// Functions
//---------------------------------------------------------------------------

// Function ServerBrowserWindow.ServerBrowserWindow_C.Set Promoted Box Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UServerBrowserWindow_C::Set_Promoted_Box_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Set Promoted Box Visibility");

	UServerBrowserWindow_C_Set_Promoted_Box_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Should filter server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Session                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerBrowserWindow_C::Should_filter_server(const struct FBlueprintSessionResult& Session, bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Should filter server");

	UServerBrowserWindow_C_Should_filter_server_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Save Last Sort Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SortType>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LastAscendingSortType          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerBrowserWindow_C::Save_Last_Sort_Type(TEnumAsByte<E_SortType> Type, bool LastAscendingSortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Save Last Sort Type");

	UServerBrowserWindow_C_Save_Last_Sort_Type_Params params;
	params.Type = Type;
	params.LastAscendingSortType = LastAscendingSortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Organise List Rows
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Organise_List_Rows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Organise List Rows");

	UServerBrowserWindow_C_Organise_List_Rows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Add unique sessions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UServerBrowserWindow_C::Add_unique_sessions(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Add unique sessions");

	UServerBrowserWindow_C_Add_unique_sessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Reset Search
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Reset_Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Reset Search");

	UServerBrowserWindow_C_Reset_Search_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Remove Current Server
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Remove_Current_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Remove Current Server");

	UServerBrowserWindow_C_Remove_Current_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Check Mods
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListItem_C*       ServerListItem                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           In_Sync                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerBrowserWindow_C::Check_Mods(class UServerListItem_C* ServerListItem, bool* In_Sync)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Check Mods");

	UServerBrowserWindow_C_Check_Mods_Params params;
	params.ServerListItem = ServerListItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_Sync != nullptr)
		*In_Sync = params.In_Sync;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Set Details Widget Switcher
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Set_Details_Widget_Switcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Set Details Widget Switcher");

	UServerBrowserWindow_C_Set_Details_Widget_Switcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List by Health Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ascending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerBrowserWindow_C::Sort_List_by_Health_Status(bool Ascending)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List by Health Status");

	UServerBrowserWindow_C_Sort_List_by_Health_Status_Params params;
	params.Ascending = Ascending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Ascending                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SortType>        Sort_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::Sort_List(bool Is_Ascending, TEnumAsByte<E_SortType> Sort_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Sort List");

	UServerBrowserWindow_C_Sort_List_Params params;
	params.Is_Ascending = Is_Ascending;
	params.Sort_Type = Sort_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowReservedSlots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ECheckBoxState UServerBrowserWindow_C::GetCheckedShowReservedSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowReservedSlots");

	UServerBrowserWindow_C_GetCheckedShowReservedSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowQueuesSeparately
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ECheckBoxState UServerBrowserWindow_C::GetCheckedShowQueuesSeparately()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowQueuesSeparately");

	UServerBrowserWindow_C_GetCheckedShowQueuesSeparately_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UServerBrowserWindow_C::GetQueueServerButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonVisibility");

	UServerBrowserWindow_C_GetQueueServerButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerBrowserWindow_C::GetQueueServerButtonIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetQueueServerButtonIsEnabled");

	UServerBrowserWindow_C_GetQueueServerButtonIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.StartQueue
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::StartQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.StartQueue");

	UServerBrowserWindow_C_StartQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowEmptyServers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ECheckBoxState UServerBrowserWindow_C::GetCheckedShowEmptyServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowEmptyServers");

	UServerBrowserWindow_C_GetCheckedShowEmptyServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowDiffServers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ECheckBoxState UServerBrowserWindow_C::GetCheckedShowDiffServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetCheckedShowDiffServers");

	UServerBrowserWindow_C_GetCheckedShowDiffServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetServerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PingMs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::GetServerIndex(int PingMs, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetServerIndex");

	UServerBrowserWindow_C_GetServerIndex_Params params;
	params.PingMs = PingMs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UServerBrowserWindow_C::UpdateSession(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateSession");

	UServerBrowserWindow_C_UpdateSession_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.AddNewServerWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UServerListItem_C*       Item                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::AddNewServerWidget(const struct FBlueprintSessionResult& Result, class UServerListItem_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.AddNewServerWidget");

	UServerBrowserWindow_C_AddNewServerWidget_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.ResetServerIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::ResetServerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.ResetServerIndex");

	UServerBrowserWindow_C_ResetServerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.ResetSortButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::ResetSortButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.ResetSortButtons");

	UServerBrowserWindow_C_ResetSortButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.StopUpdatingThrobber
// (Public, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::StopUpdatingThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.StopUpdatingThrobber");

	UServerBrowserWindow_C_StopUpdatingThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.GetLicensingNoticeVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UServerBrowserWindow_C::GetLicensingNoticeVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.GetLicensingNoticeVisibility");

	UServerBrowserWindow_C_GetLicensingNoticeVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateServerList
// (BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::UpdateServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.UpdateServerList");

	UServerBrowserWindow_C_UpdateServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.RequestJoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UServerBrowserWindow_C::RequestJoinServer(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.RequestJoinServer");

	UServerBrowserWindow_C_RequestJoinServer_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UServerBrowserWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Construct");

	UServerBrowserWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.passwordEnteredForced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_ServerPassword_C*    Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::passwordEnteredForced(const struct FString& Password, class UBP_ServerPassword_C* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.passwordEnteredForced");

	UServerBrowserWindow_C_passwordEnteredForced_Params params;
	params.Password = Password;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.OnSuccess
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UServerBrowserWindow_C::OnSuccess(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.OnSuccess");

	UServerBrowserWindow_C_OnSuccess_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.OnUpdateSession
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UServerBrowserWindow_C::OnUpdateSession(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.OnUpdateSession");

	UServerBrowserWindow_C_OnUpdateSession_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.OnFailure
// (Event, Public, BlueprintEvent)
void UServerBrowserWindow_C::OnFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.OnFailure");

	UServerBrowserWindow_C_OnFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Request Join Press
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListItem_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::Request_Join_Press(class UServerListItem_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Request Join Press");

	UServerBrowserWindow_C_Request_Join_Press_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Tick");

	UServerBrowserWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UServerBrowserWindow_C::BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature");

	UServerBrowserWindow_C_BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UServerBrowserWindow_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Refresh Last Sorting
// (BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Refresh_Last_Sorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Refresh Last Sorting");

	UServerBrowserWindow_C_Refresh_Last_Sorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.passwordCancelled
// (BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::passwordCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.passwordCancelled");

	UServerBrowserWindow_C_passwordCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.ExecuteUbergraph_ServerBrowserWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerBrowserWindow_C::ExecuteUbergraph_ServerBrowserWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.ExecuteUbergraph_ServerBrowserWindow");

	UServerBrowserWindow_C_ExecuteUbergraph_ServerBrowserWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerBrowserWindow.ServerBrowserWindow_C.Found Sessions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UServerBrowserWindow_C::Found_Sessions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWindow.ServerBrowserWindow_C.Found Sessions__DelegateSignature");

	UServerBrowserWindow_C_Found_Sessions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
