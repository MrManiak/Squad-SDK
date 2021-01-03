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

// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Setup Fill Image
// (Public, BlueprintCallable, BlueprintEvent)
void UW_DestructionObjectiveEvent_C::Setup_Fill_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Setup Fill Image");

	UW_DestructionObjectiveEvent_C_Setup_Fill_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Play Destroy Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Objective_Owner                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DestructionObjectiveEvent_C::Play_Destroy_Animation(unsigned char Objective_Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Play Destroy Animation");

	UW_DestructionObjectiveEvent_C_Play_Destroy_Animation_Params params;
	params.Objective_Owner = Objective_Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DestructionObjectiveEvent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Tick");

	UW_DestructionObjectiveEvent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DestructionObjectiveEvent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.Construct");

	UW_DestructionObjectiveEvent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.ExecuteUbergraph_W_DestructionObjectiveEvent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DestructionObjectiveEvent_C::ExecuteUbergraph_W_DestructionObjectiveEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C.ExecuteUbergraph_W_DestructionObjectiveEvent");

	UW_DestructionObjectiveEvent_C_ExecuteUbergraph_W_DestructionObjectiveEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
