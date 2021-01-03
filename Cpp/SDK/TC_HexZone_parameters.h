#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function TC_HexZone.TC_HexZone_C.Refresh Protection
struct ATC_HexZone_C_Refresh_Protection_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Get Protected By Neighbours
struct ATC_HexZone_C_Get_Protected_By_Neighbours_Params
{
	bool                                               Protected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TC_HexZone.TC_HexZone_C.Set ID
struct ATC_HexZone_C_Set_ID_Params
{
	int                                                Hex_Num;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.Calculate Can Capture
struct ATC_HexZone_C_Calculate_Can_Capture_Params
{
	int                                                Nearby_Zones;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Capture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TC_HexZone.TC_HexZone_C.Refresh Local Zones
struct ATC_HexZone_C_Refresh_Local_Zones_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Refresh Can Cap
struct ATC_HexZone_C_Refresh_Can_Cap_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Cache Local Hexes
struct ATC_HexZone_C_Cache_Local_Hexes_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Init Data
struct ATC_HexZone_C_Init_Data_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Refresh Zone Debug
struct ATC_HexZone_C_Refresh_Zone_Debug_Params
{
};

// Function TC_HexZone.TC_HexZone_C.UserConstructionScript
struct ATC_HexZone_C_UserConstructionScript_Params
{
};

// Function TC_HexZone.TC_HexZone_C.ReceiveBeginPlay
struct ATC_HexZone_C_ReceiveBeginPlay_Params
{
};

// Function TC_HexZone.TC_HexZone_C.State Changed Notify
struct ATC_HexZone_C_State_Changed_Notify_Params
{
	unsigned char                                      Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.Debug
struct ATC_HexZone_C_Debug_Params
{
};

// Function TC_HexZone.TC_HexZone_C.ReceiveTick
struct ATC_HexZone_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.State Changed
struct ATC_HexZone_C_State_Changed_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.Make Team One
struct ATC_HexZone_C_Make_Team_One_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Make Team Two
struct ATC_HexZone_C_Make_Team_Two_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Make Team Neutral
struct ATC_HexZone_C_Make_Team_Neutral_Params
{
};

// Function TC_HexZone.TC_HexZone_C.Protector Destroyed
struct ATC_HexZone_C_Protector_Destroyed_Params
{
	class AActor*                                      Protector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.ExecuteUbergraph_TC_HexZone
struct ATC_HexZone_C_ExecuteUbergraph_TC_HexZone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TC_HexZone.TC_HexZone_C.Flag Info Changed__DelegateSignature
struct ATC_HexZone_C_Flag_Info_Changed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
