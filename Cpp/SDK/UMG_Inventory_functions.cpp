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

// Function UMG_Inventory.UMG_Inventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_Inventory_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Inventory.UMG_Inventory_C.PreConstruct");

	UUMG_Inventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Inventory.UMG_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Inventory.UMG_Inventory_C.Construct");

	UUMG_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Inventory.UMG_Inventory_C.ExecuteUbergraph_UMG_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_Inventory_C::ExecuteUbergraph_UMG_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Inventory.UMG_Inventory_C.ExecuteUbergraph_UMG_Inventory");

	UUMG_Inventory_C_ExecuteUbergraph_UMG_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
