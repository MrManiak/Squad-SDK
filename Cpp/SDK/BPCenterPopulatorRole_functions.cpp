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

// Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorRole_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.InitialSetup");

	UBPCenterPopulatorRole_C_InitialSetup_Params params;
	params.Widget = Widget;
	params.Model = Model;
	params.RadialMenu = RadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.FinishWidgetSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   ActionModel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorRole_C::FinishWidgetSetup(class USQUserWidget* Widget, class UBaseRadialMenu_C* RadialMenu, class UBP_RadialItemModel_C* ActionModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.FinishWidgetSetup");

	UBPCenterPopulatorRole_C_FinishWidgetSetup_Params params;
	params.Widget = Widget;
	params.RadialMenu = RadialMenu;
	params.ActionModel = ActionModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.ExecuteUbergraph_BPCenterPopulatorRole
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPCenterPopulatorRole_C::ExecuteUbergraph_BPCenterPopulatorRole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCenterPopulatorRole.BPCenterPopulatorRole_C.ExecuteUbergraph_BPCenterPopulatorRole");

	UBPCenterPopulatorRole_C_ExecuteUbergraph_BPCenterPopulatorRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
