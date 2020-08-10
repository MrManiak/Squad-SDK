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

// Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DragDropPlayerItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.Construct");

	UW_DragDropPlayerItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DragDropPlayerItem_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.Destruct");

	UW_DragDropPlayerItem_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.ExecuteUbergraph_W_DragDropPlayerItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DragDropPlayerItem_C::ExecuteUbergraph_W_DragDropPlayerItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DragDropPlayerItem.W_DragDropPlayerItem_C.ExecuteUbergraph_W_DragDropPlayerItem");

	UW_DragDropPlayerItem_C_ExecuteUbergraph_W_DragDropPlayerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
