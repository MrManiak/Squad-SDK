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

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateCurrentWeapon
struct UAbrams_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.SetWeaponName
struct UAbrams_GunnerReticle_C_SetWeaponName_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.RangeFinder
struct UAbrams_GunnerReticle_C_RangeFinder_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.TunnelOffset
struct UAbrams_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateAmmo
struct UAbrams_GunnerReticle_C_UpdateAmmo_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateZoomLevelReticle
struct UAbrams_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateWeaponRotation
struct UAbrams_GunnerReticle_C_UpdateWeaponRotation_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateStabilizationIndicator
struct UAbrams_GunnerReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Tick
struct UAbrams_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Construct
struct UAbrams_GunnerReticle_C_Construct_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateTurretHealth
struct UAbrams_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.ExecuteUbergraph_Abrams_GunnerReticle
struct UAbrams_GunnerReticle_C_ExecuteUbergraph_Abrams_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
