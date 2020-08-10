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

// Function BPI_BoundaryInterface.BPI_BoundaryInterface_C.On Entered Bounds
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BoundaryInterface_C::On_Entered_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BoundaryInterface.BPI_BoundaryInterface_C.On Entered Bounds");

	UBPI_BoundaryInterface_C_On_Entered_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BoundaryInterface.BPI_BoundaryInterface_C.On Out of Bounds
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BoundaryInterface_C::On_Out_of_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BoundaryInterface.BPI_BoundaryInterface_C.On Out of Bounds");

	UBPI_BoundaryInterface_C_On_Out_of_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
