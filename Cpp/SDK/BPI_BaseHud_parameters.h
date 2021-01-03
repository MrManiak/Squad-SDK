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

// Function BPI_BaseHud.BPI_BaseHUD_C.Get Capture Event Widget
struct UBPI_BaseHUD_C_Get_Capture_Event_Widget_Params
{
	class UW_FlagCapturedEvent_C*                      Capture_Event_Widget;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseHud.BPI_BaseHUD_C.Get Destruction Event Widget
struct UBPI_BaseHUD_C_Get_Destruction_Event_Widget_Params
{
	class UW_DestructionObjectiveEvent_C*              Destruction_Event_Widget;                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
