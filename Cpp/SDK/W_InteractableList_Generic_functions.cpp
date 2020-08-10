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

// Function W_InteractableList_Generic.W_InteractableList_Generic_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Generic_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Generic.W_InteractableList_Generic_C.Get Fade Animation");

	UW_InteractableList_Generic_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableList_Generic.W_InteractableList_Generic_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Generic_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Generic.W_InteractableList_Generic_C.Get Interact List");

	UW_InteractableList_Generic_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableList_Generic.W_InteractableList_Generic_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Generic_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Generic.W_InteractableList_Generic_C.Tick");

	UW_InteractableList_Generic_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Generic.W_InteractableList_Generic_C.Create Interaction Items
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Generic_C::Create_Interaction_Items(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Generic.W_InteractableList_Generic_C.Create Interaction Items");

	UW_InteractableList_Generic_C_Create_Interaction_Items_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Generic.W_InteractableList_Generic_C.ExecuteUbergraph_W_InteractableList_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Generic_C::ExecuteUbergraph_W_InteractableList_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Generic.W_InteractableList_Generic_C.ExecuteUbergraph_W_InteractableList_Generic");

	UW_InteractableList_Generic_C_ExecuteUbergraph_W_InteractableList_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
