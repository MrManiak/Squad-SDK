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

// Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Grid_Action_COOrder_List_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.Construct");

	UW_Grid_Action_COOrder_List_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Grid_Action_COOrder_List_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.PreConstruct");

	UW_Grid_Action_COOrder_List_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.ExecuteUbergraph_W_Grid_Action_COOrder_List
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_COOrder_List_C::ExecuteUbergraph_W_Grid_Action_COOrder_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C.ExecuteUbergraph_W_Grid_Action_COOrder_List");

	UW_Grid_Action_COOrder_List_C_ExecuteUbergraph_W_Grid_Action_COOrder_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
