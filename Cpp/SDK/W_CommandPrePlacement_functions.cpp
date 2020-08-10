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

// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Cache Local World Location
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CommandPrePlacement_C::Cache_Local_World_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Cache Local World Location");

	UW_CommandPrePlacement_C_Cache_Local_World_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Get Traced Map Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Zero                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Get Traced Map Location");

	UW_CommandPrePlacement_C_Get_Traced_Map_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Zero != nullptr)
		*Zero = params.Zero;
	if (Local != nullptr)
		*Local = params.Local;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Set Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  SQAction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::Set_Action(class UClass* SQAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Set Action");

	UW_CommandPrePlacement_C_Set_Action_Params params;
	params.SQAction = SQAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandPrePlacement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Construct");

	UW_CommandPrePlacement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Tick");

	UW_CommandPrePlacement_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.On Map Mouse Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.On Map Mouse Down");

	UW_CommandPrePlacement_C_On_Map_Mouse_Down_Params params;
	params.Mouse_Event = Mouse_Event;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Reset Use
// (BlueprintCallable, BlueprintEvent)
void UW_CommandPrePlacement_C::Reset_Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Reset Use");

	UW_CommandPrePlacement_C_Reset_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.ExecuteUbergraph_W_CommandPrePlacement
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::ExecuteUbergraph_W_CommandPrePlacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.ExecuteUbergraph_W_CommandPrePlacement");

	UW_CommandPrePlacement_C_ExecuteUbergraph_W_CommandPrePlacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandPrePlacement.W_CommandPrePlacement_C.Created Command Control Widget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Command_ActionControl_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandPrePlacement_C::Created_Command_Control_Widget__DelegateSignature(class UW_Command_ActionControl_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandPrePlacement.W_CommandPrePlacement_C.Created Command Control Widget__DelegateSignature");

	UW_CommandPrePlacement_C_Created_Command_Control_Widget__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
