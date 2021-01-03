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

// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsMarkerVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MarkerWidget_Emplacement_C::IsMarkerVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsMarkerVisible");

	UBP_MarkerWidget_Emplacement_C_IsMarkerVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsInVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InVehicle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsInVehicle(bool* InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsInVehicle");

	UBP_MarkerWidget_Emplacement_C_IsInVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InVehicle != nullptr)
		*InVehicle = params.InVehicle;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleConeVisbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UBP_MarkerWidget_Emplacement_C::GetVehicleConeVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleConeVisbility");

	UBP_MarkerWidget_Emplacement_C_GetVehicleConeVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsVehicleEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsVehicleEmpty(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsVehicleEmpty");

	UBP_MarkerWidget_Emplacement_C_IsVehicleEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQVehicle*              Vehicle                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Emplacement_C::GetVehicle(class ASQVehicle** Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicle");

	UBP_MarkerWidget_Emplacement_C_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vehicle != nullptr)
		*Vehicle = params.Vehicle;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameSquad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SquadVehicle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsSameSquad(bool* SquadVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameSquad");

	UBP_MarkerWidget_Emplacement_C_IsSameSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SquadVehicle != nullptr)
		*SquadVehicle = params.SquadVehicle;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SameTeam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsSameTeam(bool* SameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSameTeam");

	UBP_MarkerWidget_Emplacement_C_IsSameTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SameTeam != nullptr)
		*SameTeam = params.SameTeam;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsNeutralTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsNeutral                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsNeutralTeam(bool* IsNeutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsNeutralTeam");

	UBP_MarkerWidget_Emplacement_C_IsNeutralTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNeutral != nullptr)
		*IsNeutral = params.IsNeutral;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture*                NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Emplacement_C::GetVehicleIcon(class UTexture** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.GetVehicleIcon");

	UBP_MarkerWidget_Emplacement_C_GetVehicleIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_Vehicle_Image_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UBP_MarkerWidget_Emplacement_C::Get_Vehicle_Image_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_Vehicle_Image_Visibility_1");

	UBP_MarkerWidget_Emplacement_C_Get_Vehicle_Image_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsOwnOrNeutralTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OwnOrNeutral                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Emplacement_C::IsOwnOrNeutralTeam(bool* OwnOrNeutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsOwnOrNeutralTeam");

	UBP_MarkerWidget_Emplacement_C_IsOwnOrNeutralTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnOrNeutral != nullptr)
		*OwnOrNeutral = params.OwnOrNeutral;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_PlayerImage_Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_Emplacement_C::Get_PlayerImage_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Get_PlayerImage_Brush");

	UBP_MarkerWidget_Emplacement_C_Get_PlayerImage_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSL
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
void UBP_MarkerWidget_Emplacement_C::IsSL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.IsSL");

	UBP_MarkerWidget_Emplacement_C_IsSL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Emplacement_C::SetAngle(float InAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.SetAngle");

	UBP_MarkerWidget_Emplacement_C_SetAngle_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Emplacement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Construct");

	UBP_MarkerWidget_Emplacement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Emplacement_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.Tick");

	UBP_MarkerWidget_Emplacement_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.ExecuteUbergraph_BP_MarkerWidget_Emplacement
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Emplacement_C::ExecuteUbergraph_BP_MarkerWidget_Emplacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.ExecuteUbergraph_BP_MarkerWidget_Emplacement");

	UBP_MarkerWidget_Emplacement_C_ExecuteUbergraph_BP_MarkerWidget_Emplacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Emplacement_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C.CloseTooltip__DelegateSignature");

	UBP_MarkerWidget_Emplacement_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
