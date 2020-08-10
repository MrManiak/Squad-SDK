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

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ShouldDisplayPrompt
struct ABP_VehicleBayConsole_C_ShouldDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetInterfaceTeam
struct ABP_VehicleBayConsole_C_GetInterfaceTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.GetUsableData
struct ABP_VehicleBayConsole_C_GetUsableData_Params
{
	struct FSQUsableData                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerOnUsed
struct ABP_VehicleBayConsole_C_ServerOnUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ServerStopUsed
struct ABP_VehicleBayConsole_C_ServerStopUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPDisplayPrompt
struct ABP_VehicleBayConsole_C_BPDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPHidePrompt
struct ABP_VehicleBayConsole_C_BPHidePrompt_Params
{
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPOnUsed
struct ABP_VehicleBayConsole_C_BPOnUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.BPStopUsed
struct ABP_VehicleBayConsole_C_BPStopUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ReceiveBeginPlay
struct ABP_VehicleBayConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleBayConsole.BP_VehicleBayConsole_C.ExecuteUbergraph_BP_VehicleBayConsole
struct ABP_VehicleBayConsole_C_ExecuteUbergraph_BP_VehicleBayConsole_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
