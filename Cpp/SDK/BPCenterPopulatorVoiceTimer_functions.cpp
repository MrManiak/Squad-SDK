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

// Function BPCenterPopulatorVoiceTimer.BPCenterPopulatorVoiceTimer_C.FinishWidgetSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   ActionModel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorVoiceTimer_C::FinishWidgetSetup(class USQUserWidget* Widget, class UBaseRadialMenu_C* RadialMenu, class UBP_RadialItemModel_C* ActionModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorVoiceTimer.BPCenterPopulatorVoiceTimer_C.FinishWidgetSetup");

	UBPCenterPopulatorVoiceTimer_C_FinishWidgetSetup_Params params;
	params.Widget = Widget;
	params.RadialMenu = RadialMenu;
	params.ActionModel = ActionModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorVoiceTimer.BPCenterPopulatorVoiceTimer_C.ExecuteUbergraph_BPCenterPopulatorVoiceTimer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorVoiceTimer_C::ExecuteUbergraph_BPCenterPopulatorVoiceTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorVoiceTimer.BPCenterPopulatorVoiceTimer_C.ExecuteUbergraph_BPCenterPopulatorVoiceTimer");

	UBPCenterPopulatorVoiceTimer_C_ExecuteUbergraph_BPCenterPopulatorVoiceTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
