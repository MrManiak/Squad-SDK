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

// Function AudioWindow.AudioWindow_C.UpdateSoundDevices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAudioWindow_C::UpdateSoundDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.UpdateSoundDevices");

	UAudioWindow_C_UpdateSoundDevices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.Get_ToggleSQUADBEEP_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UAudioWindow_C::Get_ToggleSQUADBEEP_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Get_ToggleSQUADBEEP_ToolTipWidget_1");

	UAudioWindow_C_Get_ToggleSQUADBEEP_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioWindow.AudioWindow_C.Get_ToggleCOMMANDBEEP_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UAudioWindow_C::Get_ToggleCOMMANDBEEP_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Get_ToggleCOMMANDBEEP_ToolTipWidget_1");

	UAudioWindow_C_Get_ToggleCOMMANDBEEP_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioWindow.AudioWindow_C.Get_OUTOFGAMENEW_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UAudioWindow_C::Get_OUTOFGAMENEW_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Get_OUTOFGAMENEW_ToolTipWidget_1");

	UAudioWindow_C_Get_OUTOFGAMENEW_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioWindow.AudioWindow_C.UpdateButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UAudioWindow_C::UpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.UpdateButtons");

	UAudioWindow_C_UpdateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAudioWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Construct");

	UAudioWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__AUDIONEW_K2Node_ComponentBoundEvent_51_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__AUDIONEW_K2Node_ComponentBoundEvent_51_OnButtonClick__DelegateSignature(int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__AUDIONEW_K2Node_ComponentBoundEvent_51_OnButtonClick__DelegateSignature");

	UAudioWindow_C_BndEvt__AUDIONEW_K2Node_ComponentBoundEvent_51_OnButtonClick__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__ToggleCOMMANDBEEP_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__ToggleCOMMANDBEEP_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__ToggleCOMMANDBEEP_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UAudioWindow_C_BndEvt__ToggleCOMMANDBEEP_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__ToggleSQUADBEEP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__ToggleSQUADBEEP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__ToggleSQUADBEEP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UAudioWindow_C_BndEvt__ToggleSQUADBEEP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__ToggleRADIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__ToggleRADIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__ToggleRADIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UAudioWindow_C_BndEvt__ToggleRADIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__MASTERNEW_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__MASTERNEW_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__MASTERNEW_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__MASTERNEW_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__EFFECTSNEW_K2Node_ComponentBoundEvent_49_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__EFFECTSNEW_K2Node_ComponentBoundEvent_49_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__EFFECTSNEW_K2Node_ComponentBoundEvent_49_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__EFFECTSNEW_K2Node_ComponentBoundEvent_49_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__UINEW_K2Node_ComponentBoundEvent_82_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__UINEW_K2Node_ComponentBoundEvent_82_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__UINEW_K2Node_ComponentBoundEvent_82_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__UINEW_K2Node_ComponentBoundEvent_82_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__OUTOFGAMENEW_K2Node_ComponentBoundEvent_150_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__OUTOFGAMENEW_K2Node_ComponentBoundEvent_150_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__OUTOFGAMENEW_K2Node_ComponentBoundEvent_150_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__OUTOFGAMENEW_K2Node_ComponentBoundEvent_150_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__COMMANDVOICENEW_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__COMMANDVOICENEW_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__COMMANDVOICENEW_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__COMMANDVOICENEW_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__VOICENEW_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__VOICENEW_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__VOICENEW_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__VOICENEW_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__LOCALVOICENEW_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__LOCALVOICENEW_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__LOCALVOICENEW_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__LOCALVOICENEW_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.APPLY
// (BlueprintCallable, BlueprintEvent)
void UAudioWindow_C::APPLY()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.APPLY");

	UAudioWindow_C_APPLY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.Revert
// (BlueprintCallable, BlueprintEvent)
void UAudioWindow_C::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Revert");

	UAudioWindow_C_Revert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.Default
// (BlueprintCallable, BlueprintEvent)
void UAudioWindow_C::Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.Default");

	UAudioWindow_C_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__MUSICNEW_K2Node_ComponentBoundEvent_27_OnCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__MUSICNEW_K2Node_ComponentBoundEvent_27_OnCaptureEnd__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__MUSICNEW_K2Node_ComponentBoundEvent_27_OnCaptureEnd__DelegateSignature");

	UAudioWindow_C_BndEvt__MUSICNEW_K2Node_ComponentBoundEvent_27_OnCaptureEnd__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__CommandVoiceBias_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__CommandVoiceBias_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__CommandVoiceBias_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__CommandVoiceBias_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__SquadVoiceBias_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__SquadVoiceBias_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__SquadVoiceBias_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__SquadVoiceBias_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__PrioritySpeakerDucking_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__PrioritySpeakerDucking_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__PrioritySpeakerDucking_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UAudioWindow_C_BndEvt__PrioritySpeakerDucking_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__AUDIOOUTPUTDEVICE_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__AUDIOOUTPUTDEVICE_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature(int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__AUDIOOUTPUTDEVICE_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature");

	UAudioWindow_C_BndEvt__AUDIOOUTPUTDEVICE_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__AUDIOINPUTDEVICE_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__AUDIOINPUTDEVICE_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature(int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__AUDIOINPUTDEVICE_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature");

	UAudioWindow_C_BndEvt__AUDIOINPUTDEVICE_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.BndEvt__ToggleLeaderOnlyBias_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::BndEvt__ToggleLeaderOnlyBias_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.BndEvt__ToggleLeaderOnlyBias_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UAudioWindow_C_BndEvt__ToggleLeaderOnlyBias_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioWindow.AudioWindow_C.ExecuteUbergraph_AudioWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioWindow_C::ExecuteUbergraph_AudioWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioWindow.AudioWindow_C.ExecuteUbergraph_AudioWindow");

	UAudioWindow_C_ExecuteUbergraph_AudioWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
