#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Can Afford
struct UComp_VehicleBayHandler_C_Can_Afford_Params
{
	int                                                Construction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Get Fob
struct UComp_VehicleBayHandler_C_Get_Fob_Params
{
	class ASQForwardBase*                              fob;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.Server Request Spawn Vehicle
struct UComp_VehicleBayHandler_C_Server_Request_Spawn_Vehicle_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VehicleBay_C*                            Vehicle_Bay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Require_FOB;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ReceiveBeginPlay
struct UComp_VehicleBayHandler_C_ReceiveBeginPlay_Params
{
};

// Function Comp_VehicleBayHandler.Comp_VehicleBayHandler_C.ExecuteUbergraph_Comp_VehicleBayHandler
struct UComp_VehicleBayHandler_C_ExecuteUbergraph_Comp_VehicleBayHandler_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
