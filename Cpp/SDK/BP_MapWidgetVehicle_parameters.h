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

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ShowHideCommanderStar
struct UBP_MapWidgetVehicle_C_ShowHideCommanderStar_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonUp_1
struct UBP_MapWidgetVehicle_C_On_TooltipHitBox_MouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.On_TooltipHitBox_MouseButtonDown_1
struct UBP_MapWidgetVehicle_C_On_TooltipHitBox_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Update Tooltip
struct UBP_MapWidgetVehicle_C_Update_Tooltip_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Tooltip
struct UBP_MapWidgetVehicle_C_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnTintValueChanged
struct UBP_MapWidgetVehicle_C_OnTintValueChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsOwnedBySelfChanged
struct UBP_MapWidgetVehicle_C_OnIsOwnedBySelfChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnAngleChanged
struct UBP_MapWidgetVehicle_C_OnAngleChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCameraRotationYawChanged
struct UBP_MapWidgetVehicle_C_OnCameraRotationYawChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnStaticUIDataChanged
struct UBP_MapWidgetVehicle_C_OnStaticUIDataChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnClaimingSquadIDChanged
struct UBP_MapWidgetVehicle_C_OnClaimingSquadIDChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsSquadLeaderChanged
struct UBP_MapWidgetVehicle_C_OnHoldsSquadLeaderChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnVehicleOccupantInfoChanged
struct UBP_MapWidgetVehicle_C_OnVehicleOccupantInfoChanged_Params
{
	int                                                AtIndex;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelfInVehicleSeatChanged
struct UBP_MapWidgetVehicle_C_OnSelfInVehicleSeatChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnIsInSelfTeam
struct UBP_MapWidgetVehicle_C_OnIsInSelfTeam_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnSelectionStateChanged
struct UBP_MapWidgetVehicle_C_OnSelectionStateChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.Construct
struct UBP_MapWidgetVehicle_C_Construct_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnScaleChanged
struct UBP_MapWidgetVehicle_C_OnScaleChanged_Params
{
	float                                              UniformScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnCommanderChangedEvent_Event_1
struct UBP_MapWidgetVehicle_C_OnCommanderChangedEvent_Event_1_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.OnHoldsCommanderChanged
struct UBP_MapWidgetVehicle_C_OnHoldsCommanderChanged_Params
{
};

// Function BP_MapWidgetVehicle.BP_MapWidgetVehicle_C.ExecuteUbergraph_BP_MapWidgetVehicle
struct UBP_MapWidgetVehicle_C_ExecuteUbergraph_BP_MapWidgetVehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
