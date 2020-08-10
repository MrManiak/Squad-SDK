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

// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Visibility via bToggle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UTravelQueueWidgetSmall_C::Bind_Visibility_via_bToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Visibility via bToggle");

	UTravelQueueWidgetSmall_C_Bind_Visibility_via_bToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Detailed Queue 2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTravelQueueWidgetSmall_C::Bind_Text_Detailed_Queue_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Detailed Queue 2");

	UTravelQueueWidgetSmall_C_Bind_Text_Detailed_Queue_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Detailed Queue 1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTravelQueueWidgetSmall_C::Bind_Text_Detailed_Queue_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Detailed Queue 1");

	UTravelQueueWidgetSmall_C_Bind_Text_Detailed_Queue_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Countdown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTravelQueueWidgetSmall_C::Bind_Text_Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Countdown");

	UTravelQueueWidgetSmall_C_Bind_Text_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTravelQueueWidgetSmall_C::Bind_Text_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Bind Text Position");

	UTravelQueueWidgetSmall_C_Bind_Text_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Get Queue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQJoinBeaconClient*     JoinQueueClient                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTravelQueueWidgetSmall_C::Get_Queue(class ASQJoinBeaconClient** JoinQueueClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Get Queue");

	UTravelQueueWidgetSmall_C_Get_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JoinQueueClient != nullptr)
		*JoinQueueClient = params.JoinQueueClient;

}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Marquee
// (BlueprintCallable, BlueprintEvent)
void UTravelQueueWidgetSmall_C::Marquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Marquee");

	UTravelQueueWidgetSmall_C_Marquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTravelQueueWidgetSmall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Construct");

	UTravelQueueWidgetSmall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Check Queue
// (BlueprintCallable, BlueprintEvent)
void UTravelQueueWidgetSmall_C::Check_Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.Check Queue");

	UTravelQueueWidgetSmall_C_Check_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.ExecuteUbergraph_TravelQueueWidgetSmall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTravelQueueWidgetSmall_C::ExecuteUbergraph_TravelQueueWidgetSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelQueueWidgetSmall.TravelQueueWidgetSmall_C.ExecuteUbergraph_TravelQueueWidgetSmall");

	UTravelQueueWidgetSmall_C_ExecuteUbergraph_TravelQueueWidgetSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
