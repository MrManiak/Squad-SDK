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

// Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorVehicle_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.InitialSetup");

	UBPCenterPopulatorVehicle_C_InitialSetup_Params params;
	params.Widget = Widget;
	params.Model = Model;
	params.RadialMenu = RadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.FinishWidgetSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   ActionModel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorVehicle_C::FinishWidgetSetup(class USQUserWidget* Widget, class UBaseRadialMenu_C* RadialMenu, class UBP_RadialItemModel_C* ActionModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.FinishWidgetSetup");

	UBPCenterPopulatorVehicle_C_FinishWidgetSetup_Params params;
	params.Widget = Widget;
	params.RadialMenu = RadialMenu;
	params.ActionModel = ActionModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.ExecuteUbergraph_BPCenterPopulatorVehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorVehicle_C::ExecuteUbergraph_BPCenterPopulatorVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorVehicle.BPCenterPopulatorVehicle_C.ExecuteUbergraph_BPCenterPopulatorVehicle");

	UBPCenterPopulatorVehicle_C_ExecuteUbergraph_BPCenterPopulatorVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
