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

// Function W_ModTooltip.W_ModTooltip_C.Set Position
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ModTooltip_C::Set_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Set Position");

	UW_ModTooltip_C_Set_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.Is Modded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_ModTooltip_C::Is_Modded()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Is Modded");

	UW_ModTooltip_C_Is_Modded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ModTooltip.W_ModTooltip_C.Is Whitelisted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Whitelisted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ModTooltip_C::Is_Whitelisted(bool* Is_Whitelisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Is Whitelisted");

	UW_ModTooltip_C_Is_Whitelisted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Whitelisted != nullptr)
		*Is_Whitelisted = params.Is_Whitelisted;

}


// Function W_ModTooltip.W_ModTooltip_C.Get_TB_Whitelist_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_ModTooltip_C::Get_TB_Whitelist_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Get_TB_Whitelist_Text_1");

	UW_ModTooltip_C_Get_TB_Whitelist_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ModTooltip.W_ModTooltip_C.Display Mods
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ModTooltip_C::Display_Mods()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Display Mods");

	UW_ModTooltip_C_Display_Mods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ModTooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Construct");

	UW_ModTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModTooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Tick");

	UW_ModTooltip_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ModTooltip_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Destruct");

	UW_ModTooltip_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.ExecuteUbergraph_W_ModTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModTooltip_C::ExecuteUbergraph_W_ModTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.ExecuteUbergraph_W_ModTooltip");

	UW_ModTooltip_C_ExecuteUbergraph_W_ModTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModTooltip.W_ModTooltip_C.Removed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_ModTooltip_C::Removed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModTooltip.W_ModTooltip_C.Removed__DelegateSignature");

	UW_ModTooltip_C_Removed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
