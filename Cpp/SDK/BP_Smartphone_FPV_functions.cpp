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

// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Control Drone UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Smartphone_FPV_C::Control_Drone_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Control Drone UI");

	ABP_Smartphone_FPV_C_Control_Drone_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnUnequip
// (Event, Protected, BlueprintEvent)
void ABP_Smartphone_FPV_C::BlueprintOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnUnequip");

	ABP_Smartphone_FPV_C_BlueprintOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Smartphone_FPV_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnZoom");

	ABP_Smartphone_FPV_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Smartphone_FPV_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveTick");

	ABP_Smartphone_FPV_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Server Possess Drone
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Possess                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Smartphone_FPV_C::Server_Possess_Drone(bool Possess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Server Possess Drone");

	ABP_Smartphone_FPV_C_Server_Possess_Drone_Params params;
	params.Possess = Possess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Smartphone_FPV_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ReceiveBeginPlay");

	ABP_Smartphone_FPV_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_Smartphone_FPV_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.BlueprintOnEquip");

	ABP_Smartphone_FPV_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FlyingDrone_C*       My_Drone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Smartphone_FPV_C::Init(class ABP_FlyingDrone_C* My_Drone, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.Init");

	ABP_Smartphone_FPV_C_Init_Params params;
	params.My_Drone = My_Drone;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ExecuteUbergraph_BP_Smartphone_FPV
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Smartphone_FPV_C::ExecuteUbergraph_BP_Smartphone_FPV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Smartphone_FPV.BP_Smartphone_FPV_C.ExecuteUbergraph_BP_Smartphone_FPV");

	ABP_Smartphone_FPV_C_ExecuteUbergraph_BP_Smartphone_FPV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
