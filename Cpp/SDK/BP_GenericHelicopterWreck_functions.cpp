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

// Function BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C.StopReplication
// (Event, Public, BlueprintEvent)
void ABP_GenericHelicopterWreck_C::StopReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C.StopReplication");

	ABP_GenericHelicopterWreck_C_StopReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C.ExecuteUbergraph_BP_GenericHelicopterWreck
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericHelicopterWreck_C::ExecuteUbergraph_BP_GenericHelicopterWreck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C.ExecuteUbergraph_BP_GenericHelicopterWreck");

	ABP_GenericHelicopterWreck_C_ExecuteUbergraph_BP_GenericHelicopterWreck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
