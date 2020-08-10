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

// Function W_CommandActionItem.W_CommandActionItem_C.Remove Other Pending Actions
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Remove_Other_Pending_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Remove Other Pending Actions");

	UW_CommandActionItem_C_Remove_Other_Pending_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Get Pre Placement Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_CommandPrePlacement_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Get_Pre_Placement_Widget(class UW_CommandPrePlacement_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Get Pre Placement Widget");

	UW_CommandActionItem_C_Get_Pre_Placement_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Auto Spawn Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Auto_Spawn_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Auto Spawn Action");

	UW_CommandActionItem_C_Auto_Spawn_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Get Traced Map Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Zero                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Get Traced Map Location");

	UW_CommandActionItem_C_Get_Traced_Map_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Zero != nullptr)
		*Zero = params.Zero;
	if (Local != nullptr)
		*Local = params.Local;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Get Tooltip Widget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_CommandActionItem_C::Get_Tooltip_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Get Tooltip Widget");

	UW_CommandActionItem_C_Get_Tooltip_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_CommandActionItem.W_CommandActionItem_C.Get Category Cooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Remaining                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Get_Category_Cooldown(bool* Locked, float* Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Get Category Cooldown");

	UW_CommandActionItem_C_Get_Category_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
	if (Remaining != nullptr)
		*Remaining = params.Remaining;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Get State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESQCommandOptionState          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          State_Time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          State_Percent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Category_Time                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Category_Percent               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Get_State(ESQCommandOptionState* State, float* State_Time, float* State_Percent, bool* Locked, float* Category_Time, float* Category_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Get State");

	UW_CommandActionItem_C_Get_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (State_Time != nullptr)
		*State_Time = params.State_Time;
	if (State_Percent != nullptr)
		*State_Percent = params.State_Percent;
	if (Locked != nullptr)
		*Locked = params.Locked;
	if (Category_Time != nullptr)
		*Category_Time = params.Category_Time;
	if (Category_Percent != nullptr)
		*Category_Percent = params.Category_Percent;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Update Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Faded                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CommandActionItem_C::Update_Color(bool Faded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Update Color");

	UW_CommandActionItem_C_Update_Color_Params params;
	params.Faded = Faded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Update State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Update_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Update State");

	UW_CommandActionItem_C_Update_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Tick");

	UW_CommandActionItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_CommandActionItem_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_CommandActionItem_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandActionItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Construct");

	UW_CommandActionItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Event Control Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Command_ActionControl_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Event_Control_Widget(class UW_Command_ActionControl_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Event Control Widget");

	UW_CommandActionItem_C_Event_Control_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Start Button Cooldown
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Start_Button_Cooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Start Button Cooldown");

	UW_CommandActionItem_C_Start_Button_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Fail Message
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Fail_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Fail Message");

	UW_CommandActionItem_C_Fail_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.ExecuteUbergraph_W_CommandActionItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::ExecuteUbergraph_W_CommandActionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.ExecuteUbergraph_W_CommandActionItem");

	UW_CommandActionItem_C_ExecuteUbergraph_W_CommandActionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Created Control Widget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Command_ActionControl_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionItem_C::Created_Control_Widget__DelegateSignature(class UW_Command_ActionControl_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Created Control Widget__DelegateSignature");

	UW_CommandActionItem_C_Created_Control_Widget__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionItem.W_CommandActionItem_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_CommandActionItem_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionItem.W_CommandActionItem_C.Clicked__DelegateSignature");

	UW_CommandActionItem_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
