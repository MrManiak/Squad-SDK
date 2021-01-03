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

// Function BP_Crewman_Kits.BP_Crewman_Kits_C.Create Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Base_Radial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crewman_Kits_C::Create_Widgets(class UBaseRadialMenu_C* Base_Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crewman_Kits.BP_Crewman_Kits_C.Create Widgets");

	UBP_Crewman_Kits_C_Create_Widgets_Params params;
	params.Base_Radial = Base_Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crewman_Kits.BP_Crewman_Kits_C.CreateChildWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadialMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crewman_Kits_C::CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crewman_Kits.BP_Crewman_Kits_C.CreateChildWidgets");

	UBP_Crewman_Kits_C_CreateChildWidgets_Params params;
	params.BaseRadialMenu = BaseRadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crewman_Kits.BP_Crewman_Kits_C.ExecuteUbergraph_BP_Crewman_Kits
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crewman_Kits_C::ExecuteUbergraph_BP_Crewman_Kits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crewman_Kits.BP_Crewman_Kits_C.ExecuteUbergraph_BP_Crewman_Kits");

	UBP_Crewman_Kits_C_ExecuteUbergraph_BP_Crewman_Kits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
