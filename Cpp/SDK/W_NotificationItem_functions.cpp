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

// Function W_NotificationItem.W_NotificationItem_C.Set Texture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_NotificationItem_C::Set_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationItem.W_NotificationItem_C.Set Texture");

	UW_NotificationItem_C_Set_Texture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationItem.W_NotificationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_NotificationItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationItem.W_NotificationItem_C.Construct");

	UW_NotificationItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationItem.W_NotificationItem_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UW_NotificationItem_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationItem.W_NotificationItem_C.Remove");

	UW_NotificationItem_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationItem.W_NotificationItem_C.ExecuteUbergraph_W_NotificationItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationItem_C::ExecuteUbergraph_W_NotificationItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationItem.W_NotificationItem_C.ExecuteUbergraph_W_NotificationItem");

	UW_NotificationItem_C_ExecuteUbergraph_W_NotificationItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
