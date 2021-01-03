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

// Function GlowingButton_13.GlowingButton_12_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UGlowingButton_12_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.SetText");

	UGlowingButton_12_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.UpdateButtonColor
// (Public, BlueprintCallable, BlueprintEvent)
void UGlowingButton_12_C::UpdateButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.UpdateButtonColor");

	UGlowingButton_12_C_UpdateButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingButton_12_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.SetSelected");

	UGlowingButton_12_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGlowingButton_12_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.Construct");

	UGlowingButton_12_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlowingButton_12_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.Tick");

	UGlowingButton_12_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UGlowingButton_12_C::BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UGlowingButton_12_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingButton_12_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.PreConstruct");

	UGlowingButton_12_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.ExecuteUbergraph_GlowingButton_13
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlowingButton_12_C::ExecuteUbergraph_GlowingButton_13(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.ExecuteUbergraph_GlowingButton_13");

	UGlowingButton_12_C_ExecuteUbergraph_GlowingButton_13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingButton_12_C::OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.OnHover__DelegateSignature");

	UGlowingButton_12_C_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingButton_13.GlowingButton_12_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlowingButton_12_C*     Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlowingButton_12_C::OnClicked__DelegateSignature(bool bSelected, class UGlowingButton_12_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingButton_13.GlowingButton_12_C.OnClicked__DelegateSignature");

	UGlowingButton_12_C_OnClicked__DelegateSignature_Params params;
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
