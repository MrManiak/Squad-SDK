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

// Function BP_RadialItemModel.BP_RadialItemModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialItemModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialItemModel.BP_RadialItemModel_C.OnClicked");

	UBP_RadialItemModel_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialItemModel.BP_RadialItemModel_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialItemModel_C::Populate(class USQRadialButton* Widget, class UBaseRadialMenu_C* Menu, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialItemModel.BP_RadialItemModel_C.Populate");

	UBP_RadialItemModel_C_Populate_Params params;
	params.Widget = Widget;
	params.Menu = Menu;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialItemModel.BP_RadialItemModel_C.OnReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialItemModel_C::OnReleased(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialItemModel.BP_RadialItemModel_C.OnReleased");

	UBP_RadialItemModel_C_OnReleased_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialItemModel.BP_RadialItemModel_C.ExecuteUbergraph_BP_RadialItemModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialItemModel_C::ExecuteUbergraph_BP_RadialItemModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialItemModel.BP_RadialItemModel_C.ExecuteUbergraph_BP_RadialItemModel");

	UBP_RadialItemModel_C_ExecuteUbergraph_BP_RadialItemModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
