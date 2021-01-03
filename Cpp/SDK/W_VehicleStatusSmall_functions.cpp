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

// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Turret State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Update_Turret_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Turret State");

	UW_VehicleStatusSmall_C_Update_Turret_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Wheel State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Wheel_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Wheel State");

	UW_VehicleStatusSmall_C_Wheel_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Ammo State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Update_Ammo_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Ammo State");

	UW_VehicleStatusSmall_C_Update_Ammo_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Engine State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Update_Engine_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Update Engine State");

	UW_VehicleStatusSmall_C_Update_Engine_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get_VehicleHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UW_VehicleStatusSmall_C::Get_VehicleHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get_VehicleHealthPercent");

	UW_VehicleStatusSmall_C_Get_VehicleHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get Vehicle
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Get_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Get Vehicle");

	UW_VehicleStatusSmall_C_Get_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VehicleStatusSmall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Construct");

	UW_VehicleStatusSmall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Refresh Vehicle
// (BlueprintCallable, BlueprintEvent)
void UW_VehicleStatusSmall_C::Refresh_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Refresh Vehicle");

	UW_VehicleStatusSmall_C_Refresh_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleStatusSmall_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.Tick");

	UW_VehicleStatusSmall_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.ExecuteUbergraph_W_VehicleStatusSmall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleStatusSmall_C::ExecuteUbergraph_W_VehicleStatusSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleStatusSmall.W_VehicleStatusSmall_C.ExecuteUbergraph_W_VehicleStatusSmall");

	UW_VehicleStatusSmall_C_ExecuteUbergraph_W_VehicleStatusSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
