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

// Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Get_MarkerImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_Generic_C::Get_MarkerImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Get_MarkerImage_Brush_1");

	UBP_MarkerWidget_Generic_C_Get_MarkerImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Generic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Construct");

	UBP_MarkerWidget_Generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Find SQ Map Icon
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Generic_C::Find_SQ_Map_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.Find SQ Map Icon");

	UBP_MarkerWidget_Generic_C_Find_SQ_Map_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.ExecuteUbergraph_BP_MarkerWidget_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Generic_C::ExecuteUbergraph_BP_MarkerWidget_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Generic.BP_MarkerWidget_Generic_C.ExecuteUbergraph_BP_MarkerWidget_Generic");

	UBP_MarkerWidget_Generic_C_ExecuteUbergraph_BP_MarkerWidget_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
