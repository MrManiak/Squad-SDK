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

// Function W_InteractableItem_Generic.W_InteractableItem_Generic_C.Get Format Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          FormatBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_Generic_C::Get_Format_Box(class UHorizontalBox** FormatBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Generic.W_InteractableItem_Generic_C.Get Format Box");

	UW_InteractableItem_Generic_C_Get_Format_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormatBox != nullptr)
		*FormatBox = params.FormatBox;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
