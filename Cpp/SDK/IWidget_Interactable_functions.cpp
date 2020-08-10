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

// Function IWidget_Interactable.IWidget_Interactable_C.Clear Interactable
// (Public, BlueprintCallable, BlueprintEvent)
void UIWidget_Interactable_C::Clear_Interactable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IWidget_Interactable.IWidget_Interactable_C.Clear Interactable");

	UIWidget_Interactable_C_Clear_Interactable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IWidget_Interactable.IWidget_Interactable_C.Set Interact Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableWidgetData     Interact_Data                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWidget_Interactable_C::Set_Interact_Data(const struct FSQUsableWidgetData& Interact_Data, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IWidget_Interactable.IWidget_Interactable_C.Set Interact Data");

	UIWidget_Interactable_C_Set_Interact_Data_Params params;
	params.Interact_Data = Interact_Data;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IWidget_Interactable.IWidget_Interactable_C.Set Interactable Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWidget_Interactable_C::Set_Interactable_Actor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IWidget_Interactable.IWidget_Interactable_C.Set Interactable Actor");

	UIWidget_Interactable_C_Set_Interactable_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
