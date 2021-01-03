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

// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Radial From Interactable
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableWidgetList_Master_C::Close_Radial_From_Interactable()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Radial From Interactable");

	UW_InteractableWidgetList_Master_C_Close_Radial_From_Interactable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Fade Animation");

	UW_InteractableWidgetList_Master_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Fade Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableWidgetList_Master_C::Fade_Anim(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Fade Anim");

	UW_InteractableWidgetList_Master_C_Fade_Anim_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Get Interact List");

	UW_InteractableWidgetList_Master_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Create Interaction Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableWidgetList_Master_C::Create_Interaction_Items(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Create Interaction Items");

	UW_InteractableWidgetList_Master_C_Create_Interaction_Items_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Is Player Zoomed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Zoomed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableWidgetList_Master_C::Is_Player_Zoomed(bool* Is_Zoomed)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Is Player Zoomed");

	UW_InteractableWidgetList_Master_C_Is_Player_Zoomed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Zoomed != nullptr)
		*Is_Zoomed = params.Is_Zoomed;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Animation
// (BlueprintCallable, BlueprintEvent)
void UW_InteractableWidgetList_Master_C::Close_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Close Animation");

	UW_InteractableWidgetList_Master_C_Close_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Open Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableWidgetList_Master_C::Open_Animation(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Open Animation");

	UW_InteractableWidgetList_Master_C_Open_Animation_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Clear Interactable
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableWidgetList_Master_C::Clear_Interactable()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Clear Interactable");

	UW_InteractableWidgetList_Master_C_Clear_Interactable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Tick");

	UW_InteractableWidgetList_Master_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Position
// (BlueprintCallable, BlueprintEvent)
void UW_InteractableWidgetList_Master_C::Set_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Position");

	UW_InteractableWidgetList_Master_C_Set_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interactable Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::Set_Interactable_Actor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interactable Actor");

	UW_InteractableWidgetList_Master_C_Set_Interactable_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interact Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableWidgetData     Interact_Data                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.Set Interact Data");

	UW_InteractableWidgetList_Master_C_Set_Interact_Data_Params params;
	params.Interact_Data = Interact_Data;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.ExecuteUbergraph_W_InteractableWidgetList_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableWidgetList_Master_C::ExecuteUbergraph_W_InteractableWidgetList_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableWidgetList_Master.W_InteractableWidgetList_Master_C.ExecuteUbergraph_W_InteractableWidgetList_Master");

	UW_InteractableWidgetList_Master_C_ExecuteUbergraph_W_InteractableWidgetList_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
