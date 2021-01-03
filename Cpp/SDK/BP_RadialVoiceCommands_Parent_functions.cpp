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

// Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.Create Radial Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Base_Radial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialVoiceCommands_Parent_C::Create_Radial_Widgets(class UBaseRadialMenu_C* Base_Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.Create Radial Widgets");

	UBP_RadialVoiceCommands_Parent_C_Create_Radial_Widgets_Params params;
	params.Base_Radial = Base_Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.CreateChildWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadialMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialVoiceCommands_Parent_C::CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.CreateChildWidgets");

	UBP_RadialVoiceCommands_Parent_C_CreateChildWidgets_Params params;
	params.BaseRadialMenu = BaseRadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.ExecuteUbergraph_BP_RadialVoiceCommands_Parent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialVoiceCommands_Parent_C::ExecuteUbergraph_BP_RadialVoiceCommands_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C.ExecuteUbergraph_BP_RadialVoiceCommands_Parent");

	UBP_RadialVoiceCommands_Parent_C_ExecuteUbergraph_BP_RadialVoiceCommands_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
