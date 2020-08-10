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

// Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.Cache Fireteam IDs
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridHeader_SL_Orders_C::Cache_Fireteam_IDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.Cache Fireteam IDs");

	UW_GridHeader_SL_Orders_C_Cache_Fireteam_IDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.Construct Buttons
// (BlueprintCallable, BlueprintEvent)
void UW_GridHeader_SL_Orders_C::Construct_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.Construct Buttons");

	UW_GridHeader_SL_Orders_C_Construct_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.ExecuteUbergraph_W_GridHeader_SL_Orders
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridHeader_SL_Orders_C::ExecuteUbergraph_W_GridHeader_SL_Orders(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C.ExecuteUbergraph_W_GridHeader_SL_Orders");

	UW_GridHeader_SL_Orders_C_ExecuteUbergraph_W_GridHeader_SL_Orders_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
