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

// Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.Update Zone Tooltip Text
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_CaptureZone_C::Update_Zone_Tooltip_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.Update Zone Tooltip Text");

	UW_Tooltip_CaptureZone_C_Update_Zone_Tooltip_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Tooltip_CaptureZone_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.Construct");

	UW_Tooltip_CaptureZone_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.ExecuteUbergraph_W_Tooltip_CaptureZone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_CaptureZone_C::ExecuteUbergraph_W_Tooltip_CaptureZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C.ExecuteUbergraph_W_Tooltip_CaptureZone");

	UW_Tooltip_CaptureZone_C_ExecuteUbergraph_W_Tooltip_CaptureZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
