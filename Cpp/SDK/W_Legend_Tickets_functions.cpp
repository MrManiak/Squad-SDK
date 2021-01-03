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

// Function W_Legend_Tickets.W_Legend_Tickets_C.Get_ObjectiveDestroyedLoss_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_Legend_Tickets_C::Get_ObjectiveDestroyedLoss_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Get_ObjectiveDestroyedLoss_Text");

	UW_Legend_Tickets_C_Get_ObjectiveDestroyedLoss_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Get_ObjectiveDestroyedGain_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_Legend_Tickets_C::Get_ObjectiveDestroyedGain_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Get_ObjectiveDestroyedGain_Text");

	UW_Legend_Tickets_C_Get_ObjectiveDestroyedGain_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Get_FlagLoss_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_Legend_Tickets_C::Get_FlagLoss_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Get_FlagLoss_Text");

	UW_Legend_Tickets_C_Get_FlagLoss_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Get_FlagCapture_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_Legend_Tickets_C::Get_FlagCapture_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Get_FlagCapture_Text");

	UW_Legend_Tickets_C_Get_FlagCapture_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Legend_Tickets_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Construct");

	UW_Legend_Tickets_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Flag Graph
// (BlueprintCallable, BlueprintEvent)
void UW_Legend_Tickets_C::Flag_Graph()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Flag Graph");

	UW_Legend_Tickets_C_Flag_Graph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Legend_Tickets.W_Legend_Tickets_C.Destroyable Objective
// (BlueprintCallable, BlueprintEvent)
void UW_Legend_Tickets_C::Destroyable_Objective()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.Destroyable Objective");

	UW_Legend_Tickets_C_Destroyable_Objective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Legend_Tickets.W_Legend_Tickets_C.ExecuteUbergraph_W_Legend_Tickets
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Legend_Tickets_C::ExecuteUbergraph_W_Legend_Tickets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Legend_Tickets.W_Legend_Tickets_C.ExecuteUbergraph_W_Legend_Tickets");

	UW_Legend_Tickets_C_ExecuteUbergraph_W_Legend_Tickets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
