#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Distance to FOB
struct UComp_ResourceControl_C_Validate_Distance_to_FOB_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQForwardBase*                              fob;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Soldier
struct UComp_ResourceControl_C_Validate_Soldier_Params
{
	bool                                               Alive;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Setup Resource Weapon
struct UComp_ResourceControl_C_Setup_Resource_Weapon_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Owner
struct UComp_ResourceControl_C_Validate_Owner_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Transaction
struct UComp_ResourceControl_C_Validate_Transaction_Params
{
	bool                                               Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Pickup;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid_Transaction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Has_Con_Weapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Has_Ammo_Weapon;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Loading;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Zone_has_Points;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Resource Point
struct UComp_ResourceControl_C_Validate_Resource_Point_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASQForwardBase*                              fob;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CapZone;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Start Supply
struct UComp_ResourceControl_C_Server_Start_Supply_Params
{
	bool                                               Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Pickup;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.ReceiveBeginPlay
struct UComp_ResourceControl_C_ReceiveBeginPlay_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Stop Supply
struct UComp_ResourceControl_C_Server_Stop_Supply_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Invoke Use Resources
struct UComp_ResourceControl_C_Invoke_Use_Resources_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Use Resources
struct UComp_ResourceControl_C_Server_Use_Resources_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Stop Resource Supply
struct UComp_ResourceControl_C_Stop_Resource_Supply_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Start Resource Supply
struct UComp_ResourceControl_C_Start_Resource_Supply_Params
{
	bool                                               Ammo_Transaction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Pickup_Transaction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASQVehicle*                                  Current_Vehicle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Client Resource Timer
struct UComp_ResourceControl_C_Client_Resource_Timer_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.Play Hand Animation
struct UComp_ResourceControl_C_Play_Hand_Animation_Params
{
};

// Function Comp_ResourceControl.Comp_ResourceControl_C.ExecuteUbergraph_Comp_ResourceControl
struct UComp_ResourceControl_C_ExecuteUbergraph_Comp_ResourceControl_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
