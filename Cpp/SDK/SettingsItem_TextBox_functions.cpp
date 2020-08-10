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

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.SetTextBoxText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewTextBoxString               (BlueprintVisible, BlueprintReadOnly, Parm)
void USettingsItem_TextBox_C::SetTextBoxText(const struct FText& NewTextBoxString)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.SetTextBoxText");

	USettingsItem_TextBox_C_SetTextBoxText_Params params;
	params.NewTextBoxString = NewTextBoxString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.Get_SpacerImg_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush USettingsItem_TextBox_C::Get_SpacerImg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.Get_SpacerImg_Brush_1");

	USettingsItem_TextBox_C_Get_SpacerImg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsItem_TextBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.Construct");

	USettingsItem_TextBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_TextBox_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature");

	USettingsItem_TextBox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USettingsItem_TextBox_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");

	USettingsItem_TextBox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_TextBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.PreConstruct");

	USettingsItem_TextBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.ExecuteUbergraph_SettingsItem_TextBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_TextBox_C::ExecuteUbergraph_SettingsItem_TextBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.ExecuteUbergraph_SettingsItem_TextBox");

	USettingsItem_TextBox_C_ExecuteUbergraph_SettingsItem_TextBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TextBox.SettingsItem_TextBox_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (BlueprintVisible, BlueprintReadOnly, Parm)
void USettingsItem_TextBox_C::OnValueChanged__DelegateSignature(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TextBox.SettingsItem_TextBox_C.OnValueChanged__DelegateSignature");

	USettingsItem_TextBox_C_OnValueChanged__DelegateSignature_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
