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

// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Action Ready
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Grid_Action_Command_C::Get_Action_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Action Ready");

	UW_Grid_Action_Command_C_Get_Action_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_Grid_Action_Command_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Tooltip");

	UW_Grid_Action_Command_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Tint                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_Command_C::Get_Color(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get Color");

	UW_Grid_Action_Command_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tint != nullptr)
		*Tint = params.Tint;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESQCommandOptionState          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          State_Time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          State_Percent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Category_Locked                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Category_Time                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Category_Percent               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_Command_C::Get_State(ESQCommandOptionState* State, float* State_Time, float* State_Percent, bool* Category_Locked, float* Category_Time, float* Category_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Get State");

	UW_Grid_Action_Command_C_Get_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (State_Time != nullptr)
		*State_Time = params.State_Time;
	if (State_Percent != nullptr)
		*State_Percent = params.State_Percent;
	if (Category_Locked != nullptr)
		*Category_Locked = params.Category_Locked;
	if (Category_Time != nullptr)
		*Category_Time = params.Category_Time;
	if (Category_Percent != nullptr)
		*Category_Percent = params.Category_Percent;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Grid_Action_Command_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Construct");

	UW_Grid_Action_Command_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Refresh Info
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_Command_C::Refresh_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Refresh Info");

	UW_Grid_Action_Command_C_Refresh_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_Command_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Tick");

	UW_Grid_Action_Command_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Grid_Action_Command_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.PreConstruct");

	UW_Grid_Action_Command_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Action Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_Command_C::Action_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Action Button Pressed");

	UW_Grid_Action_Command_C_Action_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.Fail Message
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_Command_C::Fail_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.Fail Message");

	UW_Grid_Action_Command_C_Fail_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action_Command.W_Grid_Action_Command_C.ExecuteUbergraph_W_Grid_Action_Command
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_Command_C::ExecuteUbergraph_W_Grid_Action_Command(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action_Command.W_Grid_Action_Command_C.ExecuteUbergraph_W_Grid_Action_Command");

	UW_Grid_Action_Command_C_ExecuteUbergraph_W_Grid_Action_Command_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
