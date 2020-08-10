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

// Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.InpActEvt_DesignateTarget_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_CROWS_M1A2_C::InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.InpActEvt_DesignateTarget_K2Node_InputActionEvent_1");

	ABP_CROWS_M1A2_C_InpActEvt_DesignateTarget_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.ServerSetStabilizationHeading
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_CROWS_M1A2_C::ServerSetStabilizationHeading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.ServerSetStabilizationHeading");

	ABP_CROWS_M1A2_C_ServerSetStabilizationHeading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.ExecuteUbergraph_BP_CROWS_M1A2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CROWS_M1A2_C::ExecuteUbergraph_BP_CROWS_M1A2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_M1A2.BP_CROWS_M1A2_C.ExecuteUbergraph_BP_CROWS_M1A2");

	ABP_CROWS_M1A2_C_ExecuteUbergraph_BP_CROWS_M1A2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
