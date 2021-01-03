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

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.FixAngleText
struct UArbalet_GunnerReticle_C_FixAngleText_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FixedAngle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ZoomTextScale
struct UArbalet_GunnerReticle_C_ZoomTextScale_Params
{
	int                                                Zoom;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateCurrentWeapon
struct UArbalet_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.SetWeaponName
struct UArbalet_GunnerReticle_C_SetWeaponName_Params
{
	struct FText                                       NewParam;                                                  // (Parm, OutParm)
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.RangeFinder
struct UArbalet_GunnerReticle_C_RangeFinder_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.TunnelOffset
struct UArbalet_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Tick
struct UArbalet_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateWeaponRotation
struct UArbalet_GunnerReticle_C_UpdateWeaponRotation_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateAmmo
struct UArbalet_GunnerReticle_C_UpdateAmmo_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateZoomLevelReticle
struct UArbalet_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Construct
struct UArbalet_GunnerReticle_C_Construct_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateStabilizationIndicator
struct UArbalet_GunnerReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateTurretHealth
struct UArbalet_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ExecuteUbergraph_Arbalet_GunnerReticle
struct UArbalet_GunnerReticle_C_ExecuteUbergraph_Arbalet_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
