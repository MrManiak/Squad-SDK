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

// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_PercentageBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UUMG_StaminaWidget_C::Get_PercentageBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_PercentageBar_Percent_1");

	UUMG_StaminaWidget_C_Get_PercentageBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaBar_FillColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUMG_StaminaWidget_C::Get_StaminaBar_FillColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaBar_FillColorAndOpacity");

	UUMG_StaminaWidget_C_Get_StaminaBar_FillColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaPercent_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_StaminaWidget_C::Get_StaminaPercent_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.Get_StaminaPercent_Text_1");

	UUMG_StaminaWidget_C_Get_StaminaPercent_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_StaminaWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.Construct");

	UUMG_StaminaWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StaminaWidget.UMG_StaminaWidget_C.Set Stamina Vis
// (BlueprintCallable, BlueprintEvent)
void UUMG_StaminaWidget_C::Set_Stamina_Vis()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.Set Stamina Vis");

	UUMG_StaminaWidget_C_Set_Stamina_Vis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StaminaWidget.UMG_StaminaWidget_C.ExecuteUbergraph_UMG_StaminaWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StaminaWidget_C::ExecuteUbergraph_UMG_StaminaWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StaminaWidget.UMG_StaminaWidget_C.ExecuteUbergraph_UMG_StaminaWidget");

	UUMG_StaminaWidget_C_ExecuteUbergraph_UMG_StaminaWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
