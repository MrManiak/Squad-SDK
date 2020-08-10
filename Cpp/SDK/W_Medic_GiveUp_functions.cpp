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

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Visibility if Dead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_visible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Medic_GiveUp_C::Get_Visibility_if_Dead(bool* is_visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Visibility if Dead");

	UW_Medic_GiveUp_C_Get_Visibility_if_Dead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (is_visible != nullptr)
		*is_visible = params.is_visible;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Teammate Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Teammate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::Get_Teammate_Distance(class ASQSoldier** Teammate, float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Teammate Distance");

	UW_Medic_GiveUp_C_Get_Teammate_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Teammate != nullptr)
		*Teammate = params.Teammate;
	if (distance != nullptr)
		*distance = params.distance;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D");

	UW_Medic_GiveUp_C_OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Medic_GiveUp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Construct");

	UW_Medic_GiveUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_Medic_GiveUp_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Refresh");

	UW_Medic_GiveUp_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_Medic_GiveUp_C::BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature");

	UW_Medic_GiveUp_C_BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_Medic_GiveUp_C::BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature");

	UW_Medic_GiveUp_C_BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature");

	UW_Medic_GiveUp_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature");

	UW_Medic_GiveUp_C_BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.GiveUp
// (BlueprintCallable, BlueprintEvent)
void UW_Medic_GiveUp_C::GiveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.GiveUp");

	UW_Medic_GiveUp_C_GiveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UW_Medic_GiveUp_C_BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Enable Medic Button
// (BlueprintCallable, BlueprintEvent)
void UW_Medic_GiveUp_C::Enable_Medic_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Enable Medic Button");

	UW_Medic_GiveUp_C_Enable_Medic_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Initial Delay for Medic Call
// (BlueprintCallable, BlueprintEvent)
void UW_Medic_GiveUp_C::Initial_Delay_for_Medic_Call()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Initial Delay for Medic Call");

	UW_Medic_GiveUp_C_Initial_Delay_for_Medic_Call_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.Tick");

	UW_Medic_GiveUp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Medic_GiveUp.W_Medic_GiveUp_C.ExecuteUbergraph_W_Medic_GiveUp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Medic_GiveUp_C::ExecuteUbergraph_W_Medic_GiveUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Medic_GiveUp.W_Medic_GiveUp_C.ExecuteUbergraph_W_Medic_GiveUp");

	UW_Medic_GiveUp_C_ExecuteUbergraph_W_Medic_GiveUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
