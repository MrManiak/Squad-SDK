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

// Function SettingsItem_Slider.SettingsItem_Slider_C.RemovePercentage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   OutText                        (Parm, OutParm)
void USettingsItem_Slider_C::RemovePercentage(const struct FText& InText, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.RemovePercentage");

	USettingsItem_Slider_C_RemovePercentage_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.Get_SpacerImg_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush USettingsItem_Slider_C::Get_SpacerImg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.Get_SpacerImg_Brush_1");

	USettingsItem_Slider_C_Get_SpacerImg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
void USettingsItem_Slider_C::UpdateSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderValue");

	USettingsItem_Slider_C_UpdateSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USettingsItem_Slider_C::UpdateSliderTextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderTextValue");

	USettingsItem_Slider_C_UpdateSliderTextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.SetValue");

	USettingsItem_Slider_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature");

	USettingsItem_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USettingsItem_Slider_C::BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature");

	USettingsItem_Slider_C_BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature");

	USettingsItem_Slider_C_BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsItem_Slider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.Construct");

	USettingsItem_Slider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_Slider_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.PreConstruct");

	USettingsItem_Slider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void USettingsItem_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature");

	USettingsItem_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.ExecuteUbergraph_SettingsItem_Slider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::ExecuteUbergraph_SettingsItem_Slider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.ExecuteUbergraph_SettingsItem_Slider");

	USettingsItem_Slider_C_ExecuteUbergraph_SettingsItem_Slider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.OnCaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::OnCaptureEnd__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.OnCaptureEnd__DelegateSignature");

	USettingsItem_Slider_C_OnCaptureEnd__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_Slider.SettingsItem_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_Slider_C::OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_Slider.SettingsItem_Slider_C.OnValueChanged__DelegateSignature");

	USettingsItem_Slider_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
