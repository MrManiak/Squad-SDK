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

// Function RadialCenterText.RadialCenterText_C.HideResources
struct URadialCenterText_C_HideResources_Params
{
};

// Function RadialCenterText.RadialCenterText_C.ShowResources
struct URadialCenterText_C_ShowResources_Params
{
	class UDeployableRadialEntry_C*                    Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Outputstring;                                              // (Parm, OutParm)
};

// Function RadialCenterText.RadialCenterText_C.GetWidgetText
struct URadialCenterText_C_GetWidgetText_Params
{
	class USQRadialButton*                             Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayText;                                               // (Parm, OutParm)
};

// Function RadialCenterText.RadialCenterText_C.GetText_1
struct URadialCenterText_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function RadialCenterText.RadialCenterText_C.OnHoverBegin
struct URadialCenterText_C_OnHoverBegin_Params
{
};

// Function RadialCenterText.RadialCenterText_C.ExecuteUbergraph_RadialCenterText
struct URadialCenterText_C_ExecuteUbergraph_RadialCenterText_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
