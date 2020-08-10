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

// Function W_ChatBox.W_ChatBox_C.Get_ScrollButton_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_ChatBox_C::Get_ScrollButton_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Get_ScrollButton_ToolTipWidget_1");

	UW_ChatBox_C_Get_ScrollButton_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ChatBox.W_ChatBox_C.Refresh Scroll Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Refresh_Scroll_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Refresh Scroll Button");

	UW_ChatBox_C_Refresh_Scroll_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Refresh Visuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Refresh_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Refresh Visuals");

	UW_ChatBox_C_Refresh_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Focus Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Focus_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Focus Menu");

	UW_ChatBox_C_Focus_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_ChatBox_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.OnPreviewKeyDown");

	UW_ChatBox_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBox_C::BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UW_ChatBox_C_BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Change Channel
// (BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Change_Channel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Change Channel");

	UW_ChatBox_C_Change_Channel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChatBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Construct");

	UW_ChatBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Add New Chat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQNotificationTypes           NotificationType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBox_C::Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Add New Chat");

	UW_ChatBox_C_Add_New_Chat_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;
	params.Channel = Channel;
	params.Color = Color;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Focus and Change Channel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBox_C::Focus_and_Change_Channel(ESQChat Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Focus and Change Channel");

	UW_ChatBox_C_Focus_and_Change_Channel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Set Chat Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChatBox_C::Set_Chat_Visibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Set Chat Visibility");

	UW_ChatBox_C_Set_Chat_Visibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_ChatBox_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");

	UW_ChatBox_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UW_ChatBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.OnAddedToFocusPath");

	UW_ChatBox_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Bind To Menu Open Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBox_C::Bind_To_Menu_Open_Close(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Bind To Menu Open Close");

	UW_ChatBox_C_Bind_To_Menu_Open_Close_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Parent Closed
// (BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Parent_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Parent Closed");

	UW_ChatBox_C_Parent_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.Parent Opened
// (BlueprintCallable, BlueprintEvent)
void UW_ChatBox_C::Parent_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.Parent Opened");

	UW_ChatBox_C_Parent_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBox_C::ExecuteUbergraph_W_ChatBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox");

	UW_ChatBox_C_ExecuteUbergraph_W_ChatBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
