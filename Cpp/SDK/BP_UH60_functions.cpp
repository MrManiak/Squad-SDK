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

// Function BP_UH60.BP_UH60_C.Set Helicopter Widget Materials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           All_Valid_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_UH60_C::Set_Helicopter_Widget_Materials(bool* All_Valid_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Set Helicopter Widget Materials");

	ABP_UH60_C_Set_Helicopter_Widget_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (All_Valid_ != nullptr)
		*All_Valid_ = params.All_Valid_;

}


// Function BP_UH60.BP_UH60_C.Set Helicopter Widgets Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_UH60_C::Set_Helicopter_Widgets_Visibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Set Helicopter Widgets Visibility");

	ABP_UH60_C_Set_Helicopter_Widgets_Visibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Get UI Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_UH60_C::Get_UI_Tint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Get UI Tint");

	ABP_UH60_C_Get_UI_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_UH60.BP_UH60_C.Manage Helicopter Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_UH60_C::Manage_Helicopter_Widgets(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Manage Helicopter Widgets");

	ABP_UH60_C_Manage_Helicopter_Widgets_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_UH60_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.UserConstructionScript");

	ABP_UH60_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)
void ABP_UH60_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Timeline_0_0__FinishedFunc");

	ABP_UH60_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)
void ABP_UH60_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Timeline_0_0__UpdateFunc");

	ABP_UH60_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Timeline_1_0__FinishedFunc
// (BlueprintEvent)
void ABP_UH60_C::Timeline_1_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Timeline_1_0__FinishedFunc");

	ABP_UH60_C_Timeline_1_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Timeline_1_0__UpdateFunc
// (BlueprintEvent)
void ABP_UH60_C::Timeline_1_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Timeline_1_0__UpdateFunc");

	ABP_UH60_C_Timeline_1_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_UH60_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.ReceiveBeginPlay");

	ABP_UH60_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.ActivationSequence
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_UH60_C::ActivationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.ActivationSequence");

	ABP_UH60_C_ActivationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.DeactivationSequence
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_UH60_C::DeactivationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.DeactivationSequence");

	ABP_UH60_C_DeactivationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.Set UI Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_UI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_UH60_C::Set_UI_Enabled(bool Enable_UI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.Set UI Enabled");

	ABP_UH60_C_Set_UI_Enabled_Params params;
	params.Enable_UI = Enable_UI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_UH60.BP_UH60_C.ExecuteUbergraph_BP_UH60
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_UH60_C::ExecuteUbergraph_BP_UH60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UH60.BP_UH60_C.ExecuteUbergraph_BP_UH60");

	ABP_UH60_C_ExecuteUbergraph_BP_UH60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
