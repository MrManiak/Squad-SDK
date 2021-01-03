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

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BindEventToAmmoUpdated
struct ABP_SquadRallyPoint_C_BindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmPawn
struct ABP_SquadRallyPoint_C_CanRearmPawn_Params
{
	class APawn*                                       Rearmer;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmWeapon
struct ABP_SquadRallyPoint_C_CanRearmWeapon_Params
{
	class ASQEquipableItem*                            Weapon;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ConsumeAmmo
struct ABP_SquadRallyPoint_C_ConsumeAmmo_Params
{
	float                                              AmmoRequired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetAmmo
struct ABP_SquadRallyPoint_C_GetAmmo_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmNoAmmoString
struct ABP_SquadRallyPoint_C_GetRearmNoAmmoString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmSuccessString
struct ABP_SquadRallyPoint_C_GetRearmSuccessString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmType
struct ABP_SquadRallyPoint_C_GetRearmType_Params
{
	ESQRearmType                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.UnbindEventToAmmoUpdated
struct ABP_SquadRallyPoint_C_UnbindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ShouldDisplayPrompt
struct ABP_SquadRallyPoint_C_ShouldDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetInterfaceTeam
struct ABP_SquadRallyPoint_C_GetInterfaceTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetUsableData
struct ABP_SquadRallyPoint_C_GetUsableData_Params
{
	struct FSQUsableData                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Left Radius
struct ABP_SquadRallyPoint_C_Player_Left_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPStopUsed
struct ABP_SquadRallyPoint_C_BPStopUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerOnUsed
struct ABP_SquadRallyPoint_C_ServerOnUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerStopUsed
struct ABP_SquadRallyPoint_C_ServerStopUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPDisplayPrompt
struct ABP_SquadRallyPoint_C_BPDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPHidePrompt
struct ABP_SquadRallyPoint_C_BPHidePrompt_Params
{
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPOnUsed
struct ABP_SquadRallyPoint_C_BPOnUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Pickup Item
struct ABP_SquadRallyPoint_C_Pickup_Item_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerPickupRallyPoint
struct ABP_SquadRallyPoint_C_ServerPickupRallyPoint_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Enter Radius
struct ABP_SquadRallyPoint_C_Player_Enter_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Pickup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ExecuteUbergraph_BP_SquadRallyPoint
struct ABP_SquadRallyPoint_C_ExecuteUbergraph_BP_SquadRallyPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
