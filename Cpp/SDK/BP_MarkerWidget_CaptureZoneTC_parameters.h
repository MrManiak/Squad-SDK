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

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Protected Visibility
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Protected_Visibility_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Touching Start
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Touching_Start_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Bind BPHUD Events
struct UBP_MarkerWidget_CaptureZoneTC_C_Bind_BPHUD_Events_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Visibility from Save Data
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Visibility_from_Save_Data_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get POI
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_POI_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Text
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Owning Team
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Owning_Team_Params
{
	unsigned char                                      OwningTeam;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Can Cap Team
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Can_Cap_Team_Params
{
	class ATC_HexZone_C*                               Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Friendly;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enemy;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Neutral;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Captor
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Captor_Params
{
	class ATC_HexZone_C*                               Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Friendly;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enemy;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Neutral;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Owner
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Owner_Params
{
	class ATC_HexZone_C*                               Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Friendly;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enemy;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Neutral;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Frontline
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Frontline_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Nearby Zones
struct UBP_MarkerWidget_CaptureZoneTC_C_Nearby_Zones_Params
{
	bool                                               Team_1_Nearby;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Team_2_Nearby;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Zone
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Zone_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Anchor Visual
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Anchor_Visual_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Can Cap
struct UBP_MarkerWidget_CaptureZoneTC_C_Can_Cap_Params
{
	class ATC_HexZone_C*                               Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Self_Team;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Can_Cap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Same Team
struct UBP_MarkerWidget_CaptureZoneTC_C_Get_Same_Team_Params
{
	bool                                               Same;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Capture Bar
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Capture_Bar_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Hex Color
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Hex_Color_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Widget
struct UBP_MarkerWidget_CaptureZoneTC_C_Update_Widget_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Tick
struct UBP_MarkerWidget_CaptureZoneTC_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnFlagNameChanged
struct UBP_MarkerWidget_CaptureZoneTC_C_OnFlagNameChanged_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnScaleChanged
struct UBP_MarkerWidget_CaptureZoneTC_C_OnScaleChanged_Params
{
	float                                              UniformScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Set Name Via Grid Ref
struct UBP_MarkerWidget_CaptureZoneTC_C_Set_Name_Via_Grid_Ref_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Destruct
struct UBP_MarkerWidget_CaptureZoneTC_C_Destruct_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Reset Hex Opacity
struct UBP_MarkerWidget_CaptureZoneTC_C_Reset_Hex_Opacity_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnCapturePercentChanged
struct UBP_MarkerWidget_CaptureZoneTC_C_OnCapturePercentChanged_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Play Capture Fade Animation
struct UBP_MarkerWidget_CaptureZoneTC_C_Play_Capture_Fade_Animation_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.UpdateState
struct UBP_MarkerWidget_CaptureZoneTC_C_UpdateState_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Start Timer Update Hex
struct UBP_MarkerWidget_CaptureZoneTC_C_Start_Timer_Update_Hex_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Stop Timer Update Hex
struct UBP_MarkerWidget_CaptureZoneTC_C_Stop_Timer_Update_Hex_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Construct
struct UBP_MarkerWidget_CaptureZoneTC_C_Construct_Params
{
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC
struct UBP_MarkerWidget_CaptureZoneTC_C_ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.CloseTooltip__DelegateSignature
struct UBP_MarkerWidget_CaptureZoneTC_C_CloseTooltip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
