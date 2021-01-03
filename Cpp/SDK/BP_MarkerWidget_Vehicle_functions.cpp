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

// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get 1st Occupant Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Leader                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Same_Squad                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   ID                             (Parm, OutParm)
void UBP_MarkerWidget_Vehicle_C::Get_1st_Occupant_Info(bool* Success, bool* Leader, bool* Same_Squad, struct FText* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get 1st Occupant Info");

	UBP_MarkerWidget_Vehicle_C_Get_1st_Occupant_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Leader != nullptr)
		*Leader = params.Leader;
	if (Same_Squad != nullptr)
		*Same_Squad = params.Same_Squad;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateSquadInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateSquadInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateSquadInfo");

	UBP_MarkerWidget_Vehicle_C_UpdateSquadInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get Claimed By
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Claimed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Claim_ID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::Get_Claimed_By(bool* Is_Claimed, int* Claim_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Get Claimed By");

	UBP_MarkerWidget_Vehicle_C_Get_Claimed_By_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Claimed != nullptr)
		*Is_Claimed = params.Is_Claimed;
	if (Claim_ID != nullptr)
		*Claim_ID = params.Claim_ID;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetLocalSeat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USQVehicleSeatComponent* Seat                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::GetLocalSeat(class USQVehicleSeatComponent** Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetLocalSeat");

	UBP_MarkerWidget_Vehicle_C_GetLocalSeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Seat != nullptr)
		*Seat = params.Seat;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsLocalInDriverSeat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Driver                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsLocalInDriverSeat(bool* Driver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsLocalInDriverSeat");

	UBP_MarkerWidget_Vehicle_C_IsLocalInDriverSeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Driver != nullptr)
		*Driver = params.Driver;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateAngles
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateAngles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateAngles");

	UBP_MarkerWidget_Vehicle_C_UpdateAngles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsInVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InVehicle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsInVehicle(bool* InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsInVehicle");

	UBP_MarkerWidget_Vehicle_C_IsInVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InVehicle != nullptr)
		*InVehicle = params.InVehicle;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleConeVisbility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateVehicleConeVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleConeVisbility");

	UBP_MarkerWidget_Vehicle_C_UpdateVehicleConeVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsVehicleEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsVehicleEmpty(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsVehicleEmpty");

	UBP_MarkerWidget_Vehicle_C_IsVehicleEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQVehicle*              Vehicle                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::GetVehicle(class ASQVehicle** Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicle");

	UBP_MarkerWidget_Vehicle_C_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vehicle != nullptr)
		*Vehicle = params.Vehicle;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameSquad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SquadVehicle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsSameSquad(bool* SquadVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameSquad");

	UBP_MarkerWidget_Vehicle_C_IsSameSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SquadVehicle != nullptr)
		*SquadVehicle = params.SquadVehicle;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SameTeam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsSameTeam(bool* SameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsSameTeam");

	UBP_MarkerWidget_Vehicle_C_IsSameTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SameTeam != nullptr)
		*SameTeam = params.SameTeam;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsNeutralTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsNeutralTeam                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Vehicle_C::IsNeutralTeam(bool* IsNeutralTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.IsNeutralTeam");

	UBP_MarkerWidget_Vehicle_C_IsNeutralTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNeutralTeam != nullptr)
		*IsNeutralTeam = params.IsNeutralTeam;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicleIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture*                NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::GetVehicleIcon(class UTexture** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.GetVehicleIcon");

	UBP_MarkerWidget_Vehicle_C_GetVehicleIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateVehicleBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVehicleBrush");

	UBP_MarkerWidget_Vehicle_C_UpdateVehicleBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Construct");

	UBP_MarkerWidget_Vehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.Tick");

	UBP_MarkerWidget_Vehicle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateStateEvent");

	UBP_MarkerWidget_Vehicle_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVisibilityEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::UpdateVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.UpdateVisibilityEvent");

	UBP_MarkerWidget_Vehicle_C_UpdateVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.ExecuteUbergraph_BP_MarkerWidget_Vehicle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Vehicle_C::ExecuteUbergraph_BP_MarkerWidget_Vehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.ExecuteUbergraph_BP_MarkerWidget_Vehicle");

	UBP_MarkerWidget_Vehicle_C_ExecuteUbergraph_BP_MarkerWidget_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Vehicle_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C.CloseTooltip__DelegateSignature");

	UBP_MarkerWidget_Vehicle_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
