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

// Function BP_EmplacedM2.BP_EmplacedM2_C.IsSoldierAlive
struct ABP_EmplacedM2_C_IsSoldierAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetCurrentWeaponInputEnabled
struct ABP_EmplacedM2_C_GetCurrentWeaponInputEnabled_Params
{
	bool                                               bInputEnabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetADSCameraLocationComponent
struct ABP_EmplacedM2_C_GetADSCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetDefaultCameraLocationComponent
struct ABP_EmplacedM2_C_GetDefaultCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetCameraComponent
struct ABP_EmplacedM2_C_GetCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetMasterPoseComponent
struct ABP_EmplacedM2_C_GetMasterPoseComponent_Params
{
	class USkinnedMeshComponent*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.Get1PAttachComponent
struct ABP_EmplacedM2_C_Get1PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.Get3PAttachComponent
struct ABP_EmplacedM2_C_Get3PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.GetWeaponAttachComponent
struct ABP_EmplacedM2_C_GetWeaponAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_2
struct ABP_EmplacedM2_C_InpActEvt_Focus_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_1
struct ABP_EmplacedM2_C_InpActEvt_Focus_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.ReceiveBeginPlay
struct ABP_EmplacedM2_C_ReceiveBeginPlay_Params
{
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
struct ABP_EmplacedM2_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43
struct ABP_EmplacedM2_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_43_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmplacedM2.BP_EmplacedM2_C.ExecuteUbergraph_BP_EmplacedM2
struct ABP_EmplacedM2_C_ExecuteUbergraph_BP_EmplacedM2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
