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

// Function CreditListItem_4Columns.CreditListItem_4Columns_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCreditListItem_4Columns_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditListItem_4Columns.CreditListItem_4Columns_C.Construct");

	UCreditListItem_4Columns_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditListItem_4Columns.CreditListItem_4Columns_C.ExecuteUbergraph_CreditListItem_4Columns
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditListItem_4Columns_C::ExecuteUbergraph_CreditListItem_4Columns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditListItem_4Columns.CreditListItem_4Columns_C.ExecuteUbergraph_CreditListItem_4Columns");

	UCreditListItem_4Columns_C_ExecuteUbergraph_CreditListItem_4Columns_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
