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

// Function Setting_Button.Setting_Button_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USetting_Button_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.OnKeyDown");

	USetting_Button_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Setting_Button.Setting_Button_C.Refresh Line
// (Public, BlueprintCallable, BlueprintEvent)
void USetting_Button_C::Refresh_Line()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Refresh Line");

	USetting_Button_C_Refresh_Line_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.Setup Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USetting_Button_C::Setup_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Setup Button");

	USetting_Button_C_Setup_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.Update Button
// (Public, BlueprintCallable, BlueprintEvent)
void USetting_Button_C::Update_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Update Button");

	USetting_Button_C_Update_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.Bind_TextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor USetting_Button_C::Bind_TextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Bind_TextColor");

	USetting_Button_C_Bind_TextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Setting_Button.Setting_Button_C.Bind_LineColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USetting_Button_C::Bind_LineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Bind_LineColor");

	USetting_Button_C_Bind_LineColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Setting_Button.Setting_Button_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USetting_Button_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.SetText");

	USetting_Button_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USetting_Button_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.UpdateColors");

	USetting_Button_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USetting_Button_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.SetSelected");

	USetting_Button_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USetting_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Tick");

	USetting_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USetting_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	USetting_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USetting_Button_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.PreConstruct");

	USetting_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USetting_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.Construct");

	USetting_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.ExecuteUbergraph_Setting_Button
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USetting_Button_C::ExecuteUbergraph_Setting_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.ExecuteUbergraph_Setting_Button");

	USetting_Button_C_ExecuteUbergraph_Setting_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.OnDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void USetting_Button_C::OnDoubleClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.OnDoubleClicked__DelegateSignature");

	USetting_Button_C_OnDoubleClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USetting_Button_C::OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.OnHover__DelegateSignature");

	USetting_Button_C_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Setting_Button.Setting_Button_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USetting_Button_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USetting_Button_C::OnClicked__DelegateSignature(bool bSelected, class USetting_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Setting_Button.Setting_Button_C.OnClicked__DelegateSignature");

	USetting_Button_C_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
