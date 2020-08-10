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

// Function W_SquadCreate.W_SquadCreate_C.Get_ButtonLocked_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_SquadCreate_C::Get_ButtonLocked_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.Get_ButtonLocked_ToolTipWidget_1");

	UW_SquadCreate_C_Get_ButtonLocked_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadCreate.W_SquadCreate_C.Refresh Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_SquadCreate_C::Refresh_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.Refresh Widget");

	UW_SquadCreate_C_Refresh_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BIND - Num Player
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_SquadCreate_C::BIND___Num_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BIND - Num Player");

	UW_SquadCreate_C_BIND___Num_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadCreate.W_SquadCreate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SquadCreate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.Construct");

	UW_SquadCreate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_SquadCreate_C::BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature");

	UW_SquadCreate_C_BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadCreate_C::BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");

	UW_SquadCreate_C_BndEvt__Create_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadCreate_C::BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UW_SquadCreate_C_BndEvt__Leave_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadCreate_C::BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature");

	UW_SquadCreate_C_BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.Update Lock Icon
// (BlueprintCallable, BlueprintEvent)
void UW_SquadCreate_C::Update_Lock_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.Update Lock Icon");

	UW_SquadCreate_C_Update_Lock_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadCreate_C::BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UW_SquadCreate_C_BndEvt__CreateSquad_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UW_SquadCreate_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.OnAddedToFocusPath");

	UW_SquadCreate_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadCreate.W_SquadCreate_C.ExecuteUbergraph_W_SquadCreate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadCreate_C::ExecuteUbergraph_W_SquadCreate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadCreate.W_SquadCreate_C.ExecuteUbergraph_W_SquadCreate");

	UW_SquadCreate_C_ExecuteUbergraph_W_SquadCreate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
