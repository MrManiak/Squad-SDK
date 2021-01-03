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

// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.FindKeyName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   KeyName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextRadialEntry_Tooltip_C::FindKeyName(const struct FName& ActionName, struct FName* KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.FindKeyName");

	UTextRadialEntry_Tooltip_C_FindKeyName_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyName != nullptr)
		*KeyName = params.KeyName;

}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTextRadialEntry_Tooltip_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.GetText_1");

	UTextRadialEntry_Tooltip_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Get_HeaderText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTextRadialEntry_Tooltip_C::Get_HeaderText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Get_HeaderText_Text_1");

	UTextRadialEntry_Tooltip_C_Get_HeaderText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Get_Details_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTextRadialEntry_Tooltip_C::Get_Details_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Get_Details_Text_1");

	UTextRadialEntry_Tooltip_C_Get_Details_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextRadialEntry_Tooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Tick");

	UTextRadialEntry_Tooltip_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTextRadialEntry_Tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.Construct");

	UTextRadialEntry_Tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.ExecuteUbergraph_TextRadialEntry_Tooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextRadialEntry_Tooltip_C::ExecuteUbergraph_TextRadialEntry_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextRadialEntry_Tooltip.TextRadialEntry_Tooltip_C.ExecuteUbergraph_TextRadialEntry_Tooltip");

	UTextRadialEntry_Tooltip_C_ExecuteUbergraph_TextRadialEntry_Tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
