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

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ResumeAnimations
struct ABP_GenericDeployableWeapon_C_ResumeAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.StopAnimations
struct ABP_GenericDeployableWeapon_C_StopAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.PlayAnimations
struct ABP_GenericDeployableWeapon_C_PlayAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoldierAnimTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature
struct ABP_GenericDeployableWeapon_C_BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature_Params
{
	class USQTemperatureComponent*                     TriggeringComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggeringTemp;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLowerTrigger;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnFire
struct ABP_GenericDeployableWeapon_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnReload
struct ABP_GenericDeployableWeapon_C_BlueprintOnReload_Params
{
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierEntersVehicle
struct ABP_GenericDeployableWeapon_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierLeavesVehicle
struct ABP_GenericDeployableWeapon_C_SoldierLeavesVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnSoldier
struct ABP_GenericDeployableWeapon_C_CameraOnSoldier_Params
{
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnWeapon
struct ABP_GenericDeployableWeapon_C_CameraOnWeapon_Params
{
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnUnequip
struct ABP_GenericDeployableWeapon_C_BlueprintOnUnequip_Params
{
};

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ExecuteUbergraph_BP_GenericDeployableWeapon
struct ABP_GenericDeployableWeapon_C_ExecuteUbergraph_BP_GenericDeployableWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
