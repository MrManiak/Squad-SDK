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

// Function TC_HexGraph.TC_HexGraph_C.Get Valid Anchor Hexes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ATC_HexZone_C*>   Out_Team_1_Hexes               (Parm, OutParm, ZeroConstructor)
// TArray<class ATC_HexZone_C*>   Out_Team_2_Hexes               (Parm, OutParm, ZeroConstructor)
void ATC_HexGraph_C::Get_Valid_Anchor_Hexes(TArray<class ATC_HexZone_C*>* Out_Team_1_Hexes, TArray<class ATC_HexZone_C*>* Out_Team_2_Hexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Get Valid Anchor Hexes");

	ATC_HexGraph_C_Get_Valid_Anchor_Hexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Team_1_Hexes != nullptr)
		*Out_Team_1_Hexes = params.Out_Team_1_Hexes;
	if (Out_Team_2_Hexes != nullptr)
		*Out_Team_2_Hexes = params.Out_Team_2_Hexes;

}


// Function TC_HexGraph.TC_HexGraph_C.Get Neighbour Chain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATC_HexZone_C*>   Chain                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATC_HexZone_C*           Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATC_HexZone_C*>   Out_Chain                      (Parm, OutParm, ZeroConstructor)
void ATC_HexGraph_C::Get_Neighbour_Chain(TArray<class ATC_HexZone_C*>* Chain, int Team, class ATC_HexZone_C* Zone, TArray<class ATC_HexZone_C*>* Out_Chain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Get Neighbour Chain");

	ATC_HexGraph_C_Get_Neighbour_Chain_Params params;
	params.Team = Team;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Chain != nullptr)
		*Chain = params.Chain;
	if (Out_Chain != nullptr)
		*Out_Chain = params.Out_Chain;

}


// Function TC_HexGraph.TC_HexGraph_C.Update Anchor Flags
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Update_Anchor_Flags()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Update Anchor Flags");

	ATC_HexGraph_C_Update_Anchor_Flags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Check Win Condition
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Check_Win_Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Check Win Condition");

	ATC_HexGraph_C_Check_Win_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Construct Hex Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATC_HexZone_C*>   In_Zones                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATC_HexGraph_C::Construct_Hex_Data(TArray<class ATC_HexZone_C*>* In_Zones)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Construct Hex Data");

	ATC_HexGraph_C_Construct_Hex_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_Zones != nullptr)
		*In_Zones = params.In_Zones;

}


// Function TC_HexGraph.TC_HexGraph_C.Refresh Zones
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Refresh_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Refresh Zones");

	ATC_HexGraph_C_Refresh_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Init Start Zones
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Init_Start_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Init Start Zones");

	ATC_HexGraph_C_Init_Start_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Get Start Zones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATC_HexZone_C*           Start_Team_1                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATC_HexZone_C*           Start_Team_2                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexGraph_C::Get_Start_Zones(class ATC_HexZone_C** Start_Team_1, class ATC_HexZone_C** Start_Team_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Get Start Zones");

	ATC_HexGraph_C_Get_Start_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start_Team_1 != nullptr)
		*Start_Team_1 = params.Start_Team_1;
	if (Start_Team_2 != nullptr)
		*Start_Team_2 = params.Start_Team_2;

}


// Function TC_HexGraph.TC_HexGraph_C.Get Team Zone Capture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Num_Zones_Owned                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Percentage_Owned               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexGraph_C::Get_Team_Zone_Capture(int Team, int* Num_Zones_Owned, float* Percentage_Owned)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Get Team Zone Capture");

	ATC_HexGraph_C_Get_Team_Zone_Capture_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Num_Zones_Owned != nullptr)
		*Num_Zones_Owned = params.Num_Zones_Owned;
	if (Percentage_Owned != nullptr)
		*Percentage_Owned = params.Percentage_Owned;

}


// Function TC_HexGraph.TC_HexGraph_C.Clamp Ownership
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Clamp_Ownership()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Clamp Ownership");

	ATC_HexGraph_C_Clamp_Ownership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Init Play Hex Data
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Init_Play_Hex_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Init Play Hex Data");

	ATC_HexGraph_C_Init_Play_Hex_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Destroy Hex Zones
// (Public, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Destroy_Hex_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Destroy Hex Zones");

	ATC_HexGraph_C_Destroy_Hex_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Create Hex Zones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Create_Hex_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Create Hex Zones");

	ATC_HexGraph_C_Create_Hex_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Can Spawn Hex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Spawn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATC_HexGraph_C::Can_Spawn_Hex(const struct FVector& WorldLocation, bool* Can_Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Can Spawn Hex");

	ATC_HexGraph_C_Can_Spawn_Hex_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Spawn != nullptr)
		*Can_Spawn = params.Can_Spawn;

}


// Function TC_HexGraph.TC_HexGraph_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.UserConstructionScript");

	ATC_HexGraph_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATC_HexGraph_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.ReceiveBeginPlay");

	ATC_HexGraph_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexGraph_C::State_Changed(class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.State Changed");

	ATC_HexGraph_C_State_Changed_Params params;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.Cache Team Hex Ownership
// (BlueprintCallable, BlueprintEvent)
void ATC_HexGraph_C::Cache_Team_Hex_Ownership()
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.Cache Team Hex Ownership");

	ATC_HexGraph_C_Cache_Team_Hex_Ownership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TC_HexGraph.TC_HexGraph_C.ExecuteUbergraph_TC_HexGraph
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATC_HexGraph_C::ExecuteUbergraph_TC_HexGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TC_HexGraph.TC_HexGraph_C.ExecuteUbergraph_TC_HexGraph");

	ATC_HexGraph_C_ExecuteUbergraph_TC_HexGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
