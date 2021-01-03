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

// Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestSLConfirm_C::BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_CommandRequestSLConfirm_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestSLConfirm_C::BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UW_CommandRequestSLConfirm_C_BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandRequestSLConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.Construct");

	UW_CommandRequestSLConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestSLConfirm_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.Tick");

	UW_CommandRequestSLConfirm_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.ExecuteUbergraph_W_CommandRequestSLConfirm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestSLConfirm_C::ExecuteUbergraph_W_CommandRequestSLConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C.ExecuteUbergraph_W_CommandRequestSLConfirm");

	UW_CommandRequestSLConfirm_C_ExecuteUbergraph_W_CommandRequestSLConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
