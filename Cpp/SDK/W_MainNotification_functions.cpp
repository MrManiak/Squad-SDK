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

// Function W_MainNotification.W_MainNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MainNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainNotification.W_MainNotification_C.Construct");

	UW_MainNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MainNotification.W_MainNotification_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UW_MainNotification_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainNotification.W_MainNotification_C.Remove");

	UW_MainNotification_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MainNotification.W_MainNotification_C.ExecuteUbergraph_W_MainNotification
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainNotification_C::ExecuteUbergraph_W_MainNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainNotification.W_MainNotification_C.ExecuteUbergraph_W_MainNotification");

	UW_MainNotification_C_ExecuteUbergraph_W_MainNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MainNotification.W_MainNotification_C.Removed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_MainNotification_C::Removed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MainNotification.W_MainNotification_C.Removed__DelegateSignature");

	UW_MainNotification_C_Removed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
