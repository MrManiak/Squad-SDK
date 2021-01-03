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

// Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayerRankAndRole_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.Tick");

	UW_PlayerRankAndRole_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_PlayerRankAndRole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.Construct");

	UW_PlayerRankAndRole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.ExecuteUbergraph_W_PlayerRankAndRole
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayerRankAndRole_C::ExecuteUbergraph_W_PlayerRankAndRole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PlayerRankAndRole.W_PlayerRankAndRole_C.ExecuteUbergraph_W_PlayerRankAndRole");

	UW_PlayerRankAndRole_C_ExecuteUbergraph_W_PlayerRankAndRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
