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

// Function UMG_BaseHUD.UMG_BaseHUD_C.Get Destruction Event Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_DestructionObjectiveEvent_C* Destruction_Event_Widget       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_BaseHUD_C::Get_Destruction_Event_Widget(class UW_DestructionObjectiveEvent_C** Destruction_Event_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Get Destruction Event Widget");

	UUMG_BaseHUD_C_Get_Destruction_Event_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destruction_Event_Widget != nullptr)
		*Destruction_Event_Widget = params.Destruction_Event_Widget;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Get Capture Event Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_FlagCapturedEvent_C*  Capture_Event_Widget           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_BaseHUD_C::Get_Capture_Event_Widget(class UW_FlagCapturedEvent_C** Capture_Event_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Get Capture Event Widget");

	UUMG_BaseHUD_C_Get_Capture_Event_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Capture_Event_Widget != nullptr)
		*Capture_Event_Widget = params.Capture_Event_Widget;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Create Heal Prompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_BaseHUD_C::Create_Heal_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Create Heal Prompt");

	UUMG_BaseHUD_C_Create_Heal_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Create Voip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_BaseHUD_C::Create_Voip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Create Voip");

	UUMG_BaseHUD_C_Create_Voip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Create Notifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_BaseHUD_C::Create_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Create Notifications");

	UUMG_BaseHUD_C_Create_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Create Approval
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_BaseHUD_C::Create_Approval()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Create Approval");

	UUMG_BaseHUD_C_Create_Approval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_BaseHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Destruct");

	UUMG_BaseHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_BaseHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.Construct");

	UUMG_BaseHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BaseHUD.UMG_BaseHUD_C.ExecuteUbergraph_UMG_BaseHUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_BaseHUD_C::ExecuteUbergraph_UMG_BaseHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BaseHUD.UMG_BaseHUD_C.ExecuteUbergraph_UMG_BaseHUD");

	UUMG_BaseHUD_C_ExecuteUbergraph_UMG_BaseHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
