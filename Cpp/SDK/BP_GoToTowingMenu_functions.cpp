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

// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInteractingWithHelicopter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GoToTowingMenu_C::IsInteractingWithHelicopter(class UBaseRadialMenu_C* Menu, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInteractingWithHelicopter");

	UBP_GoToTowingMenu_C_IsInteractingWithHelicopter_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInStagingPhase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           StagingPhaseActive             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GoToTowingMenu_C::IsInStagingPhase(class APlayerController* Controller, bool* StagingPhaseActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInStagingPhase");

	UBP_GoToTowingMenu_C_IsInStagingPhase_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StagingPhaseActive != nullptr)
		*StagingPhaseActive = params.StagingPhaseActive;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsPlayerOutOfVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOutOfVehicle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GoToTowingMenu_C::IsPlayerOutOfVehicle(class AController* Controller, bool* IsOutOfVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsPlayerOutOfVehicle");

	UBP_GoToTowingMenu_C_IsPlayerOutOfVehicle_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOutOfVehicle != nullptr)
		*IsOutOfVehicle = params.IsOutOfVehicle;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsEmergencyMoveAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GoToTowingMenu_C::IsEmergencyMoveAvailable(class UBaseRadialMenu_C* Menu, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsEmergencyMoveAvailable");

	UBP_GoToTowingMenu_C_IsEmergencyMoveAvailable_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.SetActiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USQRadialButton*         Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GoToTowingMenu_C::SetActiveButton(bool Active, class USQRadialButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.SetActiveButton");

	UBP_GoToTowingMenu_C_SetActiveButton_Params params;
	params.Active = Active;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInDriverSeatOfGroundVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsInDriverSeat                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GoToTowingMenu_C::IsInDriverSeatOfGroundVehicle(class AController* Controller, bool* IsInDriverSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.IsInDriverSeatOfGroundVehicle");

	UBP_GoToTowingMenu_C_IsInDriverSeatOfGroundVehicle_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInDriverSeat != nullptr)
		*IsInDriverSeat = params.IsInDriverSeat;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GoToTowingMenu_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.OnClicked");

	UBP_GoToTowingMenu_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GoToTowingMenu_C::Populate(class USQRadialButton* Widget, class UBaseRadialMenu_C* Menu, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.Populate");

	UBP_GoToTowingMenu_C_Populate_Params params;
	params.Widget = Widget;
	params.Menu = Menu;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.ExecuteUbergraph_BP_GoToTowingMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GoToTowingMenu_C::ExecuteUbergraph_BP_GoToTowingMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoToTowingMenu.BP_GoToTowingMenu_C.ExecuteUbergraph_BP_GoToTowingMenu");

	UBP_GoToTowingMenu_C_ExecuteUbergraph_BP_GoToTowingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
