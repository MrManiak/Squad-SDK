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

// Function BP_SQToastWidget.BP_SQToastWidget_C.Construct
struct UBP_SQToastWidget_C_Construct_Params
{
};

// Function BP_SQToastWidget.BP_SQToastWidget_C.ToastTextUpdated_Event
struct UBP_SQToastWidget_C_ToastTextUpdated_Event_Params
{
	struct FText                                       ToastText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SQToastWidget.BP_SQToastWidget_C.ExecuteUbergraph_BP_SQToastWidget
struct UBP_SQToastWidget_C_ExecuteUbergraph_BP_SQToastWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
