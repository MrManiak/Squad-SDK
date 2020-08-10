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

// Function BP_GotoMenuAction.BP_GotoMenuAction_C.DoAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  MenuModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GotoMenuAction_C::DoAction(class UBaseRadialMenu_C* RadialMenu, class UClass* MenuModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GotoMenuAction.BP_GotoMenuAction_C.DoAction");

	UBP_GotoMenuAction_C_DoAction_Params params;
	params.RadialMenu = RadialMenu;
	params.MenuModel = MenuModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GotoMenuAction.BP_GotoMenuAction_C.ExecuteUbergraph_BP_GotoMenuAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GotoMenuAction_C::ExecuteUbergraph_BP_GotoMenuAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GotoMenuAction.BP_GotoMenuAction_C.ExecuteUbergraph_BP_GotoMenuAction");

	UBP_GotoMenuAction_C_ExecuteUbergraph_BP_GotoMenuAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
