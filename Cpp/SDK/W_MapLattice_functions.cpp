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

// Function W_MapLattice.W_MapLattice_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UW_MapLattice_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapLattice.W_MapLattice_C.Initialize");

	UW_MapLattice_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapLattice.W_MapLattice_C.Update Lattice Opacity
// (BlueprintCallable, BlueprintEvent)
void UW_MapLattice_C::Update_Lattice_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapLattice.W_MapLattice_C.Update Lattice Opacity");

	UW_MapLattice_C_Update_Lattice_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapLattice.W_MapLattice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapLattice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapLattice.W_MapLattice_C.Construct");

	UW_MapLattice_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapLattice.W_MapLattice_C.ExecuteUbergraph_W_MapLattice
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapLattice_C::ExecuteUbergraph_W_MapLattice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapLattice.W_MapLattice_C.ExecuteUbergraph_W_MapLattice");

	UW_MapLattice_C_ExecuteUbergraph_W_MapLattice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
