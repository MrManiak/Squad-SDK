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

// Function UMG_Compass_Player.UMG_Compass_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Compass_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Player.UMG_Compass_Player_C.Construct");

	UUMG_Compass_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass_Player.UMG_Compass_Player_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_Compass_Player_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Player.UMG_Compass_Player_C.BPInit");

	UUMG_Compass_Player_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Compass_Player.UMG_Compass_Player_C.ExecuteUbergraph_UMG_Compass_Player
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Compass_Player_C::ExecuteUbergraph_UMG_Compass_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Compass_Player.UMG_Compass_Player_C.ExecuteUbergraph_UMG_Compass_Player");

	UUMG_Compass_Player_C_ExecuteUbergraph_UMG_Compass_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
