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

// Function W_Training_LevelList.W_Training_LevelList_C.BndEvt__PopupTraining_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_Training_LevelList_C::BndEvt__PopupTraining_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Training_LevelList.W_Training_LevelList_C.BndEvt__PopupTraining_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature");

	UW_Training_LevelList_C_BndEvt__PopupTraining_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Training_LevelList.W_Training_LevelList_C.ExecuteUbergraph_W_Training_LevelList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Training_LevelList_C::ExecuteUbergraph_W_Training_LevelList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Training_LevelList.W_Training_LevelList_C.ExecuteUbergraph_W_Training_LevelList");

	UW_Training_LevelList_C_ExecuteUbergraph_W_Training_LevelList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
