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

// Function W_KeybindItem.W_KeybindItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_KeybindItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeybindItem.W_KeybindItem_C.Construct");

	UW_KeybindItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeybindItem.W_KeybindItem_C.ExecuteUbergraph_W_KeybindItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeybindItem_C::ExecuteUbergraph_W_KeybindItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeybindItem.W_KeybindItem_C.ExecuteUbergraph_W_KeybindItem");

	UW_KeybindItem_C_ExecuteUbergraph_W_KeybindItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
