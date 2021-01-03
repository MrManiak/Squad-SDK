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

// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Format Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          FormatBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_Master_C::Get_Format_Box(class UHorizontalBox** FormatBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Format Box");

	UW_InteractableItem_Master_C_Get_Format_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormatBox != nullptr)
		*FormatBox = params.FormatBox;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Format Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_Master_C::Format_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Format Text");

	UW_InteractableItem_Master_C_Format_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Short Action Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 In_Action                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FText                   Short_Name                     (Parm, OutParm)
void UW_InteractableItem_Master_C::Get_Short_Action_Name(const struct FString& In_Action, struct FText* Short_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Get Short Action Name");

	UW_InteractableItem_Master_C_Get_Short_Action_Name_Params params;
	params.In_Action = In_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Short_Name != nullptr)
		*Short_Name = params.Short_Name;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interactable Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_Master_C::Set_Interactable_Actor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interactable Actor");

	UW_InteractableItem_Master_C_Set_Interactable_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Clear Interactable
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_Master_C::Clear_Interactable()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Clear Interactable");

	UW_InteractableItem_Master_C_Clear_Interactable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interact Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableWidgetData     Interact_Data                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_Master_C::Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.Set Interact Data");

	UW_InteractableItem_Master_C_Set_Interact_Data_Params params;
	params.Interact_Data = Interact_Data;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_Master.W_InteractableItem_Master_C.ExecuteUbergraph_W_InteractableItem_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_Master_C::ExecuteUbergraph_W_InteractableItem_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_Master.W_InteractableItem_Master_C.ExecuteUbergraph_W_InteractableItem_Master");

	UW_InteractableItem_Master_C_ExecuteUbergraph_W_InteractableItem_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
