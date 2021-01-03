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

// Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQMapOrderWaypointLines_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.Construct");

	UW_SQMapOrderWaypointLines_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.RefreshUIData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapOrderWaypointLines_C::RefreshUIData(class USaveData_UI_C* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.RefreshUIData");

	UW_SQMapOrderWaypointLines_C_RefreshUIData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.ExecuteUbergraph_W_SQMapOrderWaypointLines
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapOrderWaypointLines_C::ExecuteUbergraph_W_SQMapOrderWaypointLines(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C.ExecuteUbergraph_W_SQMapOrderWaypointLines");

	UW_SQMapOrderWaypointLines_C_ExecuteUbergraph_W_SQMapOrderWaypointLines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
