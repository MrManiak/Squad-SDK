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

// Function BP_RearmMenu.BP_RearmMenu_C.CreateWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RearmMenu_C::CreateWidgets(class UBaseRadialMenu_C* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RearmMenu.BP_RearmMenu_C.CreateWidgets");

	UBP_RearmMenu_C_CreateWidgets_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RearmMenu.BP_RearmMenu_C.CreateChildWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadialMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RearmMenu_C::CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RearmMenu.BP_RearmMenu_C.CreateChildWidgets");

	UBP_RearmMenu_C_CreateChildWidgets_Params params;
	params.BaseRadialMenu = BaseRadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RearmMenu.BP_RearmMenu_C.ExecuteUbergraph_BP_RearmMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RearmMenu_C::ExecuteUbergraph_BP_RearmMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RearmMenu.BP_RearmMenu_C.ExecuteUbergraph_BP_RearmMenu");

	UBP_RearmMenu_C_ExecuteUbergraph_BP_RearmMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
