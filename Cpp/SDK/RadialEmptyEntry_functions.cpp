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

// Function RadialEmptyEntry.RadialEmptyEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URadialEmptyEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialEmptyEntry.RadialEmptyEntry_C.Construct");

	URadialEmptyEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialEmptyEntry.RadialEmptyEntry_C.ExecuteUbergraph_RadialEmptyEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialEmptyEntry_C::ExecuteUbergraph_RadialEmptyEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialEmptyEntry.RadialEmptyEntry_C.ExecuteUbergraph_RadialEmptyEntry");

	URadialEmptyEntry_C_ExecuteUbergraph_RadialEmptyEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
