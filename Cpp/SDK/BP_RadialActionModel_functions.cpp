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

// Function BP_RadialActionModel.BP_RadialActionModel_C.IsInVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsInVehicle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_RadialActionModel_C::IsInVehicle(class AController* Controller, bool* IsInVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel.BP_RadialActionModel_C.IsInVehicle");

	UBP_RadialActionModel_C_IsInVehicle_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInVehicle != nullptr)
		*IsInVehicle = params.IsInVehicle;

}


// Function BP_RadialActionModel.BP_RadialActionModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialActionModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel.BP_RadialActionModel_C.OnClicked");

	UBP_RadialActionModel_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialActionModel.BP_RadialActionModel_C.ExecuteUbergraph_BP_RadialActionModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialActionModel_C::ExecuteUbergraph_BP_RadialActionModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialActionModel.BP_RadialActionModel_C.ExecuteUbergraph_BP_RadialActionModel");

	UBP_RadialActionModel_C_ExecuteUbergraph_BP_RadialActionModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
