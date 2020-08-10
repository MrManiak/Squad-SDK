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

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Manage Attachments
struct ABP_R2T_Soldier_C_Manage_Attachments_Params
{
	bool                                               Create;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Get Role Info
struct ABP_R2T_Soldier_C_Get_Role_Info_Params
{
	class USkeletalMeshComponent*                      Soldier_Mesh;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Weapon_Mesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Rendering
struct ABP_R2T_Soldier_C_Set_Rendering_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Render Soldier Role
struct ABP_R2T_Soldier_C_Set_Render_Soldier_Role_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.UserConstructionScript
struct ABP_R2T_Soldier_C_UserConstructionScript_Params
{
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveTick
struct ABP_R2T_Soldier_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Play Animations
struct ABP_R2T_Soldier_C_Play_Animations_Params
{
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveBeginPlay
struct ABP_R2T_Soldier_C_ReceiveBeginPlay_Params
{
};

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ExecuteUbergraph_BP_R2T_Soldier
struct ABP_R2T_Soldier_C_ExecuteUbergraph_BP_R2T_Soldier_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
