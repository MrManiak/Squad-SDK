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

// Function W_FloatingWidget.W_FloatingWidget_C.Validate Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_FloatingWidget_C::Validate_Action(const struct FPointerEvent& Mouse_Event, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingWidget.W_FloatingWidget_C.Validate Action");

	UW_FloatingWidget_C_Validate_Action_Params params;
	params.Mouse_Event = Mouse_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function W_FloatingWidget.W_FloatingWidget_C.On Map Mouse Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FloatingWidget_C::On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingWidget.W_FloatingWidget_C.On Map Mouse Down");

	UW_FloatingWidget_C_On_Map_Mouse_Down_Params params;
	params.Mouse_Event = Mouse_Event;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FloatingWidget.W_FloatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_FloatingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingWidget.W_FloatingWidget_C.Construct");

	UW_FloatingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FloatingWidget.W_FloatingWidget_C.Remove floating widget
// (BlueprintCallable, BlueprintEvent)
void UW_FloatingWidget_C::Remove_floating_widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingWidget.W_FloatingWidget_C.Remove floating widget");

	UW_FloatingWidget_C_Remove_floating_widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FloatingWidget.W_FloatingWidget_C.ExecuteUbergraph_W_FloatingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FloatingWidget_C::ExecuteUbergraph_W_FloatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FloatingWidget.W_FloatingWidget_C.ExecuteUbergraph_W_FloatingWidget");

	UW_FloatingWidget_C_ExecuteUbergraph_W_FloatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
