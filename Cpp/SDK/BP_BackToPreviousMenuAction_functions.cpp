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

// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.CanClick
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BackToPreviousMenuAction_C::CanClick(class APlayerController* Controller, class UBP_RadialItemModel_C* Model, bool* CanClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.CanClick");

	UBP_BackToPreviousMenuAction_C_CanClick_Params params;
	params.Controller = Controller;
	params.Model = Model;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanClick != nullptr)
		*CanClick = params.CanClick;

}


// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Raidal_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BackToPreviousMenuAction_C::OnClicked(class UBaseRadialMenu_C* Raidal_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.OnClicked");

	UBP_BackToPreviousMenuAction_C_OnClicked_Params params;
	params.Raidal_Menu = Raidal_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.ExecuteUbergraph_BP_BackToPreviousMenuAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BackToPreviousMenuAction_C::ExecuteUbergraph_BP_BackToPreviousMenuAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C.ExecuteUbergraph_BP_BackToPreviousMenuAction");

	UBP_BackToPreviousMenuAction_C_ExecuteUbergraph_BP_BackToPreviousMenuAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
