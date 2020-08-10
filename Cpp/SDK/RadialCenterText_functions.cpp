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

// Function RadialCenterText.RadialCenterText_C.HideResources
// (Public, BlueprintCallable, BlueprintEvent)
void URadialCenterText_C::HideResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.HideResources");

	URadialCenterText_C_HideResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterText.RadialCenterText_C.ShowResources
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeployableRadialEntry_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Outputstring                   (Parm, OutParm)
void URadialCenterText_C::ShowResources(class UDeployableRadialEntry_C* Widget, struct FText* Outputstring)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.ShowResources");

	URadialCenterText_C_ShowResources_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Outputstring != nullptr)
		*Outputstring = params.Outputstring;

}


// Function RadialCenterText.RadialCenterText_C.GetWidgetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   DisplayText                    (Parm, OutParm)
void URadialCenterText_C::GetWidgetText(class USQRadialButton* Widget, struct FText* DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.GetWidgetText");

	URadialCenterText_C_GetWidgetText_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;

}


// Function RadialCenterText.RadialCenterText_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterText_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.GetText_1");

	URadialCenterText_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterText.RadialCenterText_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterText_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.OnHoverBegin");

	URadialCenterText_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterText.RadialCenterText_C.ExecuteUbergraph_RadialCenterText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterText_C::ExecuteUbergraph_RadialCenterText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterText.RadialCenterText_C.ExecuteUbergraph_RadialCenterText");

	URadialCenterText_C_ExecuteUbergraph_RadialCenterText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
