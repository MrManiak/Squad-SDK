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

// Function W_FloatingWidget.W_FloatingWidget_C.Validate Action
struct UW_FloatingWidget_C_Validate_Action_Params
{
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_FloatingWidget.W_FloatingWidget_C.On Map Mouse Down
struct UW_FloatingWidget_C_On_Map_Mouse_Down_Params
{
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     World_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FloatingWidget.W_FloatingWidget_C.Construct
struct UW_FloatingWidget_C_Construct_Params
{
};

// Function W_FloatingWidget.W_FloatingWidget_C.Remove floating widget
struct UW_FloatingWidget_C_Remove_floating_widget_Params
{
};

// Function W_FloatingWidget.W_FloatingWidget_C.ExecuteUbergraph_W_FloatingWidget
struct UW_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
