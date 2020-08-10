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
// Functions
//---------------------------------------------------------------------------

// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Parse Friends and Sessions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Parse_Friends_and_Sessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Parse Friends and Sessions");

	UFriendsBrowserWindow_C_Parse_Friends_and_Sessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Clear Search
// (Public, BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Clear_Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Clear Search");

	UFriendsBrowserWindow_C_Clear_Search_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Search Friends
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Substring                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UFriendsBrowserWindow_C::Search_Friends(const struct FString& Substring)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Search Friends");

	UFriendsBrowserWindow_C_Search_Friends_Params params;
	params.Substring = Substring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFriendsBrowserWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Construct");

	UFriendsBrowserWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnSuccess
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSQBlueprintFriend> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UFriendsBrowserWindow_C::OnSuccess(TArray<struct FSQBlueprintFriend> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnSuccess");

	UFriendsBrowserWindow_C_OnSuccess_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnFailure
// (Event, Public, BlueprintEvent)
void UFriendsBrowserWindow_C::OnFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.OnFailure");

	UFriendsBrowserWindow_C_OnFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Refresh Friends
// (BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Refresh_Friends()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Refresh Friends");

	UFriendsBrowserWindow_C_Refresh_Friends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFriendsBrowserWindow_C::BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature");

	UFriendsBrowserWindow_C_BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UFriendsBrowserWindow_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature");

	UFriendsBrowserWindow_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UFriendsBrowserWindow_C::Set_Composited_Sessions_Event(TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions_Event");

	UFriendsBrowserWindow_C_Set_Composited_Sessions_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.ExecuteUbergraph_FriendsBrowserWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFriendsBrowserWindow_C::ExecuteUbergraph_FriendsBrowserWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.ExecuteUbergraph_FriendsBrowserWindow");

	UFriendsBrowserWindow_C_ExecuteUbergraph_FriendsBrowserWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UFriendsBrowserWindow_C::Set_Composited_Sessions__DelegateSignature(TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Set Composited Sessions__DelegateSignature");

	UFriendsBrowserWindow_C_Set_Composited_Sessions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Start Search__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Start_Search__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Start Search__DelegateSignature");

	UFriendsBrowserWindow_C_Start_Search__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Refresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Finished_Refresh__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Refresh__DelegateSignature");

	UFriendsBrowserWindow_C_Finished_Refresh__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Search__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UFriendsBrowserWindow_C::Finished_Search__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsBrowserWindow.FriendsBrowserWindow_C.Finished Search__DelegateSignature");

	UFriendsBrowserWindow_C_Finished_Search__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
