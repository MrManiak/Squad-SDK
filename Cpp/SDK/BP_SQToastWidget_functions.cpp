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

// Function BP_SQToastWidget.BP_SQToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SQToastWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SQToastWidget.BP_SQToastWidget_C.Construct");

	UBP_SQToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SQToastWidget.BP_SQToastWidget_C.ToastTextUpdated_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ToastText                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_SQToastWidget_C::ToastTextUpdated_Event(const struct FText& ToastText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SQToastWidget.BP_SQToastWidget_C.ToastTextUpdated_Event");

	UBP_SQToastWidget_C_ToastTextUpdated_Event_Params params;
	params.ToastText = ToastText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SQToastWidget.BP_SQToastWidget_C.ExecuteUbergraph_BP_SQToastWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SQToastWidget_C::ExecuteUbergraph_BP_SQToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SQToastWidget.BP_SQToastWidget_C.ExecuteUbergraph_BP_SQToastWidget");

	UBP_SQToastWidget_C_ExecuteUbergraph_BP_SQToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
