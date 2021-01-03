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

// Function W_Grid_ActionList_FT.W_Grid_ActionList_FT_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_FT_C::Get_Fireteam_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList_FT.W_Grid_ActionList_FT_C.Get Fireteam ID");

	UW_Grid_ActionList_FT_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
