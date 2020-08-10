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

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsMarkerVisible
struct UBP_MarkerWidget_Emplacement_C_IsMarkerVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsInVehicle
struct UBP_MarkerWidget_Emplacement_C_IsInVehicle_Params
{
	bool                                               InVehicle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleConeVisbility
struct UBP_MarkerWidget_Emplacement_C_GetVehicleConeVisbility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsVehicleEmpty
struct UBP_MarkerWidget_Emplacement_C_IsVehicleEmpty_Params
{
	bool                                               Empty;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicle
struct UBP_MarkerWidget_Emplacement_C_GetVehicle_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameSquad
struct UBP_MarkerWidget_Emplacement_C_IsSameSquad_Params
{
	bool                                               SquadVehicle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameTeam
struct UBP_MarkerWidget_Emplacement_C_IsSameTeam_Params
{
	bool                                               SameTeam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsNeutralTeam
struct UBP_MarkerWidget_Emplacement_C_IsNeutralTeam_Params
{
	bool                                               IsNeutral;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleIcon
struct UBP_MarkerWidget_Emplacement_C_GetVehicleIcon_Params
{
	class UTexture*                                    NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_Vehicle_Image_Visibility_1
struct UBP_MarkerWidget_Emplacement_C_Get_Vehicle_Image_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsOwnOrNeutralTeam
struct UBP_MarkerWidget_Emplacement_C_IsOwnOrNeutralTeam_Params
{
	bool                                               OwnOrNeutral;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_PlayerImage_Brush
struct UBP_MarkerWidget_Emplacement_C_Get_PlayerImage_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSL
struct UBP_MarkerWidget_Emplacement_C_IsSL_Params
{
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.SetAngle
struct UBP_MarkerWidget_Emplacement_C_SetAngle_Params
{
	float                                              InAngle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Construct
struct UBP_MarkerWidget_Emplacement_C_Construct_Params
{
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Tick
struct UBP_MarkerWidget_Emplacement_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.ExecuteUbergraph_BP_MarkerWidget_Emplacement
struct UBP_MarkerWidget_Emplacement_C_ExecuteUbergraph_BP_MarkerWidget_Emplacement_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.CloseTooltip__DelegateSignature
struct UBP_MarkerWidget_Emplacement_C_CloseTooltip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
