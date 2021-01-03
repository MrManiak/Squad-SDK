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

// Function BP_WeatherSystem.BP_WeatherSystem_C.SetupGlobalWind
struct ABP_WeatherSystem_C_SetupGlobalWind_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.SetupWindMaterial
struct ABP_WeatherSystem_C_SetupWindMaterial_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.drawRoom
struct ABP_WeatherSystem_C_drawRoom_Params
{
	float                                              CeilingHeight;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoomWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoomLenght;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EPhysicalSurface>                      FloorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnParticleSystem
struct ABP_WeatherSystem_C_SpawnParticleSystem_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.WeatherSystemDirection
struct ABP_WeatherSystem_C_WeatherSystemDirection_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnDistantParticleSystem
struct ABP_WeatherSystem_C_SpawnDistantParticleSystem_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.SetRadius
struct ABP_WeatherSystem_C_SetRadius_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.UserConstructionScript
struct ABP_WeatherSystem_C_UserConstructionScript_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoomType
struct ABP_WeatherSystem_C_CheckRoomType_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoofMaterial
struct ABP_WeatherSystem_C_CheckRoofMaterial_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.ResetSpawningParticles
struct ABP_WeatherSystem_C_ResetSpawningParticles_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.LeaveNegativeArea
struct ABP_WeatherSystem_C_LeaveNegativeArea_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.EnterNegativeArea
struct ABP_WeatherSystem_C_EnterNegativeArea_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.ApplyWeatherToMap
struct ABP_WeatherSystem_C_ApplyWeatherToMap_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.SetEffectLocation
struct ABP_WeatherSystem_C_SetEffectLocation_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckPlayerProximity
struct ABP_WeatherSystem_C_CheckPlayerProximity_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.UpdateWeatherDirection
struct ABP_WeatherSystem_C_UpdateWeatherDirection_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveBeginPlay
struct ABP_WeatherSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveTick
struct ABP_WeatherSystem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WeatherSystem.BP_WeatherSystem_C.ExecuteUbergraph_BP_WeatherSystem
struct ABP_WeatherSystem_C_ExecuteUbergraph_BP_WeatherSystem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
