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

// Function UMG_VehicleCargo.UMG_VehicleCargo_C.ValueSizeBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InPoints                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleCargo_C::ValueSizeBox(float InPoints, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.ValueSizeBox");

	UUMG_VehicleCargo_C_ValueSizeBox_Params params;
	params.InPoints = InPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.DisableUI
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleCargo_C::DisableUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.DisableUI");

	UUMG_VehicleCargo_C_DisableUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.SetupUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQVehicle*              VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleCargo_C::SetupUI(class ASQVehicle* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.SetupUI");

	UUMG_VehicleCargo_C_SetupUI_Params params;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.Set Name
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleCargo_C::Set_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.Set Name");

	UUMG_VehicleCargo_C_Set_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.Refresh Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_VehicleCargo_C::Refresh_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.Refresh Info");

	UUMG_VehicleCargo_C_Refresh_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_VehicleCargo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.Construct");

	UUMG_VehicleCargo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_VehicleCargo_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.Destruct");

	UUMG_VehicleCargo_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_VehicleCargo.UMG_VehicleCargo_C.ExecuteUbergraph_UMG_VehicleCargo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_VehicleCargo_C::ExecuteUbergraph_UMG_VehicleCargo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_VehicleCargo.UMG_VehicleCargo_C.ExecuteUbergraph_UMG_VehicleCargo");

	UUMG_VehicleCargo_C_ExecuteUbergraph_UMG_VehicleCargo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
