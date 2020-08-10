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

// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSameTeam                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Cameraman_C::IsSameTeam(bool* IsSameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSameTeam");

	UBP_MarkerWidget_Cameraman_C_IsSameTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSameTeam != nullptr)
		*IsSameTeam = params.IsSameTeam;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Get_Player_Image_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_Cameraman_C::Get_Player_Image_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Get_Player_Image_Brush_1");

	UBP_MarkerWidget_Cameraman_C_Get_Player_Image_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelfCameraMan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSelfCameraMan                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Cameraman_C::IsSelfCameraMan(bool* IsSelfCameraMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelfCameraMan");

	UBP_MarkerWidget_Cameraman_C_IsSelfCameraMan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelfCameraMan != nullptr)
		*IsSelfCameraMan = params.IsSelfCameraMan;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.GetMarkerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UBP_MarkerWidget_Cameraman_C::GetMarkerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.GetMarkerVisibility");

	UBP_MarkerWidget_Cameraman_C_GetMarkerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelf
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSelf                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Cameraman_C::IsSelf(bool* IsSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.IsSelf");

	UBP_MarkerWidget_Cameraman_C_IsSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelf != nullptr)
		*IsSelf = params.IsSelf;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Cameraman_C::SetAngle(float InAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.SetAngle");

	UBP_MarkerWidget_Cameraman_C_SetAngle_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Cameraman_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Construct");

	UBP_MarkerWidget_Cameraman_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Cameraman_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.Tick");

	UBP_MarkerWidget_Cameraman_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.ExecuteUbergraph_BP_MarkerWidget_Cameraman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Cameraman_C::ExecuteUbergraph_BP_MarkerWidget_Cameraman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.ExecuteUbergraph_BP_MarkerWidget_Cameraman");

	UBP_MarkerWidget_Cameraman_C_ExecuteUbergraph_BP_MarkerWidget_Cameraman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Cameraman_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C.CloseTooltip__DelegateSignature");

	UBP_MarkerWidget_Cameraman_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
