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

// Function W_ModList.W_ModList_C.Is Modded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_ModList_C::Is_Modded()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.Is Modded");

	UW_ModList_C_Is_Modded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ModList.W_ModList_C.Is Whitelisted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Whitelisted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ModList_C::Is_Whitelisted(bool* Is_Whitelisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.Is Whitelisted");

	UW_ModList_C_Is_Whitelisted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Whitelisted != nullptr)
		*Is_Whitelisted = params.Is_Whitelisted;

}


// Function W_ModList.W_ModList_C.Get_TB_Whitelist_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_ModList_C::Get_TB_Whitelist_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.Get_TB_Whitelist_Text_1");

	UW_ModList_C_Get_TB_Whitelist_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ModList.W_ModList_C.Display Mods
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ModList_C::Display_Mods()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.Display Mods");

	UW_ModList_C_Display_Mods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModList.W_ModList_C.Init
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQServerListItemWidget* ServerListItem                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModList_C::Init(class USQServerListItemWidget* ServerListItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.Init");

	UW_ModList_C_Init_Params params;
	params.ServerListItem = ServerListItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModList.W_ModList_C.ExecuteUbergraph_W_ModList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModList_C::ExecuteUbergraph_W_ModList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModList.W_ModList_C.ExecuteUbergraph_W_ModList");

	UW_ModList_C_ExecuteUbergraph_W_ModList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
