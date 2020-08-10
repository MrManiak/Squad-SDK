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

// Function W_UAV_UI.W_UAV_UI_C.Update Lock Text
struct UW_UAV_UI_C_Update_Lock_Text_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Manage Animations
struct UW_UAV_UI_C_Manage_Animations_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Zoom
struct UW_UAV_UI_C_Set_Zoom_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Elevation
struct UW_UAV_UI_C_Set_Elevation_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Self Grid Ref
struct UW_UAV_UI_C_Set_Self_Grid_Ref_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Pitch
struct UW_UAV_UI_C_Set_Pitch_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Fuel
struct UW_UAV_UI_C_Set_Fuel_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Update Compass
struct UW_UAV_UI_C_Update_Compass_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Time
struct UW_UAV_UI_C_Set_Time_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Set Grid Ref
struct UW_UAV_UI_C_Set_Grid_Ref_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Get Cam Delta
struct UW_UAV_UI_C_Get_Cam_Delta_Params
{
	struct FVector2D                                   Mouse_Coordinate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                                   Geometry;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              X;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_UAV_UI.W_UAV_UI_C.Tick
struct UW_UAV_UI_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_UAV_UI.W_UAV_UI_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_UAV_UI_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.Close Animation
struct UW_UAV_UI_C_Close_Animation_Params
{
};

// Function W_UAV_UI.W_UAV_UI_C.ExecuteUbergraph_W_UAV_UI
struct UW_UAV_UI_C_ExecuteUbergraph_W_UAV_UI_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
