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

// Function MainMenuScreen.MainMenuScreen_C.Setup Pending Queue Screen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQGameInstance*         instance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::Setup_Pending_Queue_Screen(class USQGameInstance* instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Setup Pending Queue Screen");

	UMainMenuScreen_C_Setup_Pending_Queue_Screen_Params params;
	params.instance = instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UMainMenuScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.OnKeyDown");

	UMainMenuScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Get Main Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MainMenu_PC_C*       Menu_PC                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::Get_Main_Menu(bool* Success, class ABP_MainMenu_PC_C** Menu_PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get Main Menu");

	UMainMenuScreen_C_Get_Main_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Menu_PC != nullptr)
		*Menu_PC = params.Menu_PC;

}


// Function MainMenuScreen.MainMenuScreen_C.Hide Back Button
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Hide_Back_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Hide Back Button");

	UMainMenuScreen_C_Hide_Back_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get_Button_HideHUD_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UMainMenuScreen_C::Get_Button_HideHUD_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_Button_HideHUD_ToolTipWidget_1");

	UMainMenuScreen_C_Get_Button_HideHUD_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Toggle Game HUD
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Toggle_Game_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Toggle Game HUD");

	UMainMenuScreen_C_Toggle_Game_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get_GameDebug_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UMainMenuScreen_C::Get_GameDebug_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_GameDebug_ToolTipWidget_1");

	UMainMenuScreen_C_Get_GameDebug_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Get_GameReset_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UMainMenuScreen_C::Get_GameReset_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_GameReset_ToolTipWidget_1");

	UMainMenuScreen_C_Get_GameReset_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Close Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Close_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Close Menu");

	UMainMenuScreen_C_Close_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Check Server Issues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Check_Server_Issues()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Check Server Issues");

	UMainMenuScreen_C_Check_Server_Issues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Leave Queue Challenge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cached_Session_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBlueprintSessionResult Cached_Session                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UMainMenuScreen_C::Leave_Queue_Challenge(bool Cached_Session_, const struct FBlueprintSessionResult& Cached_Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Leave Queue Challenge");

	UMainMenuScreen_C_Leave_Queue_Challenge_Params params;
	params.Cached_Session_ = Cached_Session_;
	params.Cached_Session = Cached_Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Enable Refresh Servers
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Enable_Refresh_Servers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Enable Refresh Servers");

	UMainMenuScreen_C_Enable_Refresh_Servers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get Menu Cam
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Get_Menu_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get Menu Cam");

	UMainMenuScreen_C_Get_Menu_Cam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.On Join Queue
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::On_Join_Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.On Join Queue");

	UMainMenuScreen_C_On_Join_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Hide Queue Info
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Hide_Queue_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Hide Queue Info");

	UMainMenuScreen_C_Hide_Queue_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Start Training
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Start_Training()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Start Training");

	UMainMenuScreen_C_Start_Training_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get_StopInputImage_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::Get_StopInputImage_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_StopInputImage_Visibility_1");

	UMainMenuScreen_C_Get_StopInputImage_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.On Leave Queue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Server                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBlueprintSessionResult Sesh                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UMainMenuScreen_C::On_Leave_Queue(bool New_Server, const struct FBlueprintSessionResult& Sesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.On Leave Queue");

	UMainMenuScreen_C_On_Leave_Queue_Params params;
	params.New_Server = New_Server;
	params.Sesh = Sesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get_LeaveQueueConfirm_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::Get_LeaveQueueConfirm_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_LeaveQueueConfirm_Visibility_1");

	UMainMenuScreen_C_Get_LeaveQueueConfirm_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Remove Exit Buttons
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Remove_Exit_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Remove Exit Buttons");

	UMainMenuScreen_C_Remove_Exit_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Set Context Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Context_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::Set_Context_Widgets(class UWidget* Context_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Set Context Widgets");

	UMainMenuScreen_C_Set_Context_Widgets_Params params;
	params.Context_Widget = Context_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Set Visible Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Main_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Nav_Widget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Bottom_context_widget          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainMenuScreen_C::Set_Visible_Widgets(class UWidget* Main_Widget, class UWidget* Nav_Widget, class UWidget* Bottom_context_widget, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Set Visible Widgets");

	UMainMenuScreen_C_Set_Visible_Widgets_Params params;
	params.Main_Widget = Main_Widget;
	params.Nav_Widget = Nav_Widget;
	params.Bottom_context_widget = Bottom_context_widget;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Clear Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Clear_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Clear Menu");

	UMainMenuScreen_C_Clear_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Get_ServerMessageConfirmation_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::Get_ServerMessageConfirmation_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_ServerMessageConfirmation_Visibility_1");

	UMainMenuScreen_C_Get_ServerMessageConfirmation_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.CustomGamesButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::CustomGamesButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.CustomGamesButtonVisibility");

	UMainMenuScreen_C_CustomGamesButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.InfoWidgetVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::InfoWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.InfoWidgetVisibility");

	UMainMenuScreen_C_InfoWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Get_DISCONNECT_Visiblity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::Get_DISCONNECT_Visiblity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_DISCONNECT_Visiblity_1");

	UMainMenuScreen_C_Get_DISCONNECT_Visiblity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Get_Background_Image_Visiblity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenuScreen_C::Get_Background_Image_Visiblity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Get_Background_Image_Visiblity_1");

	UMainMenuScreen_C_Get_Background_Image_Visiblity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Close");

	UMainMenuScreen_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Open");

	UMainMenuScreen_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.UnselectNavButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Except                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::UnselectNavButtons(class UWidget* Except)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.UnselectNavButtons");

	UMainMenuScreen_C_UnselectNavButtons_Params params;
	params.Except = Except;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.UnselectSettingsButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                 Except                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::UnselectSettingsButtons(bool selected, class UWidget* Except)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.UnselectSettingsButtons");

	UMainMenuScreen_C_UnselectSettingsButtons_Params params;
	params.selected = selected;
	params.Except = Except;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UMainMenuScreen_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.GetBrush_1");

	UMainMenuScreen_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuScreen.MainMenuScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Tick");

	UMainMenuScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.OpenResetBox
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::OpenResetBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.OpenResetBox");

	UMainMenuScreen_C_OpenResetBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.HideServerMessageConfirmation
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::HideServerMessageConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.HideServerMessageConfirmation");

	UMainMenuScreen_C_HideServerMessageConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Open Exit Window
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Open_Exit_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Open Exit Window");

	UMainMenuScreen_C_Open_Exit_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Open Disconnect Window
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Open_Disconnect_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Open Disconnect Window");

	UMainMenuScreen_C_Open_Disconnect_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMainMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Construct");

	UMainMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Reset Settings Active Widget
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Reset_Settings_Active_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Reset Settings Active Widget");

	UMainMenuScreen_C_Reset_Settings_Active_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Refresh Steam Status
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Refresh_Steam_Status()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Refresh Steam Status");

	UMainMenuScreen_C_Refresh_Steam_Status_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Return To Browser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dedicated_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainMenuScreen_C::Return_To_Browser(bool Dedicated_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Return To Browser");

	UMainMenuScreen_C_Return_To_Browser_Params params;
	params.Dedicated_ = Dedicated_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature");

	UMainMenuScreen_C_BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UMainMenuScreen_C::BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMainMenuScreen_C_BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Finished Search_Event_1
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Finished_Search_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Finished Search_Event_1");

	UMainMenuScreen_C_Finished_Search_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Listen For Menu Cam
// (BlueprintCallable, BlueprintEvent)
void UMainMenuScreen_C::Listen_For_Menu_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Listen For Menu Cam");

	UMainMenuScreen_C_Listen_For_Menu_Cam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Possessed Menu Cam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuCamPawn_C*          NewMenuCam                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::Possessed_Menu_Cam(class AMenuCamPawn_C* NewMenuCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Possessed Menu Cam");

	UMainMenuScreen_C_Possessed_Menu_Cam_Params params;
	params.NewMenuCam = NewMenuCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMainMenuScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.Destruct");

	UMainMenuScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMainMenuScreen_C_BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuScreen.MainMenuScreen_C.ExecuteUbergraph_MainMenuScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuScreen_C::ExecuteUbergraph_MainMenuScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuScreen.MainMenuScreen_C.ExecuteUbergraph_MainMenuScreen");

	UMainMenuScreen_C_ExecuteUbergraph_MainMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
