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

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Can Afford
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Construction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UComp_VehicleBayHandler_C::Can_Afford(int Construction, int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Can Afford");

	UComp_VehicleBayHandler_C_Can_Afford_Params params;
	params.Construction = Construction;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Get Fob
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQForwardBase*          fob                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_VehicleBayHandler_C::Get_Fob(class ASQForwardBase** fob)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Get Fob");

	UComp_VehicleBayHandler_C_Get_Fob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (fob != nullptr)
		*fob = params.fob;

}


// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Server Request Spawn Vehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleBay_C*        Vehicle_Bay                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Require_FOB                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UComp_VehicleBayHandler_C::Server_Request_Spawn_Vehicle(class UClass* Class, class ABP_VehicleBay_C* Vehicle_Bay, bool Require_FOB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Server Request Spawn Vehicle");

	UComp_VehicleBayHandler_C_Server_Request_Spawn_Vehicle_Params params;
	params.Class = Class;
	params.Vehicle_Bay = Vehicle_Bay;
	params.Require_FOB = Require_FOB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UComp_VehicleBayHandler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ReceiveBeginPlay");

	UComp_VehicleBayHandler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ExecuteUbergraph_Comp_VehicleBayHandler
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_VehicleBayHandler_C::ExecuteUbergraph_Comp_VehicleBayHandler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ExecuteUbergraph_Comp_VehicleBayHandler");

	UComp_VehicleBayHandler_C_ExecuteUbergraph_Comp_VehicleBayHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
