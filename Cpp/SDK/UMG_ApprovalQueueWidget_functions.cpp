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

// Function UMG_ApprovalQueueWidget.UMG_ApprovalQueueWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_ApprovalQueueWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ApprovalQueueWidget.UMG_ApprovalQueueWidget_C.Construct");

	UUMG_ApprovalQueueWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ApprovalQueueWidget.UMG_ApprovalQueueWidget_C.ExecuteUbergraph_UMG_ApprovalQueueWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_ApprovalQueueWidget_C::ExecuteUbergraph_UMG_ApprovalQueueWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ApprovalQueueWidget.UMG_ApprovalQueueWidget_C.ExecuteUbergraph_UMG_ApprovalQueueWidget");

	UUMG_ApprovalQueueWidget_C_ExecuteUbergraph_UMG_ApprovalQueueWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
