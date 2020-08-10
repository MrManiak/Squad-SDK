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

// Function RadialCenterVehicle.RadialCenterVehicle_C.HelicopterAltitudeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AltitudeValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::HelicopterAltitudeCheck(bool* AltitudeValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.HelicopterAltitudeCheck");

	URadialCenterVehicle_C_HelicopterAltitudeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AltitudeValid != nullptr)
		*AltitudeValid = params.AltitudeValid;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Is Soldier Alive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::Is_Soldier_Alive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Is Soldier Alive");

	URadialCenterVehicle_C_Is_Soldier_Alive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Get Widget Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   DisplayText                    (Parm, OutParm)
void URadialCenterVehicle_C::Get_Widget_Text(class USQRadialButton* Button, struct FText* DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Get Widget Text");

	URadialCenterVehicle_C_Get_Widget_Text_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Get Action Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterVehicle_C::Get_Action_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Get Action Text");

	URadialCenterVehicle_C_Get_Action_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Validate FOB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::Validate_FOB(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Validate FOB");

	URadialCenterVehicle_C_Validate_FOB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Validate Transaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Con_Valid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Ammo_Valid                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Loading                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Zone_has_Points                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::Validate_Transaction(bool* Valid, bool* Con_Valid, bool* Ammo_Valid, bool* Is_Loading, bool* Zone_has_Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Validate Transaction");

	URadialCenterVehicle_C_Validate_Transaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Con_Valid != nullptr)
		*Con_Valid = params.Con_Valid;
	if (Ammo_Valid != nullptr)
		*Ammo_Valid = params.Ammo_Valid;
	if (Is_Loading != nullptr)
		*Is_Loading = params.Is_Loading;
	if (Zone_has_Points != nullptr)
		*Zone_has_Points = params.Zone_has_Points;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Is Action Ammo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Ammo_Action                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::Is_Action_Ammo(bool* Is_Ammo_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Is Action Ammo");

	URadialCenterVehicle_C_Is_Action_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Ammo_Action != nullptr)
		*Is_Ammo_Action = params.Is_Ammo_Action;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Denied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool URadialCenterVehicle_C::Vehicle_Denied()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Denied");

	URadialCenterVehicle_C_Vehicle_Denied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Speed Check
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Speed_Is_Valid                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::Vehicle_Speed_Check(bool* Speed_Is_Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Vehicle Speed Check");

	URadialCenterVehicle_C_Vehicle_Speed_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed_Is_Valid != nullptr)
		*Speed_Is_Valid = params.Speed_Is_Valid;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Text_SupplyStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterVehicle_C::Get_Text_SupplyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Text_SupplyStatus");

	URadialCenterVehicle_C_Get_Text_SupplyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialCenterVehicle_C::SetTimerActivation(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerActivation");

	URadialCenterVehicle_C_SetTimerActivation_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RemainingTimePct               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterVehicle_C::SetTimerProgress(float RemainingTimePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.SetTimerProgress");

	URadialCenterVehicle_C_SetTimerProgress_Params params;
	params.RemainingTimePct = RemainingTimePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Background_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor URadialCenterVehicle_C::Get_Background_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Get_Background_ColorAndOpacity_1");

	URadialCenterVehicle_C_Get_Background_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterVehicle_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverBegin");

	URadialCenterVehicle_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterVehicle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Tick");

	URadialCenterVehicle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterVehicle_C::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.OnHoverEnd");

	URadialCenterVehicle_C_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URadialCenterVehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.Construct");

	URadialCenterVehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVehicle.RadialCenterVehicle_C.ExecuteUbergraph_RadialCenterVehicle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterVehicle_C::ExecuteUbergraph_RadialCenterVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVehicle.RadialCenterVehicle_C.ExecuteUbergraph_RadialCenterVehicle");

	URadialCenterVehicle_C_ExecuteUbergraph_RadialCenterVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
