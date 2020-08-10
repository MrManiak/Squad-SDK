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

// Function BPI_RadialModels.BPI_RadialModels_C.Open Voice Model
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_RadialModels_C::Open_Voice_Model()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RadialModels.BPI_RadialModels_C.Open Voice Model");

	UBPI_RadialModels_C_Open_Voice_Model_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_RadialModels.BPI_RadialModels_C.Get Deployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Deployable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_RadialModels_C::Get_Deployable(class UClass** Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RadialModels.BPI_RadialModels_C.Get Deployable");

	UBPI_RadialModels_C_Get_Deployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployable != nullptr)
		*Deployable = params.Deployable;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
