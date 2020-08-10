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

// Function W_FlagMap.W_FlagMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_FlagMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagMap.W_FlagMap_C.Construct");

	UW_FlagMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagMap.W_FlagMap_C.ExecuteUbergraph_W_FlagMap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FlagMap_C::ExecuteUbergraph_W_FlagMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagMap.W_FlagMap_C.ExecuteUbergraph_W_FlagMap");

	UW_FlagMap_C_ExecuteUbergraph_W_FlagMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
