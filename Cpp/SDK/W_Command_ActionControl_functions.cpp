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

// Function W_Command_ActionControl.W_Command_ActionControl_C.Create Accept Deny
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Command_ActionControl_C::Create_Accept_Deny()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Create Accept Deny");

	UW_Command_ActionControl_C_Create_Accept_Deny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Get Pixel Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_ActionControl_C::Get_Pixel_Distance(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Get Pixel Distance");

	UW_Command_ActionControl_C_Get_Pixel_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (distance != nullptr)
		*distance = params.distance;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Get World Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          World_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_ActionControl_C::Get_World_Distance(float* World_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Get World Distance");

	UW_Command_ActionControl_C_Get_World_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (World_Distance != nullptr)
		*World_Distance = params.World_Distance;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Get Angle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Widget_Angle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                World_Rotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Command_ActionControl_C::Get_Angle(float* Widget_Angle, struct FRotator* World_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Get Angle");

	UW_Command_ActionControl_C_Get_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget_Angle != nullptr)
		*Widget_Angle = params.Widget_Angle;
	if (World_Rotation != nullptr)
		*World_Rotation = params.World_Rotation;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Command_ActionControl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Construct");

	UW_Command_ActionControl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UW_Command_ActionControl_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Remove");

	UW_Command_ActionControl_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Command_ActionControl_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Destruct");

	UW_Command_ActionControl_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.On Map Mouse Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_ActionControl_C::On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.On Map Mouse Down");

	UW_Command_ActionControl_C_On_Map_Mouse_Down_Params params;
	params.Mouse_Event = Mouse_Event;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Add Self to Canvas
// (BlueprintCallable, BlueprintEvent)
void UW_Command_ActionControl_C::Add_Self_to_Canvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Add Self to Canvas");

	UW_Command_ActionControl_C_Add_Self_to_Canvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.ExecuteUbergraph_W_Command_ActionControl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_ActionControl_C::ExecuteUbergraph_W_Command_ActionControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.ExecuteUbergraph_W_Command_ActionControl");

	UW_Command_ActionControl_C_ExecuteUbergraph_W_Command_ActionControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_ActionControl.W_Command_ActionControl_C.Placement Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_Command_ActionControl_C::Placement_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_ActionControl.W_Command_ActionControl_C.Placement Complete__DelegateSignature");

	UW_Command_ActionControl_C_Placement_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
