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

// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Original Offset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableList_Helicopter_C::Get_Original_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Original Offset");

	UW_InteractableList_Helicopter_C_Get_Original_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Helicopter_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Fade Animation");

	UW_InteractableList_Helicopter_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Helicopter_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Get Interact List");

	UW_InteractableList_Helicopter_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Check for Repair Kit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Helicopter_C::Check_for_Repair_Kit(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Check for Repair Kit");

	UW_InteractableList_Helicopter_C_Check_for_Repair_Kit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Update Vehicle Claim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableList_Helicopter_C::Update_Vehicle_Claim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Update Vehicle Claim");

	UW_InteractableList_Helicopter_C_Update_Vehicle_Claim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Create Interaction Items
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Helicopter_C::Create_Interaction_Items(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Create Interaction Items");

	UW_InteractableList_Helicopter_C_Create_Interaction_Items_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Helicopter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.Tick");

	UW_InteractableList_Helicopter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.ExecuteUbergraph_W_InteractableList_Helicopter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Helicopter_C::ExecuteUbergraph_W_InteractableList_Helicopter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Helicopter.W_InteractableList_Helicopter_C.ExecuteUbergraph_W_InteractableList_Helicopter");

	UW_InteractableList_Helicopter_C_ExecuteUbergraph_W_InteractableList_Helicopter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
