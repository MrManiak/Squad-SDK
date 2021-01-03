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

// Function W_ControlledCameraList.W_ControlledCameraList_C.Check Player Wounded
struct UW_ControlledCameraList_C_Check_Player_Wounded_Params
{
};

// Function W_ControlledCameraList.W_ControlledCameraList_C.Update Button Visibilities
struct UW_ControlledCameraList_C_Update_Button_Visibilities_Params
{
};

// Function W_ControlledCameraList.W_ControlledCameraList_C.Construct
struct UW_ControlledCameraList_C_Construct_Params
{
};

// Function W_ControlledCameraList.W_ControlledCameraList_C.Add New Camera
struct UW_ControlledCameraList_C_Add_New_Camera_Params
{
	class UW_CamControlButton_C*                       Cam_Button;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ControlledCameraList.W_ControlledCameraList_C.ExecuteUbergraph_W_ControlledCameraList
struct UW_ControlledCameraList_C_ExecuteUbergraph_W_ControlledCameraList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
