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

// Function BP_GenericRocketLauncher.BP_GenericRocketLauncher_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericRocketLauncher_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericRocketLauncher.BP_GenericRocketLauncher_C.BlueprintOnFire");

	ABP_GenericRocketLauncher_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericRocketLauncher.BP_GenericRocketLauncher_C.ExecuteUbergraph_BP_GenericRocketLauncher
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericRocketLauncher_C::ExecuteUbergraph_BP_GenericRocketLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericRocketLauncher.BP_GenericRocketLauncher_C.ExecuteUbergraph_BP_GenericRocketLauncher");

	ABP_GenericRocketLauncher_C_ExecuteUbergraph_BP_GenericRocketLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
