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

// Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_CO_C::Get_Fireteam_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.Get Fireteam ID");

	UW_Grid_ActionList_CO_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.Populate List
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_ActionList_CO_C::Populate_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.Populate List");

	UW_Grid_ActionList_CO_C_Populate_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.ExecuteUbergraph_W_Grid_ActionList_CO
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_CO_C::ExecuteUbergraph_W_Grid_ActionList_CO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList_CO.W_Grid_ActionList_CO_C.ExecuteUbergraph_W_Grid_ActionList_CO");

	UW_Grid_ActionList_CO_C_ExecuteUbergraph_W_Grid_ActionList_CO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
