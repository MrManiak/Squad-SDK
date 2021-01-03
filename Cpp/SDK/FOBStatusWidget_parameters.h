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

// Function FOBStatusWidget.FOBStatusWidget_C.UpdateProgressBarColor
struct UFOBStatusWidget_C_UpdateProgressBarColor_Params
{
};

// Function FOBStatusWidget.FOBStatusWidget_C.Refresh Data
struct UFOBStatusWidget_C_Refresh_Data_Params
{
};

// Function FOBStatusWidget.FOBStatusWidget_C.UpdateState
struct UFOBStatusWidget_C_UpdateState_Params
{
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetBrushFobIcon
struct UFOBStatusWidget_C_GetBrushFobIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetFobSpawnerText
struct UFOBStatusWidget_C_GetFobSpawnerText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetEnemyVisibility
struct UFOBStatusWidget_C_GetEnemyVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetAmmoPoints
struct UFOBStatusWidget_C_GetAmmoPoints_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetConPoints
struct UFOBStatusWidget_C_GetConPoints_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function FOBStatusWidget.FOBStatusWidget_C.GetCapturePercent
struct UFOBStatusWidget_C_GetCapturePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FOBStatusWidget.FOBStatusWidget_C.Construct
struct UFOBStatusWidget_C_Construct_Params
{
};

// Function FOBStatusWidget.FOBStatusWidget_C.ExecuteUbergraph_FOBStatusWidget
struct UFOBStatusWidget_C_ExecuteUbergraph_FOBStatusWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
