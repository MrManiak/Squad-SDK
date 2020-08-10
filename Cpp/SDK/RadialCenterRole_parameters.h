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

// Function RadialCenterRole.RadialCenterRole_C.HideCenterTextWidget
struct URadialCenterRole_C_HideCenterTextWidget_Params
{
};

// Function RadialCenterRole.RadialCenterRole_C.DisplayCenterTextWidget
struct URadialCenterRole_C_DisplayCenterTextWidget_Params
{
};

// Function RadialCenterRole.RadialCenterRole_C.GetVisibility_1
struct URadialCenterRole_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Specifics_Text_1
struct URadialCenterRole_C_Get_Role_Specifics_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Image_Brush_1
struct URadialCenterRole_C_Get_Role_Image_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Text_Detail_Text_1
struct URadialCenterRole_C_Get_Role_Text_Detail_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterRole.RadialCenterRole_C.Tick
struct URadialCenterRole_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RadialCenterRole.RadialCenterRole_C.OnHoverBegin
struct URadialCenterRole_C_OnHoverBegin_Params
{
};

// Function RadialCenterRole.RadialCenterRole_C.ExecuteUbergraph_RadialCenterRole
struct URadialCenterRole_C_ExecuteUbergraph_RadialCenterRole_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
