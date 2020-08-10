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

// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Action Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (Parm, OutParm)
void UW_InteractableList_VehicleBay_C::Get_Action_Name(class UClass* Class, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Action Name");

	UW_InteractableList_VehicleBay_C_Get_Action_Name_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Original Offset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableList_VehicleBay_C::Get_Original_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Original Offset");

	UW_InteractableList_VehicleBay_C_Get_Original_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_VehicleBay_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Fade Animation");

	UW_InteractableList_VehicleBay_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_VehicleBay_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Get Interact List");

	UW_InteractableList_VehicleBay_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Check for Repair Kit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_VehicleBay_C::Check_for_Repair_Kit(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Check for Repair Kit");

	UW_InteractableList_VehicleBay_C_Check_for_Repair_Kit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Vehicle Build
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableList_VehicleBay_C::Update_Vehicle_Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Vehicle Build");

	UW_InteractableList_VehicleBay_C_Update_Vehicle_Build_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_VehicleBay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Tick");

	UW_InteractableList_VehicleBay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Set Interactable Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_VehicleBay_C::Set_Interactable_Actor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Set Interactable Actor");

	UW_InteractableList_VehicleBay_C_Set_Interactable_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Queue Items
// (BlueprintCallable, BlueprintEvent)
void UW_InteractableList_VehicleBay_C::Update_Queue_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.Update Queue Items");

	UW_InteractableList_VehicleBay_C_Update_Queue_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.ExecuteUbergraph_W_InteractableList_VehicleBay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_VehicleBay_C::ExecuteUbergraph_W_InteractableList_VehicleBay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_VehicleBay.W_InteractableList_VehicleBay_C.ExecuteUbergraph_W_InteractableList_VehicleBay");

	UW_InteractableList_VehicleBay_C_ExecuteUbergraph_W_InteractableList_VehicleBay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
