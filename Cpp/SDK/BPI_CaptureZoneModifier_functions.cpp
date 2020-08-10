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
// Functions
//---------------------------------------------------------------------------

// Function BPI_CaptureZoneModifier.BPI_CaptureZoneModifier_C.Additional Can Capture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Capture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_CaptureZoneModifier_C::Additional_Can_Capture(bool* Can_Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CaptureZoneModifier.BPI_CaptureZoneModifier_C.Additional Can Capture");

	UBPI_CaptureZoneModifier_C_Additional_Can_Capture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Capture != nullptr)
		*Can_Capture = params.Can_Capture;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
