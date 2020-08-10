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

// Function W_TextItem.W_TextItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TextItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextItem.W_TextItem_C.Construct");

	UW_TextItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextItem.W_TextItem_C.ExecuteUbergraph_W_TextItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TextItem_C::ExecuteUbergraph_W_TextItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextItem.W_TextItem_C.ExecuteUbergraph_W_TextItem");

	UW_TextItem_C_ExecuteUbergraph_W_TextItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
