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

// Function W_VehicleStatus.W_VehicleStatus_C.VehicleHealthColor
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::VehicleHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.VehicleHealthColor");

	UW_VehicleStatus_C_VehicleHealthColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Update Turret State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Update_Turret_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Update Turret State");

	UW_VehicleStatus_C_Update_Turret_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Wheel State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Wheel_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Wheel State");

	UW_VehicleStatus_C_Wheel_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Update Ammo State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Update_Ammo_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Update Ammo State");

	UW_VehicleStatus_C_Update_Ammo_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Update Engine State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Update_Engine_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Update Engine State");

	UW_VehicleStatus_C_Update_Engine_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Get_VehicleHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UW_VehicleStatus_C::Get_VehicleHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Get_VehicleHealthPercent");

	UW_VehicleStatus_C_Get_VehicleHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_VehicleStatus.W_VehicleStatus_C.Get Vehicle
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Get_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Get Vehicle");

	UW_VehicleStatus_C_Get_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VehicleStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Construct");

	UW_VehicleStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Refresh Vehicle
// (BlueprintCallable, BlueprintEvent)
void UW_VehicleStatus_C::Refresh_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Refresh Vehicle");

	UW_VehicleStatus_C_Refresh_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.Tick");

	UW_VehicleStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatus.W_VehicleStatus_C.ExecuteUbergraph_W_VehicleStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleStatus_C::ExecuteUbergraph_W_VehicleStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatus.W_VehicleStatus_C.ExecuteUbergraph_W_VehicleStatus");

	UW_VehicleStatus_C_ExecuteUbergraph_W_VehicleStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
