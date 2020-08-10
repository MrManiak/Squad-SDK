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

// Function RadialCenterRole.RadialCenterRole_C.HideCenterTextWidget
// (Public, BlueprintCallable, BlueprintEvent)
void URadialCenterRole_C::HideCenterTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.HideCenterTextWidget");

	URadialCenterRole_C_HideCenterTextWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRole.RadialCenterRole_C.DisplayCenterTextWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URadialCenterRole_C::DisplayCenterTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.DisplayCenterTextWidget");

	URadialCenterRole_C_DisplayCenterTextWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRole.RadialCenterRole_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility URadialCenterRole_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.GetVisibility_1");

	URadialCenterRole_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Specifics_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterRole_C::Get_Role_Specifics_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.Get_Role_Specifics_Text_1");

	URadialCenterRole_C_Get_Role_Specifics_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Image_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush URadialCenterRole_C::Get_Role_Image_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.Get_Role_Image_Brush_1");

	URadialCenterRole_C_Get_Role_Image_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRole.RadialCenterRole_C.Get_Role_Text_Detail_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterRole_C::Get_Role_Text_Detail_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.Get_Role_Text_Detail_Text_1");

	URadialCenterRole_C_Get_Role_Text_Detail_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRole.RadialCenterRole_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRole_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.Tick");

	URadialCenterRole_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRole.RadialCenterRole_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterRole_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.OnHoverBegin");

	URadialCenterRole_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRole.RadialCenterRole_C.ExecuteUbergraph_RadialCenterRole
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRole_C::ExecuteUbergraph_RadialCenterRole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRole.RadialCenterRole_C.ExecuteUbergraph_RadialCenterRole");

	URadialCenterRole_C_ExecuteUbergraph_RadialCenterRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
