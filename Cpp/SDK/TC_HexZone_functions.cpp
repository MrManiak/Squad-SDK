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

// Function TC_HexZone.TC_HexZone_C.Refresh Protection
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Refresh_Protection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Refresh Protection");

	ATC_HexZone_C_Refresh_Protection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Get Protected By Neighbours
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Protected                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATC_HexZone_C::Get_Protected_By_Neighbours(bool* Protected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Get Protected By Neighbours");

	ATC_HexZone_C_Get_Protected_By_Neighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Protected != nullptr)
		*Protected = params.Protected;

}


// Function TC_HexZone.TC_HexZone_C.Set ID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hex_Num                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::Set_ID(int Hex_Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Set ID");

	ATC_HexZone_C_Set_ID_Params params;
	params.Hex_Num = Hex_Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Calculate Can Capture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Nearby_Zones                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Capture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATC_HexZone_C::Calculate_Can_Capture(int Nearby_Zones, int Team, bool* Can_Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Calculate Can Capture");

	ATC_HexZone_C_Calculate_Can_Capture_Params params;
	params.Nearby_Zones = Nearby_Zones;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Capture != nullptr)
		*Can_Capture = params.Can_Capture;

}


// Function TC_HexZone.TC_HexZone_C.Refresh Local Zones
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Refresh_Local_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Refresh Local Zones");

	ATC_HexZone_C_Refresh_Local_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Refresh Can Cap
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Refresh_Can_Cap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Refresh Can Cap");

	ATC_HexZone_C_Refresh_Can_Cap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Cache Local Hexes
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Cache_Local_Hexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Cache Local Hexes");

	ATC_HexZone_C_Cache_Local_Hexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Init Data
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Init_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Init Data");

	ATC_HexZone_C_Init_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Refresh Zone Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Refresh_Zone_Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Refresh Zone Debug");

	ATC_HexZone_C_Refresh_Zone_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.UserConstructionScript");

	ATC_HexZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATC_HexZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.ReceiveBeginPlay");

	ATC_HexZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.State Changed Notify
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::State_Changed_Notify(unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.State Changed Notify");

	ATC_HexZone_C_State_Changed_Notify_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Debug
// (BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Debug");

	ATC_HexZone_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.ReceiveTick");

	ATC_HexZone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::State_Changed(class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.State Changed");

	ATC_HexZone_C_State_Changed_Params params;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Make Team One
// (BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Make_Team_One()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Make Team One");

	ATC_HexZone_C_Make_Team_One_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Make Team Two
// (BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Make_Team_Two()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Make Team Two");

	ATC_HexZone_C_Make_Team_Two_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Make Team Neutral
// (BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Make_Team_Neutral()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Make Team Neutral");

	ATC_HexZone_C_Make_Team_Neutral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Protector Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Protector                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::Protector_Destroyed(class AActor* Protector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Protector Destroyed");

	ATC_HexZone_C_Protector_Destroyed_Params params;
	params.Protector = Protector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.ExecuteUbergraph_TC_HexZone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexZone_C::ExecuteUbergraph_TC_HexZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.ExecuteUbergraph_TC_HexZone");

	ATC_HexZone_C_ExecuteUbergraph_TC_HexZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexZone.TC_HexZone_C.Flag Info Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ATC_HexZone_C::Flag_Info_Changed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexZone.TC_HexZone_C.Flag Info Changed__DelegateSignature");

	ATC_HexZone_C_Flag_Info_Changed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
