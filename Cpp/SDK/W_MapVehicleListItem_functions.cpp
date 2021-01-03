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

// Function W_MapVehicleListItem.W_MapVehicleListItem_C.Get_TB_Timer_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_MapVehicleListItem_C::Get_TB_Timer_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleListItem.W_MapVehicleListItem_C.Get_TB_Timer_Text_1");

	UW_MapVehicleListItem_C_Get_TB_Timer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_MapVehicleListItem.W_MapVehicleListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapVehicleListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleListItem.W_MapVehicleListItem_C.Construct");

	UW_MapVehicleListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapVehicleListItem.W_MapVehicleListItem_C.ExecuteUbergraph_W_MapVehicleListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapVehicleListItem_C::ExecuteUbergraph_W_MapVehicleListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleListItem.W_MapVehicleListItem_C.ExecuteUbergraph_W_MapVehicleListItem");

	UW_MapVehicleListItem_C_ExecuteUbergraph_W_MapVehicleListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
