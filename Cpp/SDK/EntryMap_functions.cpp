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

// Function EntryMap.Kamdesh_Highlands_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AKamdesh_Highlands_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryMap.Kamdesh_Highlands_C.ReceiveBeginPlay");

	AKamdesh_Highlands_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EntryMap.Kamdesh_Highlands_C.ExecuteUbergraph_EntryMap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKamdesh_Highlands_C::ExecuteUbergraph_EntryMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryMap.Kamdesh_Highlands_C.ExecuteUbergraph_EntryMap");

	AKamdesh_Highlands_C_ExecuteUbergraph_EntryMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
