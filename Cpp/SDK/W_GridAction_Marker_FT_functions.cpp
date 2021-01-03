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

// Function W_GridAction_Marker_FT.W_GridAction_Marker_FT_C.Get Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Tint                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridAction_Marker_FT_C::Get_Color(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridAction_Marker_FT.W_GridAction_Marker_FT_C.Get Color");

	UW_GridAction_Marker_FT_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tint != nullptr)
		*Tint = params.Tint;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
