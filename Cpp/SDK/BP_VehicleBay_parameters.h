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

// Function BP_VehicleBay.BP_VehicleBay_C.Has Vehicle Capacity
struct ABP_VehicleBay_C_Has_Vehicle_Capacity_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Is Pending Construction
struct ABP_VehicleBay_C_Is_Pending_Construction_Params
{
	bool                                               Constructing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Is Constructing
struct ABP_VehicleBay_C_Is_Constructing_Params
{
	bool                                               Constructing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Get Fob
struct ABP_VehicleBay_C_Get_Fob_Params
{
	class ASQForwardBase*                              fob;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Can Afford
struct ABP_VehicleBay_C_Can_Afford_Params
{
	int                                                Construction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Validate Spawning
struct ABP_VehicleBay_C_Validate_Spawning_Params
{
	class UClass*                                      Spawn_Action;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Can_Afford;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Has_Capacity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Get Construction Queue
struct ABP_VehicleBay_C_Get_Construction_Queue_Params
{
	TArray<class UClass*>                              Construction_Queue;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Get Build Percent
struct ABP_VehicleBay_C_Get_Build_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.OnRep_Construction Queue
struct ABP_VehicleBay_C_OnRep_Construction_Queue_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.Manage Build Visuals
struct ABP_VehicleBay_C_Manage_Build_Visuals_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.UserConstructionScript
struct ABP_VehicleBay_C_UserConstructionScript_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE
struct ABP_VehicleBay_C_OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.SetTeam
struct ABP_VehicleBay_C_SetTeam_Params
{
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.ReceiveTick
struct ABP_VehicleBay_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Request Spawn Vehicle
struct ABP_VehicleBay_C_Request_Spawn_Vehicle_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Finish Building
struct ABP_VehicleBay_C_Finish_Building_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.Build Next Queue Item
struct ABP_VehicleBay_C_Build_Next_Queue_Item_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.ReceiveBeginPlay
struct ABP_VehicleBay_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.Load Mesh
struct ABP_VehicleBay_C_Load_Mesh_Params
{
};

// Function BP_VehicleBay.BP_VehicleBay_C.Add Vehicle To Queue
struct ABP_VehicleBay_C_Add_Vehicle_To_Queue_Params
{
	class UClass*                                      NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Try Play Sound
struct ABP_VehicleBay_C_Try_Play_Sound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Play Vehicle Bay Sound
struct ABP_VehicleBay_C_Play_Vehicle_Bay_Sound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Notify Error
struct ABP_VehicleBay_C_Notify_Error_Params
{
	class UClass*                                      Spawn_Action;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.MC Sound Event
struct ABP_VehicleBay_C_MC_Sound_Event_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.ExecuteUbergraph_BP_VehicleBay
struct ABP_VehicleBay_C_ExecuteUbergraph_BP_VehicleBay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBay.BP_VehicleBay_C.Queue Updated__DelegateSignature
struct ABP_VehicleBay_C_Queue_Updated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
