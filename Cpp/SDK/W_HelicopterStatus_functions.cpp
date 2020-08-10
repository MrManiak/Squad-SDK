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

// Function W_HelicopterStatus.W_HelicopterStatus_C.Update Tail Rotor State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::Update_Tail_Rotor_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Update Tail Rotor State");

	UW_HelicopterStatus_C_Update_Tail_Rotor_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Get Specific Blades
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USQRotorBladesComponent* Rotor                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelicopterStatus_C::Get_Specific_Blades(bool Main, class USQRotorBladesComponent** Rotor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Get Specific Blades");

	UW_HelicopterStatus_C_Get_Specific_Blades_Params params;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotor != nullptr)
		*Rotor = params.Rotor;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.VehicleHealthColor
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::VehicleHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.VehicleHealthColor");

	UW_HelicopterStatus_C_VehicleHealthColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Update Main Rotor State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::Update_Main_Rotor_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Update Main Rotor State");

	UW_HelicopterStatus_C_Update_Main_Rotor_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Update Engine State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::Update_Engine_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Update Engine State");

	UW_HelicopterStatus_C_Update_Engine_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Get_VehicleHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UW_HelicopterStatus_C::Get_VehicleHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Get_VehicleHealthPercent");

	UW_HelicopterStatus_C_Get_VehicleHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Get Helicopter
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::Get_Helicopter()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Get Helicopter");

	UW_HelicopterStatus_C_Get_Helicopter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_HelicopterStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Construct");

	UW_HelicopterStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Refresh Vehicle
// (BlueprintCallable, BlueprintEvent)
void UW_HelicopterStatus_C::Refresh_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Refresh Vehicle");

	UW_HelicopterStatus_C_Refresh_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelicopterStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.Tick");

	UW_HelicopterStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterStatus.W_HelicopterStatus_C.ExecuteUbergraph_W_HelicopterStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelicopterStatus_C::ExecuteUbergraph_W_HelicopterStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterStatus.W_HelicopterStatus_C.ExecuteUbergraph_W_HelicopterStatus");

	UW_HelicopterStatus_C_ExecuteUbergraph_W_HelicopterStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
