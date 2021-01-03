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

// Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Get Format Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          FormatBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_BuildProgress_C::Get_Format_Box(class UHorizontalBox** FormatBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Get Format Box");

	UW_InteractableItem_BuildProgress_C_Get_Format_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormatBox != nullptr)
		*FormatBox = params.FormatBox;

}


// Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Update Build Health
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_BuildProgress_C::Update_Build_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Update Build Health");

	UW_InteractableItem_BuildProgress_C_Update_Build_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Format Text
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_BuildProgress_C::Format_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.Format Text");

	UW_InteractableItem_BuildProgress_C_Format_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.ExecuteUbergraph_W_InteractableItem_BuildProgress
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_BuildProgress_C::ExecuteUbergraph_W_InteractableItem_BuildProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_BuildProgress.W_InteractableItem_BuildProgress_C.ExecuteUbergraph_W_InteractableItem_BuildProgress");

	UW_InteractableItem_BuildProgress_C_ExecuteUbergraph_W_InteractableItem_BuildProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
