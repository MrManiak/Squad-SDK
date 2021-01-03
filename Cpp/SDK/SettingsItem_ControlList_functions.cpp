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

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Is Action Key Valid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Key_Is_Valid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_ControlList_C::Is_Action_Key_Valid(bool* Key_Is_Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.Is Action Key Valid");

	USettingsItem_ControlList_C_Is_Action_Key_Valid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key_Is_Valid != nullptr)
		*Key_Is_Valid = params.Key_Is_Valid;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Get Axis Map to Edit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInputAxisKeyMapping    Map                            (Parm, OutParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_ControlList_C::Get_Axis_Map_to_Edit(struct FInputAxisKeyMapping* Map, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.Get Axis Map to Edit");

	USettingsItem_ControlList_C_Get_Axis_Map_to_Edit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindAxisKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USettingsItem_ControlList_C::RebindAxisKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindAxisKey");

	USettingsItem_ControlList_C_RebindAxisKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindActionKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USettingsItem_ControlList_C::RebindActionKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindActionKey");

	USettingsItem_ControlList_C_RebindActionKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKey>            Keys                           (Parm, OutParm, ZeroConstructor)
void USettingsItem_ControlList_C::GetMappedKeys(TArray<struct FKey>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedKeys");

	USettingsItem_ControlList_C_GetMappedKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.TranslateKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::TranslateKey(const struct FKey& Key, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.TranslateKey");

	USettingsItem_ControlList_C_TranslateKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedAxisKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKey>            Keys                           (Parm, OutParm, ZeroConstructor)
void USettingsItem_ControlList_C::GetMappedAxisKeys(TArray<struct FKey>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedAxisKeys");

	USettingsItem_ControlList_C_GetMappedAxisKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedActionKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKey>            Keys                           (Parm, OutParm, ZeroConstructor)
void USettingsItem_ControlList_C::GetMappedActionKeys(TArray<struct FKey>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedActionKeys");

	USettingsItem_ControlList_C_GetMappedActionKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USettingsItem_ControlList_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnMouseButtonDown");

	USettingsItem_ControlList_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USettingsItem_ControlList_C::OnInput(const struct FKey& InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput");

	USettingsItem_ControlList_C_OnInput_Params params;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.FinishInputCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    newKey                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USettingsItem_ControlList_C::FinishInputCapture(const struct FKey& newKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.FinishInputCapture");

	USettingsItem_ControlList_C_FinishInputCapture_Params params;
	params.newKey = newKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.StartInputCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::StartInputCapture(int KeyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.StartInputCapture");

	USettingsItem_ControlList_C_StartInputCapture_Params params;
	params.KeyId = KeyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.UpdateKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USettingsItem_ControlList_C::UpdateKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.UpdateKeys");

	USettingsItem_ControlList_C_UpdateKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UControlsWindow_C*       ControlsWindow                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   FriendlyName                   (BlueprintVisible, BlueprintReadOnly, Parm)
void USettingsItem_ControlList_C::Init(class UControlsWindow_C* ControlsWindow, const struct FName& ActionName, const struct FText& FriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.Init");

	USettingsItem_ControlList_C_Init_Params params;
	params.ControlsWindow = ControlsWindow;
	params.ActionName = ActionName;
	params.FriendlyName = FriendlyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_ControlList_C::BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_ControlList_C::BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BindInputCaptureEvents
// (BlueprintCallable, BlueprintEvent)
void USettingsItem_ControlList_C::BindInputCaptureEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BindInputCaptureEvents");

	USettingsItem_ControlList_C_BindInputCaptureEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USettingsItem_ControlList_C::OnInput_Event_1(const struct FKey& InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput_Event_1");

	USettingsItem_ControlList_C_OnInput_Event_1_Params params;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlowingButton_12_C*     Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlowingButton_12_C*     Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_ControlList_C::BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlowingButton_12_C*     Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void USettingsItem_ControlList_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void USettingsItem_ControlList_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature");

	USettingsItem_ControlList_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_ControlList.SettingsItem_ControlList_C.ExecuteUbergraph_SettingsItem_ControlList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_ControlList_C::ExecuteUbergraph_SettingsItem_ControlList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_ControlList.SettingsItem_ControlList_C.ExecuteUbergraph_SettingsItem_ControlList");

	USettingsItem_ControlList_C_ExecuteUbergraph_SettingsItem_ControlList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
