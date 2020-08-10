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

// Function BPCenterPopulatorText.BPCenterPopulatorText_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorText_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorText.BPCenterPopulatorText_C.InitialSetup");

	UBPCenterPopulatorText_C_InitialSetup_Params params;
	params.Widget = Widget;
	params.Model = Model;
	params.RadialMenu = RadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorText.BPCenterPopulatorText_C.FinishWidgetSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   ActionModel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorText_C::FinishWidgetSetup(class USQUserWidget* Widget, class UBaseRadialMenu_C* RadialMenu, class UBP_RadialItemModel_C* ActionModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorText.BPCenterPopulatorText_C.FinishWidgetSetup");

	UBPCenterPopulatorText_C_FinishWidgetSetup_Params params;
	params.Widget = Widget;
	params.RadialMenu = RadialMenu;
	params.ActionModel = ActionModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorText.BPCenterPopulatorText_C.ExecuteUbergraph_BPCenterPopulatorText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorText_C::ExecuteUbergraph_BPCenterPopulatorText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorText.BPCenterPopulatorText_C.ExecuteUbergraph_BPCenterPopulatorText");

	UBPCenterPopulatorText_C_ExecuteUbergraph_BPCenterPopulatorText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
