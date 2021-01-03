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

// Function BP_env_light_celing.BP_env_light_celing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_env_light_celing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_env_light_celing.BP_env_light_celing_C.UserConstructionScript");

	ABP_env_light_celing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_env_light_celing.BP_env_light_celing_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_env_light_celing_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_env_light_celing.BP_env_light_celing_C.Timeline_0__FinishedFunc");

	ABP_env_light_celing_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_env_light_celing.BP_env_light_celing_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_env_light_celing_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_env_light_celing.BP_env_light_celing_C.Timeline_0__UpdateFunc");

	ABP_env_light_celing_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_env_light_celing.BP_env_light_celing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_env_light_celing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_env_light_celing.BP_env_light_celing_C.ReceiveBeginPlay");

	ABP_env_light_celing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_env_light_celing.BP_env_light_celing_C.ExecuteUbergraph_BP_env_light_celing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_env_light_celing_C::ExecuteUbergraph_BP_env_light_celing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_env_light_celing.BP_env_light_celing_C.ExecuteUbergraph_BP_env_light_celing");

	ABP_env_light_celing_C_ExecuteUbergraph_BP_env_light_celing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
