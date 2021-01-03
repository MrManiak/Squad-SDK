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

// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Explosives_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Get Fade Animation");

	UW_InteractableList_Explosives_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Explosives_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Get Interact List");

	UW_InteractableList_Explosives_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Create Shovel Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableList_Explosives_C::Create_Shovel_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Create Shovel Items");

	UW_InteractableList_Explosives_C_Create_Shovel_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Is Deployable Built
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Built                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Full_Health                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Explosives_C::Is_Deployable_Built(bool* Is_Built, bool* Full_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Is Deployable Built");

	UW_InteractableList_Explosives_C_Is_Deployable_Built_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Built != nullptr)
		*Is_Built = params.Is_Built;
	if (Full_Health != nullptr)
		*Full_Health = params.Full_Health;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Soldier Has Shovel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Shovel_Equipped                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Owns_Shovel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Explosives_C::Soldier_Has_Shovel(bool* Shovel_Equipped, bool* Owns_Shovel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Soldier Has Shovel");

	UW_InteractableList_Explosives_C_Soldier_Has_Shovel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Shovel_Equipped != nullptr)
		*Shovel_Equipped = params.Shovel_Equipped;
	if (Owns_Shovel != nullptr)
		*Owns_Shovel = params.Owns_Shovel;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Explosives_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Tick");

	UW_InteractableList_Explosives_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Set Custom Data
// (BlueprintCallable, BlueprintEvent)
void UW_InteractableList_Explosives_C::Set_Custom_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.Set Custom Data");

	UW_InteractableList_Explosives_C_Set_Custom_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.ExecuteUbergraph_W_InteractableList_Explosives
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Explosives_C::ExecuteUbergraph_W_InteractableList_Explosives(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Explosives.W_InteractableList_Explosives_C.ExecuteUbergraph_W_InteractableList_Explosives");

	UW_InteractableList_Explosives_C_ExecuteUbergraph_W_InteractableList_Explosives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
