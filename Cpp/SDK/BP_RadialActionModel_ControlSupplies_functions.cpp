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

// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Is Soldier Alive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_RadialActionModel_ControlSupplies_C::Is_Soldier_Alive(class AController* Target, bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Is Soldier Alive");

	UBP_RadialActionModel_ControlSupplies_C_Is_Soldier_Alive_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;

}


// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Validate Logistics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_Valid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_RadialActionModel_ControlSupplies_C::Validate_Logistics(class UBaseRadialMenu_C* Radial, bool* Is_Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.Validate Logistics");

	UBP_RadialActionModel_ControlSupplies_C_Validate_Logistics_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Valid != nullptr)
		*Is_Valid = params.Is_Valid;

}


// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialActionModel_ControlSupplies_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnClicked");

	UBP_RadialActionModel_ControlSupplies_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialActionModel_ControlSupplies_C::OnReleased(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.OnReleased");

	UBP_RadialActionModel_ControlSupplies_C_OnReleased_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.ExecuteUbergraph_BP_RadialActionModel_ControlSupplies
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialActionModel_ControlSupplies_C::ExecuteUbergraph_BP_RadialActionModel_ControlSupplies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C.ExecuteUbergraph_BP_RadialActionModel_ControlSupplies");

	UBP_RadialActionModel_ControlSupplies_C_ExecuteUbergraph_BP_RadialActionModel_ControlSupplies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
