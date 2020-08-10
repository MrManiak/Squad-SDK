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

// Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.Update Rally Tooltip Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumSpawns                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_RallyPoint_C::Update_Rally_Tooltip_Text(int NumSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.Update Rally Tooltip Text");

	UW_Tooltip_RallyPoint_C_Update_Rally_Tooltip_Text_Params params;
	params.NumSpawns = NumSpawns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Tooltip_RallyPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.Construct");

	UW_Tooltip_RallyPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.ExecuteUbergraph_W_Tooltip_RallyPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_RallyPoint_C::ExecuteUbergraph_W_Tooltip_RallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C.ExecuteUbergraph_W_Tooltip_RallyPoint");

	UW_Tooltip_RallyPoint_C_ExecuteUbergraph_W_Tooltip_RallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
