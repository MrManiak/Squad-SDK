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

// Function UMG_Scoreboard.UMG_Scoreboard_C.UpdateScaling
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_Scoreboard_C::UpdateScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.UpdateScaling");

	UUMG_Scoreboard_C_UpdateScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.UpdateServerFPSText
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_Scoreboard_C::UpdateServerFPSText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.UpdateServerFPSText");

	UUMG_Scoreboard_C_UpdateServerFPSText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.Construct");

	UUMG_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_Scoreboard_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.BPInit");

	UUMG_Scoreboard_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.CustomTickEvent
// (BlueprintCallable, BlueprintEvent)
void UUMG_Scoreboard_C::CustomTickEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.CustomTickEvent");

	UUMG_Scoreboard_C_CustomTickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Scoreboard_C::BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUMG_Scoreboard_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.Play Fade Animation
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_Scoreboard_C::Play_Fade_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.Play Fade Animation");

	UUMG_Scoreboard_C_Play_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Scoreboard_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.Destruct");

	UUMG_Scoreboard_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Scoreboard.UMG_Scoreboard_C.ExecuteUbergraph_UMG_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Scoreboard_C::ExecuteUbergraph_UMG_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Scoreboard.UMG_Scoreboard_C.ExecuteUbergraph_UMG_Scoreboard");

	UUMG_Scoreboard_C_ExecuteUbergraph_UMG_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
