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

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess A Menu Cam
struct ABP_MainMenu_PC_C_Possess_A_Menu_Cam_Params
{
};

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.ReceiveBeginPlay
struct ABP_MainMenu_PC_C_ReceiveBeginPlay_Params
{
};

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess Menu Cam
struct ABP_MainMenu_PC_C_Possess_Menu_Cam_Params
{
	class AMenuCamPawn_C*                              NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.ExecuteUbergraph_BP_MainMenu_PC
struct ABP_MainMenu_PC_C_ExecuteUbergraph_BP_MainMenu_PC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.PossessedMenuCam__DelegateSignature
struct ABP_MainMenu_PC_C_PossessedMenuCam__DelegateSignature_Params
{
	class AMenuCamPawn_C*                              NewMenuCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
