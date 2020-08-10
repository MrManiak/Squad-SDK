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

// Function W_TeamTickets.W_TeamTickets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TeamTickets_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamTickets.W_TeamTickets_C.Construct");

	UW_TeamTickets_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamTickets.W_TeamTickets_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_TeamTickets_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamTickets.W_TeamTickets_C.Refresh");

	UW_TeamTickets_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamTickets.W_TeamTickets_C.Get Player State
// (BlueprintCallable, BlueprintEvent)
void UW_TeamTickets_C::Get_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamTickets.W_TeamTickets_C.Get Player State");

	UW_TeamTickets_C_Get_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamTickets.W_TeamTickets_C.ExecuteUbergraph_W_TeamTickets
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamTickets_C::ExecuteUbergraph_W_TeamTickets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamTickets.W_TeamTickets_C.ExecuteUbergraph_W_TeamTickets");

	UW_TeamTickets_C_ExecuteUbergraph_W_TeamTickets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
