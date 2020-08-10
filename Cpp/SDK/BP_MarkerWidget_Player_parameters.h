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

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisibilities
struct UBP_MarkerWidget_Player_C_UpdateVisibilities_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateStateData
struct UBP_MarkerWidget_Player_C_UpdateStateData_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateSizeAndZOrder
struct UBP_MarkerWidget_Player_C_UpdateSizeAndZOrder_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateViewAngle
struct UBP_MarkerWidget_Player_C_UpdateViewAngle_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.IsMarkerVisible
struct UBP_MarkerWidget_Player_C_IsMarkerVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPUpdateIsInVehicle
struct UBP_MarkerWidget_Player_C_BPUpdateIsInVehicle_Params
{
	bool                                               IsInVehicle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPGetWidgetPlayerState
struct UBP_MarkerWidget_Player_C_BPGetWidgetPlayerState_Params
{
	class APlayerState*                                SquadPlayerState;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_Player_Cone_Visibility
struct UBP_MarkerWidget_Player_C_Update_Player_Cone_Visibility_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_BleedingPanel_Visibility
struct UBP_MarkerWidget_Player_C_Update_BleedingPanel_Visibility_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_ToolTipWidget
struct UBP_MarkerWidget_Player_C_Get_Player_Image_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_Visibility
struct UBP_MarkerWidget_Player_C_Get_Player_Image_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_IncapPanel_Visibility
struct UBP_MarkerWidget_Player_C_Update_IncapPanel_Visibility_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateMedicOverlayVisibility
struct UBP_MarkerWidget_Player_C_UpdateMedicOverlayVisibility_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_SL_Text_Visibility
struct UBP_MarkerWidget_Player_C_Get_SL_Text_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_PlayerImage_Brush
struct UBP_MarkerWidget_Player_C_Update_PlayerImage_Brush_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_SL_Text
struct UBP_MarkerWidget_Player_C_Update_SL_Text_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.SetAngle
struct UBP_MarkerWidget_Player_C_SetAngle_Params
{
	float                                              InAngle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Tick
struct UBP_MarkerWidget_Player_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Construct
struct UBP_MarkerWidget_Player_C_Construct_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisuals_Event
struct UBP_MarkerWidget_Player_C_UpdateVisuals_Event_Params
{
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.ExecuteUbergraph_BP_MarkerWidget_Player
struct UBP_MarkerWidget_Player_C_ExecuteUbergraph_BP_MarkerWidget_Player_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.CloseTooltip__DelegateSignature
struct UBP_MarkerWidget_Player_C_CloseTooltip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
