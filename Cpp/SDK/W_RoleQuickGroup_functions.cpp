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

// Function W_RoleQuickGroup.W_RoleQuickGroup_C.Get Role Panel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            RoleBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleQuickGroup_C::Get_Role_Panel(class UPanelWidget** RoleBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickGroup.W_RoleQuickGroup_C.Get Role Panel");

	UW_RoleQuickGroup_C_Get_Role_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RoleBox != nullptr)
		*RoleBox = params.RoleBox;

}


// Function W_RoleQuickGroup.W_RoleQuickGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleQuickGroup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickGroup.W_RoleQuickGroup_C.PreConstruct");

	UW_RoleQuickGroup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleQuickGroup.W_RoleQuickGroup_C.ExecuteUbergraph_W_RoleQuickGroup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleQuickGroup_C::ExecuteUbergraph_W_RoleQuickGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickGroup.W_RoleQuickGroup_C.ExecuteUbergraph_W_RoleQuickGroup");

	UW_RoleQuickGroup_C_ExecuteUbergraph_W_RoleQuickGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
