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

// Function CreditListItem.CreditListItem_C.Refresh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         New_Columns                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCreditListItem_C::Refresh(TArray<struct FString>* New_Columns)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditListItem.CreditListItem_C.Refresh");

	UCreditListItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (New_Columns != nullptr)
		*New_Columns = params.New_Columns;

}


// Function CreditListItem.CreditListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCreditListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditListItem.CreditListItem_C.Construct");

	UCreditListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditListItem.CreditListItem_C.ExecuteUbergraph_CreditListItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditListItem_C::ExecuteUbergraph_CreditListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditListItem.CreditListItem_C.ExecuteUbergraph_CreditListItem");

	UCreditListItem_C_ExecuteUbergraph_CreditListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
