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

// Function BP_RadialAction.BP_RadialAction_C.IsInVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsInVehicle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_RadialAction_C::IsInVehicle(class AController* Controller, bool* IsInVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialAction.BP_RadialAction_C.IsInVehicle");

	UBP_RadialAction_C_IsInVehicle_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInVehicle != nullptr)
		*IsInVehicle = params.IsInVehicle;

}


// Function BP_RadialAction.BP_RadialAction_C.CanClick
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_RadialAction_C::CanClick(class APlayerController* Controller, class UBP_RadialItemModel_C* Model, bool* CanClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialAction.BP_RadialAction_C.CanClick");

	UBP_RadialAction_C_CanClick_Params params;
	params.Controller = Controller;
	params.Model = Model;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanClick != nullptr)
		*CanClick = params.CanClick;

}


// Function BP_RadialAction.BP_RadialAction_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Raidal_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialAction_C::OnClicked(class UBaseRadialMenu_C* Raidal_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialAction.BP_RadialAction_C.OnClicked");

	UBP_RadialAction_C_OnClicked_Params params;
	params.Raidal_Menu = Raidal_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialAction.BP_RadialAction_C.ExecuteUbergraph_BP_RadialAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialAction_C::ExecuteUbergraph_BP_RadialAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialAction.BP_RadialAction_C.ExecuteUbergraph_BP_RadialAction");

	UBP_RadialAction_C_ExecuteUbergraph_BP_RadialAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
