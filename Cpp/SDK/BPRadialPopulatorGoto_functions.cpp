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

// Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.InitialSetup
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQUserWidget*           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPRadialPopulatorGoto_C::InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.InitialSetup");

	UBPRadialPopulatorGoto_C_InitialSetup_Params params;
	params.Widget = Widget;
	params.Model = Model;
	params.RadialMenu = RadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.ExecuteUbergraph_BPRadialPopulatorGoto
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPRadialPopulatorGoto_C::ExecuteUbergraph_BPRadialPopulatorGoto(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPRadialPopulatorGoto.BPRadialPopulatorGoto_C.ExecuteUbergraph_BPRadialPopulatorGoto");

	UBPRadialPopulatorGoto_C_ExecuteUbergraph_BPRadialPopulatorGoto_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
