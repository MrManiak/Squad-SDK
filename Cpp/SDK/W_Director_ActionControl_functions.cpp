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

// Function W_Director_ActionControl.W_Director_ActionControl_C.Get Pixel Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Director_ActionControl_C::Get_Pixel_Distance(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.Get Pixel Distance");

	UW_Director_ActionControl_C_Get_Pixel_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (distance != nullptr)
		*distance = params.distance;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.Get Angle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Widget_Angle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                World_Rotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Director_ActionControl_C::Get_Angle(float* Widget_Angle, struct FRotator* World_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.Get Angle");

	UW_Director_ActionControl_C_Get_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget_Angle != nullptr)
		*Widget_Angle = params.Widget_Angle;
	if (World_Rotation != nullptr)
		*World_Rotation = params.World_Rotation;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Director_ActionControl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.Construct");

	UW_Director_ActionControl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UW_Director_ActionControl_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.Remove");

	UW_Director_ActionControl_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.On Map Mouse Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Director_ActionControl_C::On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.On Map Mouse Down");

	UW_Director_ActionControl_C_On_Map_Mouse_Down_Params params;
	params.Mouse_Event = Mouse_Event;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.Add Self to Viewport
// (BlueprintCallable, BlueprintEvent)
void UW_Director_ActionControl_C::Add_Self_to_Viewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.Add Self to Viewport");

	UW_Director_ActionControl_C_Add_Self_to_Viewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_ActionControl.W_Director_ActionControl_C.ExecuteUbergraph_W_Director_ActionControl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Director_ActionControl_C::ExecuteUbergraph_W_Director_ActionControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_ActionControl.W_Director_ActionControl_C.ExecuteUbergraph_W_Director_ActionControl");

	UW_Director_ActionControl_C_ExecuteUbergraph_W_Director_ActionControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
