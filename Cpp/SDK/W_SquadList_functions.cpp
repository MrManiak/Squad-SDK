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

// Function W_SquadList.W_SquadList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SquadList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadList.W_SquadList_C.Construct");

	UW_SquadList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadList.W_SquadList_C.Get Commander Active for Squad List
// (BlueprintCallable, BlueprintEvent)
void UW_SquadList_C::Get_Commander_Active_for_Squad_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadList.W_SquadList_C.Get Commander Active for Squad List");

	UW_SquadList_C_Get_Commander_Active_for_Squad_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadList.W_SquadList_C.ExecuteUbergraph_W_SquadList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadList_C::ExecuteUbergraph_W_SquadList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadList.W_SquadList_C.ExecuteUbergraph_W_SquadList");

	UW_SquadList_C_ExecuteUbergraph_W_SquadList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
