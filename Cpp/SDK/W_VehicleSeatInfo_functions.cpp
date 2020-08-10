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

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ShowHideCommanderStar
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::ShowHideCommanderStar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ShowHideCommanderStar");

	UW_VehicleSeatInfo_C_ShowHideCommanderStar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Squad ID
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::Set_Squad_ID()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Squad ID");

	UW_VehicleSeatInfo_C_Set_Squad_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Self Team
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::Set_Self_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Self Team");

	UW_VehicleSeatInfo_C_Set_Self_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Self Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_VehicleSeatInfo_C::Self_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Self Squad");

	UW_VehicleSeatInfo_C_Self_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Fireteam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::Update_Fireteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Fireteam");

	UW_VehicleSeatInfo_C_Update_Fireteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateRank
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::UpdateRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateRank");

	UW_VehicleSeatInfo_C_UpdateRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateSquadVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::UpdateSquadVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateSquadVisuals");

	UW_VehicleSeatInfo_C_UpdateSquadVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateKitVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_VehicleSeatInfo_C::UpdateKitVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.UpdateKitVisuals");

	UW_VehicleSeatInfo_C_UpdateKitVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Get Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Out_Color                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleSeatInfo_C::Get_Tint(struct FLinearColor* Out_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Get Tint");

	UW_VehicleSeatInfo_C_Get_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Color != nullptr)
		*Out_Color = params.Out_Color;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VehicleSeatInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Construct");

	UW_VehicleSeatInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Occupant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seat_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VehicleSeatInfo_C::Update_Occupant(int Seat_Index, class ASQPlayerState* Player_State, bool Driver)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Update Occupant");

	UW_VehicleSeatInfo_C_Update_Occupant_Params params;
	params.Seat_Index = Seat_Index;
	params.Player_State = Player_State;
	params.Driver = Driver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ExecuteUbergraph_W_VehicleSeatInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleSeatInfo_C::ExecuteUbergraph_W_VehicleSeatInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ExecuteUbergraph_W_VehicleSeatInfo");

	UW_VehicleSeatInfo_C_ExecuteUbergraph_W_VehicleSeatInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
