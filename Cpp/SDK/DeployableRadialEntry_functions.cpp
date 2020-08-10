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

// Function DeployableRadialEntry.DeployableRadialEntry_C.BPInit
// (Event, Public, BlueprintEvent)
void UDeployableRadialEntry_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableRadialEntry.DeployableRadialEntry_C.BPInit");

	UDeployableRadialEntry_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeployableRadialEntry.DeployableRadialEntry_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UDeployableRadialEntry_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableRadialEntry.DeployableRadialEntry_C.OnHoverBegin");

	UDeployableRadialEntry_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeployableRadialEntry.DeployableRadialEntry_C.ExecuteUbergraph_DeployableRadialEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeployableRadialEntry_C::ExecuteUbergraph_DeployableRadialEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableRadialEntry.DeployableRadialEntry_C.ExecuteUbergraph_DeployableRadialEntry");

	UDeployableRadialEntry_C_ExecuteUbergraph_DeployableRadialEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
