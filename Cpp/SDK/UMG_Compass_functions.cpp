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

// Function UMG_Compass.UMG_Compass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Compass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass.UMG_Compass_C.Construct");

	UUMG_Compass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass.UMG_Compass_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_Compass_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass.UMG_Compass_C.BPInit");

	UUMG_Compass_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass.UMG_Compass_C.Set Compass Visibility
// (BlueprintCallable, BlueprintEvent)
void UUMG_Compass_C::Set_Compass_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass.UMG_Compass_C.Set Compass Visibility");

	UUMG_Compass_C_Set_Compass_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass.UMG_Compass_C.ExecuteUbergraph_UMG_Compass
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Compass_C::ExecuteUbergraph_UMG_Compass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass.UMG_Compass_C.ExecuteUbergraph_UMG_Compass");

	UUMG_Compass_C_ExecuteUbergraph_UMG_Compass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass.UMG_Compass_C.CheckVisibilityStatus_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_Compass_C::CheckVisibilityStatus_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass.UMG_Compass_C.CheckVisibilityStatus_0__DelegateSignature");

	UUMG_Compass_C_CheckVisibilityStatus_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
