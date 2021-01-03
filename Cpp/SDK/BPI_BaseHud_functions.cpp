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
// Functions
//---------------------------------------------------------------------------

// Function BPI_BaseHud.BPI_BaseHUD_C.Get Capture Event Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_FlagCapturedEvent_C*  Capture_Event_Widget           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseHUD_C::Get_Capture_Event_Widget(class UW_FlagCapturedEvent_C** Capture_Event_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseHud.BPI_BaseHUD_C.Get Capture Event Widget");

	UBPI_BaseHUD_C_Get_Capture_Event_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Capture_Event_Widget != nullptr)
		*Capture_Event_Widget = params.Capture_Event_Widget;

}


// Function BPI_BaseHud.BPI_BaseHUD_C.Get Destruction Event Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_DestructionObjectiveEvent_C* Destruction_Event_Widget       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseHUD_C::Get_Destruction_Event_Widget(class UW_DestructionObjectiveEvent_C** Destruction_Event_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseHud.BPI_BaseHUD_C.Get Destruction Event Widget");

	UBPI_BaseHUD_C_Get_Destruction_Event_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destruction_Event_Widget != nullptr)
		*Destruction_Event_Widget = params.Destruction_Event_Widget;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
