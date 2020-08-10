#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function MenuCamPawn.MenuCamPawn_C.GetTeamId
struct AMenuCamPawn_C_GetTeamId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuCamPawn.MenuCamPawn_C.Move Camera
struct AMenuCamPawn_C_Move_Camera_Params
{
	TEnumAsByte<EMenuCameraScreen>                     New_Camera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MenuCamPawn.MenuCamPawn_C.Find Menu Cameras
struct AMenuCamPawn_C_Find_Menu_Cameras_Params
{
};

// Function MenuCamPawn.MenuCamPawn_C.Stop Menu Camera Movement
struct AMenuCamPawn_C_Stop_Menu_Camera_Movement_Params
{
};

// Function MenuCamPawn.MenuCamPawn_C.Animate Move
struct AMenuCamPawn_C_Animate_Move_Params
{
};

// Function MenuCamPawn.MenuCamPawn_C.OnTeamChange
struct AMenuCamPawn_C_OnTeamChange_Params
{
	int                                                PreviousTeam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuCamPawn.MenuCamPawn_C.ReceiveTick
struct AMenuCamPawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuCamPawn.MenuCamPawn_C.ReceiveBeginPlay
struct AMenuCamPawn_C_ReceiveBeginPlay_Params
{
};

// Function MenuCamPawn.MenuCamPawn_C.ExecuteUbergraph_MenuCamPawn
struct AMenuCamPawn_C_ExecuteUbergraph_MenuCamPawn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
